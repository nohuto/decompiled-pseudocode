/*
 * XREFs of ObDereferenceSecurityDescriptor @ 0x140484DE0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400FAE1C (IopCompleteUnloadOrDelete.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140450E0C (EtwpUpdateLoggerSecurityDescriptor.c)
 *     ObQuerySecurityDescriptorInfo @ 0x140483D4C (ObQuerySecurityDescriptorInfo.c)
 *     ObDeassignSecurity @ 0x140483EE0 (ObDeassignSecurity.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404845B0 (ObSetSecurityDescriptorInfo.c)
 *     ObpAdjustCreatorAccessState @ 0x140484A78 (ObpAdjustCreatorAccessState.c)
 *     ObReleaseObjectSecurity @ 0x140484B60 (ObReleaseObjectSecurity.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140484B90 (SepAppendAceToTokenObjectAcl.c)
 *     ObpReferenceSecurityDescriptor @ 0x140485110 (ObpReferenceSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14048E3EC (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x14048E4C0 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     IopGetSetSecurityObject @ 0x140491160 (IopGetSetSecurityObject.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     ExpWnfDeleteNameInstance @ 0x1404FEC5C (ExpWnfDeleteNameInstance.c)
 *     ExpWnfCreateNameInstance @ 0x1405010B0 (ExpWnfCreateNameInstance.c)
 *     EtwpFreeGuidEntry @ 0x14058B77C (EtwpFreeGuidEntry.c)
 *     EtwpFreeLoggerContext @ 0x14058E0D4 (EtwpFreeLoggerContext.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14058E694 (IopSetDeviceSecurityDescriptor.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
  volatile signed __int64 v11; // rax
  void **v12; // rcx

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
    if ( *(volatile signed __int64 **)(*v3 + 8) != v3 || (v12 = (void **)*((_QWORD *)v3 + 1), *v12 != v3) )
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
