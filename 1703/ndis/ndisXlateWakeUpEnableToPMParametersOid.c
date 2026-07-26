/*
 * XREFs of ndisXlateWakeUpEnableToPMParametersOid @ 0x1C004D0E4
 * Callers:
 *     ndisOidPostPMParameters @ 0x1C0022100 (ndisOidPostPMParameters.c)
 *     ndisSetEnableWakeUp @ 0x1C00D72FC (ndisSetEnableWakeUp.c)
 * Callees:
 *     ndisConvertWakeUpEnableToPMConfig @ 0x1C004AD88 (ndisConvertWakeUpEnableToPMConfig.c)
 */

void __fastcall ndisXlateWakeUpEnableToPMParametersOid(__int64 a1)
{
  _DWORD *v1; // rdx
  unsigned int v2; // ecx
  _DWORD *v3; // r11

  v1 = *(_DWORD **)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 152);
  if ( v2 >= 0x10 )
  {
    ndisConvertWakeUpEnableToPMConfig(*v1, v1, 2 - (v2 < 0x14));
    v3[8] = -50265847;
    v3[12] = v3[38];
  }
}
