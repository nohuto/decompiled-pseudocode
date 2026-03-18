/*
 * XREFs of MiProcessTransitionHeatBatch @ 0x1402590DC
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MmCopyToCachedPage @ 0x1401130D0 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400A27C0 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     HvlNotifyPageHeat @ 0x1402CA4CC (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiProcessTransitionHeatBatch(unsigned int *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KLOCK_ENTRY *v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // r9
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r10
  __int64 v11; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)&qword_1403CDFF8, 0LL, 1);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403CDFF8, 17LL, 0LL)
    || ExfTryAcquirePushLockShared(&qword_1403CDFF8) )
  {
    if ( v3 )
      v3->AcquiredByte |= 1u;
    v4 = a1[1];
    v5 = a1 + 2;
    v6 = (unsigned __int64)&a1[2 * v4 + 2];
    while ( (unsigned __int64)v5 < v6 )
    {
      v7 = *v5 >> 12;
      v8 = (*v5 & 0x3FFLL) + 1;
      v9 = (*v5 >> 10) & 3LL;
      if ( ((*v5 >> 10) & 3) != 0 )
      {
        do
        {
          v8 <<= 9;
          v7 >>= 9;
          LODWORD(v9) = v9 - 1;
        }
        while ( (_DWORD)v9 );
      }
      v10 = v7 + v8;
      while ( v7 < v10 )
      {
        if ( !MiIsPfnInline(v7) )
          goto LABEL_17;
        v7 = v11 + 1;
      }
      ++v5;
    }
    HvlNotifyPageHeat(*a1, v4, ((unsigned __int64)a1 + 15) & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_17:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403CDFF8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1403CDFF8);
    KeAbPostRelease((ULONG_PTR)&qword_1403CDFF8);
  }
  else if ( v3 )
  {
    KeAbPostReleaseEx((ULONG_PTR)&qword_1403CDFF8, v3);
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
