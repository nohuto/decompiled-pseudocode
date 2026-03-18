/*
 * XREFs of NVMeUpdateResumeLatencyTolerance @ 0x1C00061E4
 * Callers:
 *     NVMePowerActive @ 0x1C000627C (NVMePowerActive.c)
 *     NVMePowerSetFState @ 0x1C00063EC (NVMePowerSetFState.c)
 *     NVMeSystemPowerHint @ 0x1C0006540 (NVMeSystemPowerHint.c)
 *     NVMePowerSettingChangeNotification @ 0x1C00068B8 (NVMePowerSettingChangeNotification.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeUpdateResumeLatencyTolerance(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  unsigned __int8 v3; // al
  bool v4; // zf

  v1 = *(_DWORD *)(a1 + 1168);
  if ( *(_DWORD *)(a1 + 1164) == 1 )
  {
    v2 = *(_DWORD *)(a1 + 84);
    if ( v2 == -1 )
      v2 = *(_DWORD *)(a1 + 1172);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 80);
    if ( v2 == -1 )
    {
      v3 = *(_BYTE *)(a1 + 1162);
      if ( !v3 || v3 >= *(unsigned __int8 *)(a1 + 1161) - 1 || (v2 = *(_DWORD *)(a1 + 1184), v1 > v2) )
        v2 = *(_DWORD *)(a1 + 1176);
    }
  }
  *(_DWORD *)(a1 + 1168) = v2;
  v4 = v1 == v2;
  if ( v1 != v2 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: Current Resume Latency Tolerance changed from %dms to %dms\n", v1, v2);
    v4 = v1 == v2;
  }
  return !v4;
}
