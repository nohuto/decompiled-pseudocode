/*
 * XREFs of ndisFIndicateStatusWrapper @ 0x1C00064D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisFIndicateStatusInternal @ 0x1C00064EC (ndisFIndicateStatusInternal.c)
 */

void __fastcall ndisFIndicateStatusWrapper(_QWORD *Parameter)
{
  ndisFIndicateStatusInternal(Parameter[1], Parameter[3]);
}
