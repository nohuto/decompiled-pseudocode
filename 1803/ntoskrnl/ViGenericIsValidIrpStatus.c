/*
 * XREFs of ViGenericIsValidIrpStatus @ 0x140814B50
 * Callers:
 *     <none>
 * Callees:
 *     IoIsValidIrpStatus @ 0x140814A00 (IoIsValidIrpStatus.c)
 */

bool __fastcall ViGenericIsValidIrpStatus(__int64 a1, unsigned int a2)
{
  return IoIsValidIrpStatus(a2);
}
