/*
 * XREFs of TR_GetWdfQueue @ 0x1C0020C6C
 * Callers:
 *     Endpoint_Create @ 0x1C0057FA8 (Endpoint_Create.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_GetWdfQueue(__int64 a1)
{
  return *(_QWORD *)(a1 + 72);
}
