/*
 * XREFs of WbAllocateSlots @ 0x140548924
 * Callers:
 *     sub_1405488E8 @ 0x1405488E8 (sub_1405488E8.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140192D80 (memset.c)
 *     sub_140548AD4 @ 0x140548AD4 (sub_140548AD4.c)
 */

__int64 __fastcall WbAllocateSlots(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // r12
  unsigned int v5; // esi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v10; // rdi
  PRTL_BALANCED_NODE v11; // rbp
  signed __int64 v12; // r11
  unsigned int v13; // r10d
  _BYTE *v14; // rcx
  int v15; // eax
  struct _KTHREAD *v16; // rax
  PRTL_BALANCED_NODE v17; // rax
  PRTL_BALANCED_NODE v18; // rbp

  v4 = 0LL;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v10 = (signed __int64 *)(a1 + 1072);
  v11 = KeAbPreAcquire(a1 + 1072, 0LL, 0);
  if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, v11, (ULONG_PTR)v10);
  v12 = 0LL;
  if ( v11 )
    BYTE2(v11[1].Left) |= 1u;
  v13 = a3 + 1;
  while ( 1 )
  {
    if ( v5 >= v13 )
    {
LABEL_10:
      v5 = -1;
    }
    else
    {
      v14 = (_BYTE *)(v5 + a1 + 44);
      while ( *v14 != (_BYTE)v12 )
      {
        ++v5;
        ++v14;
        if ( v5 >= v13 )
          goto LABEL_10;
      }
    }
    if ( v5 == -1 )
      break;
    v15 = sub_140548AD4(a1, v5 + 1, a4 - 1);
    if ( v15 == -1 )
      break;
    v5 = v15 + 1;
  }
  if ( _InterlockedCompareExchange64(v10, v12, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v5 != -1 )
  {
    v16 = KeGetCurrentThread();
    --v16->SpecialApcDisable;
    v17 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v10, v17, (ULONG_PTR)v10);
    if ( v18 )
      BYTE2(v18[1].Left) |= 1u;
    if ( (unsigned int)sub_140548AD4(a1, v5, a4) == -1 )
    {
      v4 = *(_QWORD *)(a1 + 32) + (v5 << 6);
      if ( a4 )
        memset((void *)(a1 + v5 + 44LL), 2, a4 - 1);
      *(_BYTE *)(v5 + a4 - 1 + a1 + 44) = 1;
    }
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v4;
}
