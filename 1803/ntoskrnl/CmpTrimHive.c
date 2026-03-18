/*
 * XREFs of CmpTrimHive @ 0x140495A18
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400070F8 (CmpLoadKeyCommon.c)
 *     CmpUpdatePhaseAccessBit @ 0x14065063C (CmpUpdatePhaseAccessBit.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     HvTrimHive @ 0x140517868 (HvTrimHive.c)
 */

void __fastcall CmpTrimHive(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // r8d
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // al

  if ( CmpAccessBitForPhase == 2 )
  {
    v2 = *(_DWORD *)(a1 + 4808);
    if ( v2 || (v2 = *(_DWORD *)(a1 + 4812)) != 0 )
    {
      CmpLockRegistry();
      ExAcquirePushLockSharedEx(a1 + 72, 0LL);
      ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
      v3 = *(_DWORD *)(a1 + 272);
      *(_DWORD *)(a1 + 4812) = v2;
      *(_DWORD *)(a1 + 4816) = v3;
      HvTrimHive(a1, v2);
      v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80), v4, v5, v6);
      KeAbPostRelease(a1 + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
      KeAbPostRelease(a1 + 72);
      CmpUnlockRegistry();
    }
  }
}
