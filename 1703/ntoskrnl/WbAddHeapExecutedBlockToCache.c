/*
 * XREFs of WbAddHeapExecutedBlockToCache @ 0x1404410F4
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14053B7A0 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140441208 (WbAddHeapExecutedBlockToLRU.c)
 *     sub_1404412D8 @ 0x1404412D8 (sub_1404412D8.c)
 *     WbFindHeapExecutedBlock @ 0x1404413EC (WbFindHeapExecutedBlock.c)
 *     sub_14053CA84 @ 0x14053CA84 (sub_14053CA84.c)
 */

__int64 __fastcall WbAddHeapExecutedBlockToCache(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rsi
  PRTL_BALANCED_NODE v8; // rax
  PRTL_BALANCED_NODE v9; // rdi
  int HeapExecutedBlock; // eax
  int v11; // r8d
  int v12; // edi
  int v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v14 = 0;
  v15 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 48);
  v8 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
  if ( v9 )
    BYTE2(v9[1].Left) |= 1u;
  HeapExecutedBlock = WbFindHeapExecutedBlock(a1, *(_QWORD *)(a2 + 48), &v15, &v14);
  v12 = HeapExecutedBlock;
  if ( HeapExecutedBlock >= 0 )
  {
    if ( a3 )
      *a3 = v15;
  }
  else if ( HeapExecutedBlock == -1073741198 )
  {
    v12 = sub_1404412D8((int)a1 + 8, a2, v11, *(_QWORD *)(a2 + 48), 8, v14);
    if ( v12 >= 0 )
    {
      v12 = sub_14053CA84(a2);
      if ( v12 >= 0 )
      {
        if ( a3 )
          *a3 = 0LL;
        v12 = WbAddHeapExecutedBlockToLRU(a1, a2);
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
