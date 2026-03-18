/*
 * XREFs of _CmClassPropertyRead @ 0x1400816C0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1404E0B68 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x14073BF60 (_CmSetInstallerClassRegPropWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmClassPropertyRead(int a1)
{
  if ( a1 > 19 )
    return a1 > 23 && (a1 == 24 || a1 != 25 && a1 <= 28);
  return a1 >= 18 || a1 >= 8 && (a1 == 8 || a1 == 13);
}
