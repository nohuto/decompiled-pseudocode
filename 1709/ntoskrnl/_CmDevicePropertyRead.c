/*
 * XREFs of _CmDevicePropertyRead @ 0x1400DED50
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x14052263C (_CmGetDeviceRegPropWorker.c)
 *     _CmSetDeviceRegPropWorker @ 0x140551408 (_CmSetDeviceRegPropWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmDevicePropertyRead(__int64 a1, int a2)
{
  if ( a2 <= 7 )
    return a2 < 6 && a2 > 0 && (a2 <= 3 || a2 == 5);
  return a2 <= 24 || a2 != 25 && a2 <= 37;
}
