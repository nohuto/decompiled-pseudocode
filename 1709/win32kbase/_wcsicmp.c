/*
 * XREFs of _wcsicmp @ 0x1C00A74A4
 * Callers:
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C003D1EC (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0072B20 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0079CD8 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *Str1, const wchar_t *Str2)
{
  signed __int64 v2; // r9
  unsigned __int16 v3; // r8
  wchar_t v4; // cx

  v2 = (char *)Str1 - (char *)Str2;
  do
  {
    v3 = *(const wchar_t *)((char *)Str2 + v2);
    if ( (unsigned __int16)(v3 - 65) <= 0x19u )
      v3 += 32;
    v4 = *Str2;
    if ( (unsigned __int16)(*Str2 - 65) <= 0x19u )
      v4 += 32;
    ++Str2;
  }
  while ( v3 && v3 == v4 );
  return v3 - v4;
}
