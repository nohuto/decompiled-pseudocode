/*
 * XREFs of WbGetHeapExecutedBlock @ 0x14050F76C
 * Callers:
 *     WbHeapExecuteCall @ 0x14050EC60 (WbHeapExecuteCall.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     sub_14050EEB8 @ 0x14050EEB8 (sub_14050EEB8.c)
 *     sub_14050F8B4 @ 0x14050F8B4 (sub_14050F8B4.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x14050F9F8 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbCreateHeapExecutedBlock @ 0x140539C10 (WbCreateHeapExecutedBlock.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14053AB8C (WbAddHeapExecutedBlockToCache.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x14056EF30 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 */

__int64 __fastcall WbGetHeapExecutedBlock(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  int v9; // edi
  __int64 v10; // rbx
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // [rsp+70h] [rbp+40h] BYREF
  __int64 v15; // [rsp+88h] [rbp+58h] BYREF

  v5 = (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 56));
  v14 = 0LL;
  v15 = 0LL;
  WbReleaseLeastRecentlyUsedHeapExecutedBlocks(a1, v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 48), v8, a1 + 48);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = sub_14050EEB8(a1, *(_QWORD *)(a2 + 256), &v14, 0LL);
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
      sub_14050F8B4(a1, v10);
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
  sub_14050F8B4(a1, v10);
  sub_14050F8B4(a1, v15);
  return (unsigned int)v9;
}
