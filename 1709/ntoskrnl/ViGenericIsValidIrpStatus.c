/*
 * XREFs of ViGenericIsValidIrpStatus @ 0x1407A79C0
 * Callers:
 *     <none>
 * Callees:
 *     IoIsValidIrpStatus @ 0x1407A7880 (IoIsValidIrpStatus.c)
 */

bool __fastcall ViGenericIsValidIrpStatus(__int64 a1, unsigned int a2)
{
  return IoIsValidIrpStatus(a2);
}
