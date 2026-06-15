/*
 * XREFs of ?StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z @ 0x180065430
 * Callers:
 *     <none>
 * Callees:
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x1800266F8 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180029798 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 */

void __fastcall AtmosCheck::StaticClientAtmosCheckEventFired(AtmosCheck *a1)
{
  AtmosCheck::Trace(a1, "Global\\Client_Atmos_Check_Event is signaled", 0);
  *((_DWORD *)a1 + 36) = 6;
  AtmosCheck::PerformLicenseCheck(a1, 1);
  *((_BYTE *)a1 + 74) = 1;
}
