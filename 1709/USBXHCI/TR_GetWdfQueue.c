/*
 * XREFs of TR_GetWdfQueue @ 0x1C00233A0
 * Callers:
 *     Endpoint_Create @ 0x1C005AF24 (Endpoint_Create.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_GetWdfQueue(__int64 a1)
{
  return *(_QWORD *)(a1 + 72);
}
