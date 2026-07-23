/*
 * XREFs of WbGetHeapExecutedBlock @ 0x1405021D0
 * Callers:
 *     WbHeapExecuteCall @ 0x1405024B0 (WbHeapExecuteCall.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x140501744 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     sub_14050182C @ 0x14050182C (sub_14050182C.c)
 *     sub_140502354 @ 0x140502354 (sub_140502354.c)
 *     WbCreateHeapExecutedBlock @ 0x140503894 (WbCreateHeapExecutedBlock.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140504DC0 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14057642C (WbAddHeapExecutedBlockToCache.c)
 */

__int64 __fastcall WbGetHeapExecutedBlock(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v8; // rdi
  int v9; // esi
  __int64 *v10; // rdi
  int v12; // eax
  __int64 *v13; // rbp
  __int64 *v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v15; // [rsp+88h] [rbp+20h] BYREF

  v5 = (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 56));
  v14 = 0LL;
  v15 = 0LL;
  WbReleaseLeastRecentlyUsedHeapExecutedBlocks(a1, v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 48), (__int64)v8, a1 + 48);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  v9 = sub_14050182C(a1, *(_QWORD *)(a2 + 256), &v14, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 == -1073741198 )
  {
    v12 = WbCreateHeapExecutedBlock(a1, a2, &v14);
    v10 = v14;
    v9 = v12;
    if ( v12 < 0 )
      goto LABEL_11;
    v9 = WbAddHeapExecutedBlockToCache(a1, v14, &v15);
    if ( v9 < 0 )
      goto LABEL_11;
    v13 = v15;
    if ( v15 )
    {
      sub_140502354(a1, v10);
      v10 = v13;
      v15 = 0LL;
    }
  }
  else
  {
    v10 = v14;
    if ( v9 < 0 )
      goto LABEL_11;
  }
  WbMoveHeapExecutedBlockToBackOfLRU(a1, v10);
  if ( a3 )
  {
    *a3 = v10;
    v10 = 0LL;
  }
LABEL_11:
  sub_140502354(a1, v10);
  sub_140502354(a1, v15);
  return (unsigned int)v9;
}
