/*
 * XREFs of ObQueryObjectAuditingByHandle @ 0x140428870
 * Callers:
 *     <none>
 * Callees:
 *     ObpIsKernelHandle @ 0x14008BBC0 (ObpIsKernelHandle.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x1404FA960 (ExMapHandleToPointer.c)
 */

NTSTATUS __stdcall ObQueryObjectAuditingByHandle(HANDLE Handle, PBOOLEAN GenerateOnClose)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rcx
  NTSTATUS v5; // edi
  ULONG_PTR v6; // rbp
  volatile signed __int64 *v7; // rax
  char v8; // bl
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
  v7 = (volatile signed __int64 *)ExMapHandleToPointer(v6, v4);
  if ( v7 )
  {
    v8 = ((__int64)*(unsigned int *)v7 >> 17) & 7 | 8;
    if ( (v7[1] & 0x2000000) == 0 )
      v8 = ((__int64)*(unsigned int *)v7 >> 17) & 7;
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
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v5;
}
