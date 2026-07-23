/*
 * XREFs of WbGetHeapExecutedBlock @ 0x14053B7A0
 * Callers:
 *     WbHeapExecuteCall @ 0x14053C4C0 (WbHeapExecuteCall.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1404410F4 (WbAddHeapExecutedBlockToCache.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x14053B6C0 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     sub_14053B960 @ 0x14053B960 (sub_14053B960.c)
 *     sub_14053CA84 @ 0x14053CA84 (sub_14053CA84.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x14054801C (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbCreateHeapExecutedBlock @ 0x1405481A0 (WbCreateHeapExecutedBlock.c)
 *     sub_140548560 @ 0x140548560 (sub_140548560.c)
 *     WbFreeUserMemory @ 0x14054902C (WbFreeUserMemory.c)
 */

__int64 __fastcall WbGetHeapExecutedBlock(__int64 a1, __int64 a2, volatile signed __int64 **a3)
{
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v8; // rbx
  __int64 v9; // rdx
  int v10; // ebx
  void *v11; // rdx
  volatile signed __int64 *v12; // rdi
  int v14; // eax
  volatile signed __int64 *v15; // rsi
  _QWORD *v16; // rdi
  _QWORD *v17; // rdi
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF
  PVOID v20; // [rsp+88h] [rbp+20h] BYREF

  v5 = (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 56));
  P = 0LL;
  v20 = 0LL;
  WbReleaseLeastRecentlyUsedHeapExecutedBlocks(a1, v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 48), v8, a1 + 48);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  v9 = *(_QWORD *)(a2 + 256);
  v18 = 0LL;
  v10 = sub_14053B960((int)a1 + 8, v9, 8, (unsigned int)&v18, 0LL);
  if ( v10 >= 0 )
  {
    v10 = sub_14053CA84(v18);
    if ( v10 >= 0 )
      P = v11;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v10 == -1073741198 )
  {
    v14 = WbCreateHeapExecutedBlock(a1, a2, &P);
    v12 = (volatile signed __int64 *)P;
    v10 = v14;
    if ( v14 < 0 )
      goto LABEL_20;
    v10 = WbAddHeapExecutedBlockToCache(a1, (__int64)P, &v20);
    if ( v10 < 0 )
      goto LABEL_20;
    v15 = (volatile signed __int64 *)v20;
    if ( v20 )
    {
      sub_140548560(a1, v12);
      v12 = v15;
      P = (PVOID)v15;
      v20 = 0LL;
    }
  }
  else
  {
    v12 = (volatile signed __int64 *)P;
    if ( v10 < 0 )
      goto LABEL_20;
  }
  WbMoveHeapExecutedBlockToBackOfLRU(a1, (__int64 *)v12);
  if ( a3 )
  {
    *a3 = v12;
    goto LABEL_14;
  }
LABEL_20:
  if ( v12 && _InterlockedExchangeAdd64(v12 + 10, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v16 = P;
    if ( *((_QWORD *)P + 5) )
    {
      WbFreeUserMemory(a1);
      v16[5] = 0LL;
      v16[3] = 0LL;
      v16[4] = 0LL;
      *((_DWORD *)v16 + 18) = 0;
    }
    ExFreePoolWithTag(v16, 0x42524157u);
  }
LABEL_14:
  if ( v20 && _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 10, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v17 = v20;
    if ( *((_QWORD *)v20 + 5) )
    {
      WbFreeUserMemory(a1);
      v17[5] = 0LL;
      v17[3] = 0LL;
      v17[4] = 0LL;
      *((_DWORD *)v17 + 18) = 0;
    }
    ExFreePoolWithTag(v17, 0x42524157u);
  }
  return (unsigned int)v10;
}
