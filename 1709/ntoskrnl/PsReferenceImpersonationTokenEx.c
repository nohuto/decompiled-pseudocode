/*
 * XREFs of PsReferenceImpersonationTokenEx @ 0x14049D120
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x14006A3A0 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeCreateClientSecurity @ 0x14049CBB0 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x14049CD70 (SeCreateClientSecurityEx.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     ObpReferenceDeviceMap @ 0x1404C64B0 (ObpReferenceDeviceMap.c)
 *     CmpCmdHiveOpen @ 0x1404DD728 (CmpCmdHiveOpen.c)
 *     CmpBuildAdminInformation @ 0x140690E6C (CmpBuildAdminInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsReferenceImpersonationTokenEx(__int64 a1, char a2, _BYTE *a3, bool *a4, int *a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v12; // r13
  void *v13; // rdi

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
      *a3 = 0;
    }
    else
    {
      v13 = (void *)(*(_QWORD *)(a1 + 1640) & 0xFFFFFFFFFFFFFFF8uLL);
      *a3 = BYTE1(*(_DWORD *)(a1 + 1744)) & 1;
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1728), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1728));
  KeAbPostRelease(a1 + 1728);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v13;
}
