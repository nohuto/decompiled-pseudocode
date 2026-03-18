/*
 * XREFs of PnpValidateRegistryMultiSz @ 0x14014FC24
 * Callers:
 *     PiDevCfgResolveMultiSzValue @ 0x14058E87C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14069B1C8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x14069C3A0 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14069D540 (PiDevCfgResolveVariableFormatString.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x14014FC5C (PnpValidateMultiSzData.c)
 */

bool __fastcall PnpValidateRegistryMultiSz(_DWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // r9

  v3 = 0;
  if ( a1[1] == 7 )
    return (unsigned __int8)PnpValidateMultiSzData((char *)a1 + (unsigned int)a1[2], (unsigned int)a1[3], a3, 0LL) != 0;
  return v3;
}
