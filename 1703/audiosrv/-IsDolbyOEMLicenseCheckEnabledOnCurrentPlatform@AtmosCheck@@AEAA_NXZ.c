/*
 * XREFs of ?IsDolbyOEMLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180026630
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18004D5A4 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall AtmosCheck::IsDolbyOEMLicenseCheckEnabledOnCurrentPlatform(AtmosCheck *this)
{
  return *((_DWORD *)this + 30) == 3;
}
