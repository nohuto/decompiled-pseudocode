/*
 * XREFs of HUBDSM_CreatingUnknownChildPDOAndReportingToPnp @ 0x1C001CA60
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CreateUnknownPdo @ 0x1C006C8F0 (HUBPDO_CreateUnknownPdo.c)
 */

__int64 __fastcall HUBDSM_CreatingUnknownChildPDOAndReportingToPnp(__int64 a1)
{
  return HUBPDO_CreateUnknownPdo(*(_QWORD *)(a1 + 960));
}
