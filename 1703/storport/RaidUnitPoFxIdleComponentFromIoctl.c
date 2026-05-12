/*
 * XREFs of RaidUnitPoFxIdleComponentFromIoctl @ 0x1C003DE78
 * Callers:
 *     RaUnitStoragePowerIdle @ 0x1C003B8B4 (RaUnitStoragePowerIdle.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0004BA0 (RaidUnitPoFxIdleComponent.c)
 */

__int64 __fastcall RaidUnitPoFxIdleComponentFromIoctl(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  RaidUnitPoFxIdleComponent(a1, 0, 2u, 0LL);
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1456) + 40LL));
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  }
  result = *(_QWORD *)(v1 + 5088);
  if ( result )
    _InterlockedDecrement64((volatile signed __int64 *)(result + 80));
  return result;
}
