/*
 * XREFs of ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180026618
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18004D5A4 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform(AtmosCheck *this)
{
  unsigned int v1; // eax
  int v2; // ecx
  bool result; // al

  v1 = *((_DWORD *)this + 30);
  result = 0;
  if ( v1 <= 0xC )
  {
    v2 = 6184;
    if ( _bittest(&v2, v1) )
      return 1;
  }
  return result;
}
