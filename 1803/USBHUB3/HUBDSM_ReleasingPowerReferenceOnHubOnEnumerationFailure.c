/*
 * XREFs of HUBDSM_ReleasingPowerReferenceOnHubOnEnumerationFailure @ 0x1C001A470
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_ReleaseWdfPowerReferenceOnHub @ 0x1C0016E4C (HUBPDO_ReleaseWdfPowerReferenceOnHub.c)
 */

__int64 __fastcall HUBDSM_ReleasingPowerReferenceOnHubOnEnumerationFailure(__int64 a1)
{
  HUBPDO_ReleaseWdfPowerReferenceOnHub(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
