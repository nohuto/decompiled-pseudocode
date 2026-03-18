/*
 * XREFs of _CmClassPropertyRead @ 0x1401465E8
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140504E60 (PiPnpRtlCmActionCallback.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1405CD6FC (_CmGetInstallerClassRegPropWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1407E943C (_CmSetInstallerClassRegPropWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmClassPropertyRead(int a1)
{
  if ( a1 > 19 )
    return a1 > 23 && (a1 == 24 || a1 != 25 && a1 <= 28);
  return a1 >= 18 || a1 >= 8 && (a1 == 8 || a1 == 13);
}
