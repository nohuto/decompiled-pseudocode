/*
 * XREFs of ndisWdmPnPAddDevice @ 0x1C00AF8A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisPnPAddDevice @ 0x1C00AF8C0 (ndisPnPAddDevice.c)
 */

__int64 __fastcall ndisWdmPnPAddDevice(__int64 a1, __int64 a2)
{
  return ndisPnPAddDevice(a1, a2, 0LL, 0LL);
}
