/*
 * XREFs of PsReferenceImpersonationTokenEx @ 0x1404C9060
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400EF560 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SeCreateClientSecurityEx @ 0x1404C92A0 (SeCreateClientSecurityEx.c)
 *     CmpCmdHiveOpen @ 0x1404F7D70 (CmpCmdHiveOpen.c)
 *     ObpReferenceDeviceMap @ 0x1404FD200 (ObpReferenceDeviceMap.c)
 *     PsReferenceImpersonationToken @ 0x140564C10 (PsReferenceImpersonationToken.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

void *__fastcall PsReferenceImpersonationTokenEx(__int64 a1, char a2, _BYTE *a3, bool *a4, int *a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v12; // r13
  void *v13; // rdi
  char v14; // al

  if ( (*(_DWORD *)(a1 + 1744) & 8) == 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = *(_QWORD *)(a1 + 544);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 1728, 0LL);
  if ( (*(_DWORD *)(a1 + 1744) & 8) != 0 )
  {
    if ( (a2 & 1) != 0 && (v13 = *(void **)(a1 + 1912)) != 0LL )
    {
      v14 = 0;
    }
    else
    {
      v13 = (void *)(*(_QWORD *)(a1 + 1640) & 0xFFFFFFFFFFFFFFF8uLL);
      v14 = BYTE1(*(_DWORD *)(a1 + 1744)) & 1;
    }
    *a3 = v14;
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1728), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1728));
  KeAbPostRelease(a1 + 1728);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v13;
}
