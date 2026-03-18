/*
 * XREFs of ObDereferenceSecurityDescriptor @ 0x1404C7150
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14009FB48 (IopCompleteUnloadOrDelete.c)
 *     EtwpFreeLoggerContext @ 0x140493884 (EtwpFreeLoggerContext.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1404A5144 (ObQuerySecurityDescriptorInfo.c)
 *     ObpReferenceSecurityDescriptor @ 0x1404C1F80 (ObpReferenceSecurityDescriptor.c)
 *     ObReleaseObjectSecurity @ 0x1404C3DA0 (ObReleaseObjectSecurity.c)
 *     SeDefaultObjectMethod @ 0x1404C6D40 (SeDefaultObjectMethod.c)
 *     IopGetSetSecurityObject @ 0x1404D2090 (IopGetSetSecurityObject.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404EB030 (ObSetSecurityDescriptorInfo.c)
 *     ExpWnfCreateNameInstance @ 0x1404F5F84 (ExpWnfCreateNameInstance.c)
 *     ObDeassignSecurity @ 0x14055D350 (ObDeassignSecurity.c)
 *     ObpAdjustCreatorAccessState @ 0x140562B1C (ObpAdjustCreatorAccessState.c)
 *     ExpWnfDeleteNameInstance @ 0x140567528 (ExpWnfDeleteNameInstance.c)
 *     EtwpFreeGuidEntry @ 0x14058E35C (EtwpFreeGuidEntry.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x14058F208 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140591ABC (EtwpReferenceLoggerSecurityDescriptor.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140603064 (IopSetDeviceSecurityDescriptor.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1407B292C (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall ObDereferenceSecurityDescriptor(__int64 a1, unsigned int a2)
{
  volatile signed __int64 *v3; // rbx
  signed __int64 v4; // rax
  __int64 v5; // rsi
  signed __int64 v6; // rcx
  signed __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int64 *v9; // rbp
  volatile signed __int64 *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  volatile signed __int64 *i; // rcx

  v3 = (volatile signed __int64 *)(a1 - 32);
  _m_prefetchw((const void *)(a1 - 32 + 8));
  v4 = *(_QWORD *)(a1 - 32 + 8);
  v5 = a2;
  v6 = v4 - a2;
  if ( v6 <= 0 )
  {
LABEL_4:
    if ( v6 )
      __fastfail(0xEu);
    CurrentThread = KeGetCurrentThread();
    v9 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v3 + 4));
    --CurrentThread->KernelApcDisable;
    v10 = v9 + 1;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v9, 0LL);
    v14 = _InterlockedExchangeAdd64(v3 + 1, -a2) - v5;
    if ( v14 > 0 )
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v9, v11, v12, v13);
      KeAbPostRelease((ULONG_PTR)v9);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    else
    {
      if ( v14 )
        __fastfail(0xEu);
      for ( i = (volatile signed __int64 *)*v10; i != v3; i = (volatile signed __int64 *)*i )
        v10 = i;
      *v10 = *v3;
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v9, v11, v12, v13);
      KeAbPostRelease((ULONG_PTR)v9);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      ExFreePoolWithTag((PVOID)v3, 0x6353624Fu);
    }
  }
  else
  {
    while ( 1 )
    {
      v7 = v4;
      v4 = _InterlockedCompareExchange64(v3 + 1, v6, v4);
      if ( v7 == v4 )
        break;
      v6 = v4 - a2;
      if ( v6 <= 0 )
        goto LABEL_4;
    }
  }
}
