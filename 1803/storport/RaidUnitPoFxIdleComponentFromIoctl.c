/*
 * XREFs of RaidUnitPoFxIdleComponentFromIoctl @ 0x1C003D324
 * Callers:
 *     RaUnitStoragePowerIdle @ 0x1C003B7E4 (RaUnitStoragePowerIdle.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0006468 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00069E4 (RaidUnitCheckAndAcquirePoFx.c)
 */

__int64 __fastcall RaidUnitPoFxIdleComponentFromIoctl(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  RaidUnitPoFxIdleComponent(a1, 0, 2u, 0LL);
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1488) + 40LL));
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  }
  result = *(_QWORD *)(v1 + 5088);
  if ( result )
    _InterlockedDecrement64((volatile signed __int64 *)(result + 80));
  return result;
}
