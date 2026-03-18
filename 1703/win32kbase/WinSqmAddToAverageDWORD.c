/*
 * XREFs of WinSqmAddToAverageDWORD @ 0x1C00E7560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WinSqmAddToAverageDWORD(struct _GUID *a1, int a2, int a3)
{
  _WinSqmDWORDEvent(&SQM_ADDTOAVERAGE_DWORD, a1, a2, a3);
}
