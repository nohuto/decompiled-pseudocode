/*
 * XREFs of ndisFIndicateStatusWrapper @ 0x1C00172A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 */

void __fastcall ndisFIndicateStatusWrapper(_QWORD *Parameter)
{
  ndisFIndicateStatusInternal(Parameter[1], Parameter[3]);
}
