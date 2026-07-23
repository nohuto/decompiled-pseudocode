/*
 * XREFs of NtCancelIoFileEx @ 0x14056818C
 * Callers:
 *     <none>
 * Callees:
 *     IopReferenceFileObject @ 0x140024E54 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IopCancelIrpsInFileObjectList @ 0x1401082AC (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1404D6FA4 (IopCancelIrpsInThreadListForCurrentProcess.c)
 */

NTSTATUS __cdecl NtCancelIoFileEx(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoRequestToCancel,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  KPROCESSOR_MODE PreviousMode; // r10
  __int64 v6; // r8
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v9; // rdi
  int v10; // eax
  int v11; // ebx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
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
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v9 = Object;
    v10 = IopCancelIrpsInFileObjectList(
            (__int64)Object,
            (int)KeGetCurrentThread()->ApcState.Process,
            (int)IoRequestToCancel,
            0,
            0,
            0);
    v11 = v10;
    if ( !IoRequestToCancel || !v10 )
      v11 = IopCancelIrpsInThreadListForCurrentProcess((__int64)v9, (__int64)IoRequestToCancel) | v10;
    IoStatusBlock->Status = v11 == 0 ? 0xC0000225 : 0;
    IoStatusBlock->Information = 0LL;
    ObfDereferenceObject(v9);
    return v11 == 0 ? 0xC0000225 : 0;
  }
  return result;
}
