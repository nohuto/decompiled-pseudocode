/*
 * XREFs of PnpValidateRegistryValue @ 0x1401F99C0
 * Callers:
 *     PiDevCfgResolveVariableConstant @ 0x14069C2D0 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x14069DB70 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14069E410 (PiDevCfgResolveVariableKeyValue.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x14014FC5C (PnpValidateMultiSzData.c)
 *     PnpValidateStringData @ 0x14014FF38 (PnpValidateStringData.c)
 */

char __fastcall PnpValidateRegistryValue(_DWORD *a1)
{
  unsigned int v1; // eax
  char v2; // dl

  v1 = a1[1];
  v2 = 0;
  if ( !v1 )
    return 1;
  if ( v1 <= 2 )
    return PnpValidateStringData((__int64)a1 + (unsigned int)a1[2], a1[3]);
  if ( v1 == 4 )
    return a1[3] == 4;
  if ( v1 == 7 )
    return PnpValidateMultiSzData((_DWORD *)((char *)a1 + (unsigned int)a1[2]), a1[3]);
  if ( v1 != 0x8000 && v1 != -1 )
    return 1;
  return v2;
}
