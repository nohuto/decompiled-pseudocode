/*
 * XREFs of NtCancelIoFile @ 0x140568010
 * Callers:
 *     <none>
 * Callees:
 *     IopReferenceFileObject @ 0x140024E54 (IopReferenceFileObject.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IopCancelIrpsInFileObjectList @ 0x1401082AC (IopCancelIrpsInFileObjectList.c)
 *     IoCancelIrp @ 0x140108640 (IoCancelIrp.c)
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
  unsigned int *p_SystemCallNumber; // rdi
  unsigned int *i; // rbx
  char v12; // bl
  unsigned __int8 v13; // dl
  unsigned int *j; // rcx
  PVOID v15; // rbx
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
    p_SystemCallNumber = &CurrentThread[1].SystemCallNumber;
    for ( i = *(unsigned int **)p_SystemCallNumber; p_SystemCallNumber != i; i = *(unsigned int **)i )
    {
      if ( *((PVOID *)i + 20) == Object )
      {
        v3 = 1;
        IoCancelIrp((PIRP)(i - 8));
      }
    }
    __writecr8(CurrentIrql);
    if ( v3 )
    {
      Interval.QuadPart = -100000LL;
      while ( 1 )
      {
        v12 = 0;
        v13 = KeGetCurrentIrql();
        __writecr8(1uLL);
        for ( j = *(unsigned int **)p_SystemCallNumber; p_SystemCallNumber != j; j = *(unsigned int **)j )
        {
          if ( *((PVOID *)j + 20) == Object )
          {
            v12 = 1;
            break;
          }
        }
        __writecr8(v13);
        if ( !v12 )
          break;
        KeDelayExecutionThread(0, 0, &Interval);
      }
    }
    v15 = Object;
    IopCancelIrpsInFileObjectList(
      (__int64)Object,
      (int)KeGetCurrentThread()->ApcState.Process,
      0,
      (int)KeGetCurrentThread(),
      1,
      0);
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 0LL;
    ObfDereferenceObject(v15);
    return 0;
  }
  return result;
}
