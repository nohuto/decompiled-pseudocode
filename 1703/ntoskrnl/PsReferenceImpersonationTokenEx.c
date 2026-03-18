/*
 * XREFs of PsReferenceImpersonationTokenEx @ 0x14050C610
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x140026074 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepReferenceTokenByHandle @ 0x1400911E0 (SepReferenceTokenByHandle.c)
 *     CmpCmdHiveOpen @ 0x1404D65D8 (CmpCmdHiveOpen.c)
 *     ObpReferenceDeviceMap @ 0x1404EC98C (ObpReferenceDeviceMap.c)
 *     SeCreateClientSecurity @ 0x14050B3A0 (SeCreateClientSecurity.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     CmpBuildAdminInformation @ 0x14056AEC0 (CmpBuildAdminInformation.c)
 * Callees:
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsReferenceImpersonationTokenEx(__int64 a1, char a2, _BYTE *a3, bool *a4, int *a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v12; // r13
  void *v13; // rdi

  if ( (*(_DWORD *)(a1 + 1736) & 8) == 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = *(_QWORD *)(a1 + 544);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 1720, 0LL);
  if ( (*(_DWORD *)(a1 + 1736) & 8) != 0 )
  {
    if ( (a2 & 1) != 0 && (v13 = *(void **)(a1 + 1904)) != 0LL )
    {
      *a3 = 0;
    }
    else
    {
      v13 = (void *)(*(_QWORD *)(a1 + 1640) & 0xFFFFFFFFFFFFFFF8uLL);
      *a3 = BYTE1(*(_DWORD *)(a1 + 1736)) & 1;
    }
    ObfReferenceObject(v13);
    *a5 = *(_DWORD *)(a1 + 1640) & 3;
    *a4 = (*(_BYTE *)(a1 + 1640) & 4) != 0;
    if ( a6 )
      *a6 = *(_BYTE *)(v12 + 1738);
  }
  else
  {
    v13 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1720), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1720));
  KeAbPostRelease(a1 + 1720);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v13;
}
