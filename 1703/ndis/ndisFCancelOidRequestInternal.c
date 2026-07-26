/*
 * XREFs of ndisFCancelOidRequestInternal @ 0x1C0059D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFCancelOidRequestInternal(_QWORD *Parameter)
{
  ndisCancelOidRequestInternal(*(_QWORD *)(Parameter[1] + 32LL), Parameter[1], Parameter[3], 0);
}
