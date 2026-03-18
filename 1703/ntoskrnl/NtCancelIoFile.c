/*
 * XREFs of NtCancelIoFile @ 0x140433004
 * Callers:
 *     <none>
 * Callees:
 *     IopCancelIrpsInFileObjectList @ 0x140018980 (IopCancelIrpsInFileObjectList.c)
 *     IoCancelIrp @ 0x140018D10 (IoCancelIrp.c)
 *     IopReferenceFileObject @ 0x14004F3DC (IopReferenceFileObject.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 */

NTSTATUS __stdcall NtCancelIoFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  char v3; // r14
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // r8
  __int64 v6; // rdx
  NTSTATUS result; // eax
  struct _KTHREAD *v8; // rax
  unsigned __int8 CurrentIrql; // r15
  void **p_FirstArgument; // rdi
  void **i; // rbx
  PVOID v12; // rbx
  char v13; // bl
  unsigned __int8 v14; // dl
  void **j; // rcx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  LARGE_INTEGER Interval; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v6 = (__int64)IoStatusBlock;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = KeGetCurrentThread();
    ++v8->OtherOperationCount;
    __incgsdword(0x2EE4u);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    p_FirstArgument = &CurrentThread[1].FirstArgument;
    for ( i = (void **)*p_FirstArgument; p_FirstArgument != i; i = (void **)*i )
    {
      if ( i[20] == Object )
      {
        v3 = 1;
        IoCancelIrp((PIRP)(i - 4));
      }
    }
    __writecr8(CurrentIrql);
    if ( v3 )
    {
      Interval.QuadPart = -100000LL;
      while ( 2 )
      {
        v13 = 0;
        v14 = KeGetCurrentIrql();
        __writecr8(1uLL);
        for ( j = (void **)*p_FirstArgument; p_FirstArgument != j; j = (void **)*j )
        {
          if ( j[20] == Object )
          {
            v13 = 1;
            break;
          }
        }
        __writecr8(v14);
        if ( v13 )
        {
          KeDelayExecutionThread(0, 0, &Interval);
          continue;
        }
        break;
      }
    }
    v12 = Object;
    IopCancelIrpsInFileObjectList(
      (__int64)Object,
      (int)KeGetCurrentThread()->ApcState.Process,
      0,
      (int)KeGetCurrentThread(),
      1,
      0);
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 0LL;
    ObfDereferenceObject(v12);
    return 0;
  }
  return result;
}
