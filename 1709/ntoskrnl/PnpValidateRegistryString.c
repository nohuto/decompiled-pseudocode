/*
 * XREFs of PnpValidateRegistryString @ 0x1401333B0
 * Callers:
 *     PiDevCfgResolveVariable @ 0x1405A096C (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1405A0C10 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgBuildIndirectString @ 0x1405A38E0 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1406C72F4 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1406C8A40 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1406C9150 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1406C9910 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1406C9AF0 (PiDevCfgResolveVariableSwitchCase.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpValidateRegistryString(_DWORD *a1)
{
  char v1; // r8
  unsigned int v2; // eax

  v1 = 1;
  if ( a1[1] != 1 )
    return 0;
  v2 = a1[3];
  if ( v2 < 2 || *(_WORD *)((char *)a1 + 2 * ((unsigned __int64)v2 >> 1) + (unsigned int)a1[2] - 2) )
    return 0;
  return v1;
}
