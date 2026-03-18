/*
 * XREFs of _CmClassPropertyRead @ 0x1400DE6D4
 * Callers:
 *     _CmGetInstallerClassRegPropWorker @ 0x14051D0E8 (_CmGetInstallerClassRegPropWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140780680 (_CmSetInstallerClassRegPropWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmClassPropertyRead(int a1)
{
  if ( a1 > 19 )
    return a1 > 23 && (a1 == 24 || a1 != 25 && a1 <= 28);
  return a1 >= 18 || a1 >= 8 && (a1 == 8 || a1 == 13);
}
