/*
 * XREFs of PopThermalSxExit @ 0x14014DE80
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 */

void __fastcall PopThermalSxExit(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // rdi

  if ( PoResumeFromHibernate )
  {
    PopAcquirePolicyLock(a1);
    if ( PopThermalHibernateInitiated )
    {
      PopThermalHibernateInitiated = 0;
      ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0LL);
    }
    PopReleasePolicyLock(v2, v1, v3);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  v5 = (PVOID *)PopThermal;
  if ( PopThermal != &PopThermal )
  {
    do
    {
      PopAcquireRwLockExclusive((ULONG_PTR)(v5 + 54));
      v5[64] = (PVOID)MEMORY[0xFFFFF78000000008];
      *((_BYTE *)v5 + 504) = 0;
      PopReleaseRwLock((ULONG_PTR)(v5 + 54));
      v5 = (PVOID *)*v5;
    }
    while ( v5 != &PopThermal );
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
