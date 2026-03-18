/*
 * XREFs of ??0?$CLockDomainExclusiveAllowRecursion@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C0068CD4
 * Callers:
 *     ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C0068C90 (-DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CLockDomainExclusiveAllowRecursion<DLT_WINEVENT>::CLockDomainExclusiveAllowRecursion<DLT_WINEVENT>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 *DomainLockRef; // rcx

  DomainLockRef = GetDomainLockRef(5LL, a2);
  *(_QWORD *)a1 = DomainLockRef;
  *(_BYTE *)(a1 + 8) = 0;
  if ( DomainLockRef == &gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(DomainLockRef, v3);
    DomainLockRef = *(__int64 **)a1;
  }
  if ( (struct _KTHREAD *)DomainLockRef[1] == KeGetCurrentThread() )
    *(_BYTE *)(a1 + 8) = 1;
  else
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v3);
  return a1;
}
