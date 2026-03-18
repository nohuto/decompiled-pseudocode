/*
 * XREFs of ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x1C01232CC
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C01235D0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockShared@tagObjLock@@QEAAXXZ @ 0x1C0030750 (-LockShared@tagObjLock@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CBaseInput::IsInputSuppressRequested(CBaseInput *this, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *DomainLockRef; // rbx
  bool v5; // di

  DomainLockRef = GetDomainLockRef(9LL, a2);
  if ( DomainLockRef == &gDomainDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  tagObjLock::LockShared((tagObjLock *)DomainLockRef);
  v5 = dword_1C01A30B0 == 1;
  tagObjLock::UnLock((tagObjLock *)DomainLockRef);
  return v5;
}
