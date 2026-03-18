/*
 * XREFs of ObQueryObjectAuditingByHandle @ 0x1404B8520
 * Callers:
 *     <none>
 * Callees:
 *     ObpIsKernelHandle @ 0x14003EC88 (ObpIsKernelHandle.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x1404B7800 (ExMapHandleToPointer.c)
 */

NTSTATUS __stdcall ObQueryObjectAuditingByHandle(HANDLE Handle, PBOOLEAN GenerateOnClose)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rcx
  NTSTATUS v5; // edi
  __int64 v6; // rbp
  volatile signed __int64 *v7; // rax
  __int64 v8; // rbx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  if ( ObpIsKernelHandle((unsigned __int64)Handle, CurrentThread->PreviousMode) )
  {
    v6 = ObpKernelHandleTable;
    v4 ^= 0xFFFFFFFF80000000uLL;
  }
  else
  {
    v6 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[5];
  }
  --CurrentThread->KernelApcDisable;
  v7 = ExMapHandleToPointer(v6, v4);
  if ( v7 )
  {
    v8 = *(__int64 *)v7 >> 17;
    _InterlockedExchangeAdd64(v7, 1uLL);
    _InterlockedOr(v10, 0);
    if ( *(_QWORD *)(v6 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v6 + 48), 0LL);
    *GenerateOnClose = (v8 & 4) != 0;
  }
  else
  {
    v5 = -1073741816;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}
