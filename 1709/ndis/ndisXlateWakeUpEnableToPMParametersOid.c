/*
 * XREFs of ndisXlateWakeUpEnableToPMParametersOid @ 0x1C004A998
 * Callers:
 *     ndisOidPostPMParameters @ 0x1C001DC50 (ndisOidPostPMParameters.c)
 *     ndisSetEnableWakeUp @ 0x1C00E174C (ndisSetEnableWakeUp.c)
 * Callees:
 *     ndisConvertWakeUpEnableToPMConfig @ 0x1C004880C (ndisConvertWakeUpEnableToPMConfig.c)
 */

__int64 __fastcall ndisXlateWakeUpEnableToPMParametersOid(__int64 a1)
{
  _DWORD *v1; // rdx
  unsigned int v2; // ecx
  unsigned int v3; // r11d
  _DWORD *v4; // rax

  v1 = *(_DWORD **)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 152);
  if ( v2 >= 0x10 )
  {
    ndisConvertWakeUpEnableToPMConfig(*v1, v1, 2 - (v2 < 0x14));
    v4[8] = -50265847;
    v4[12] = v4[38];
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
