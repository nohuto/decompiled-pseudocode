/*
 * XREFs of ObQueryObjectAuditingByHandle @ 0x140572530
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObpIsKernelHandle @ 0x1400A5DF0 (ObpIsKernelHandle.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x1404D4D40 (ExMapHandleToPointer.c)
 */

NTSTATUS __stdcall ObQueryObjectAuditingByHandle(HANDLE Handle, PBOOLEAN GenerateOnClose)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rcx
  NTSTATUS v5; // edi
  ULONG_PTR v6; // rbp
  signed __int64 *v7; // rax
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
  v7 = ExMapHandleToPointer((unsigned int *)v6, v4);
  if ( v7 )
  {
    v8 = *v7 >> 17;
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
