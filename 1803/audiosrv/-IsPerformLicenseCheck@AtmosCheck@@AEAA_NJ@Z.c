/*
 * XREFs of ?IsPerformLicenseCheck@AtmosCheck@@AEAA_NJ@Z @ 0x180111224
 * Callers:
 *     ?PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEAUDolbyLicenseResult@@@Z @ 0x180026870 (-PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEAUDolbyLicenseResult@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall AtmosCheck::IsPerformLicenseCheck(AtmosCheck *this, int a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 36);
  return (v2 != 2 || a2 < 0) && (v2 != 3 || a2 >= 0);
}
