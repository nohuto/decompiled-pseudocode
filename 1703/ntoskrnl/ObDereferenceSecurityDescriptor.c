/*
 * XREFs of ObDereferenceSecurityDescriptor @ 0x1404F48A0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140005A00 (IopCompleteUnloadOrDelete.c)
 *     EtwpFreeLoggerContext @ 0x1404358CC (EtwpFreeLoggerContext.c)
 *     ExpWnfDeleteNameInstance @ 0x140438C24 (ExpWnfDeleteNameInstance.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14044E0A0 (IopSetDeviceSecurityDescriptor.c)
 *     EtwpFreeGuidEntry @ 0x14044E1FC (EtwpFreeGuidEntry.c)
 *     ObDeassignSecurity @ 0x140457700 (ObDeassignSecurity.c)
 *     IopGetSetSecurityObject @ 0x140482710 (IopGetSetSecurityObject.c)
 *     ExpWnfCreateNameInstance @ 0x1404EF640 (ExpWnfCreateNameInstance.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1404F1C0C (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1404F1CD8 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     ObpAdjustCreatorAccessState @ 0x1404F2E14 (ObpAdjustCreatorAccessState.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1404F3234 (ObQuerySecurityDescriptorInfo.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404F3C20 (ObSetSecurityDescriptorInfo.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404F4620 (SepAppendAceToTokenObjectAcl.c)
 *     ObReleaseObjectSecurity @ 0x1404F4870 (ObReleaseObjectSecurity.c)
 *     ObpReferenceSecurityDescriptor @ 0x1404F4BD0 (ObpReferenceSecurityDescriptor.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1407131E0 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall ObDereferenceSecurityDescriptor(__int64 a1, unsigned int a2)
{
  volatile signed __int64 *v3; // rbx
  signed __int64 v4; // rax
  __int64 v5; // rdi
  signed __int64 v6; // rtt
  unsigned __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v9; // rbp
  __int64 v10; // rax
  volatile signed __int64 v11; // rcx
  void **v12; // rax

  v3 = (volatile signed __int64 *)(a1 - 32);
  _m_prefetchw((const void *)(a1 - 32 + 16));
  v4 = *(_QWORD *)(a1 - 32 + 16);
  v5 = a2;
  while ( v4 - a2 > 0 )
  {
    v6 = v4;
    v4 = _InterlockedCompareExchange64(v3 + 2, v4 - a2, v4);
    if ( v6 == v4 )
      return;
  }
  if ( v4 != a2 )
    __fastfail(0xEu);
  v7 = *((_QWORD *)v3 + 3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * (v7 % 0x101));
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v9, 0LL);
  v10 = _InterlockedExchangeAdd64(v3 + 2, -a2) - v5;
  if ( v10 > 0 )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  else
  {
    if ( v10 )
      __fastfail(0xEu);
    v11 = *v3;
    v12 = (void **)*((_QWORD *)v3 + 1);
    if ( *(volatile signed __int64 **)(*v3 + 8) != v3 || *v12 != v3 )
      __fastfail(3u);
    *v12 = (void *)v11;
    *(_QWORD *)(v11 + 8) = v12;
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ExFreePoolWithTag((PVOID)v3, 0);
  }
}
