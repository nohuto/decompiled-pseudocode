/*
 * XREFs of PnpValidateRegistryMultiSz @ 0x14015E3F4
 * Callers:
 *     PiDevCfgResolveMultiSzValue @ 0x1405F2760 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072D8D8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x14072E820 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14072FA50 (PiDevCfgResolveVariableFormatString.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x140147960 (PnpValidateMultiSzData.c)
 */

char __fastcall PnpValidateRegistryMultiSz(_DWORD *a1)
{
  char v1; // r9
  char v2; // al

  v1 = 0;
  if ( a1[1] == 7 )
  {
    v2 = PnpValidateMultiSzData((_DWORD *)((char *)a1 + (unsigned int)a1[2]), a1[3]);
    if ( v2 != v1 )
      return 1;
  }
  return v1;
}
