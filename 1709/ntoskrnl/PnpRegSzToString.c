/*
 * XREFs of PnpRegSzToString @ 0x140555E50
 * Callers:
 *     PiFindDevInstMatch @ 0x140555C60 (PiFindDevInstMatch.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1405A0C10 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgBuildIndirectString @ 0x1405A38E0 (PiDevCfgBuildIndirectString.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405DACFC (PipApplyFunctionToServiceInstances.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1406C1260 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1406C6478 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1406C9150 (PiDevCfgResolveVariableKeyHandle.c)
 *     PipGetDriverTagPriority @ 0x140845D34 (PipGetDriverTagPriority.c)
 *     PpInitGetGroupOrderIndex @ 0x140846D6C (PpInitGetGroupOrderIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpRegSzToString(_WORD *a1, unsigned int a2, int *a3)
{
  _WORD *v3; // r9
  unsigned __int64 v4; // rdx
  int v5; // r9d

  v3 = a1;
  v4 = (unsigned __int64)&a1[(unsigned __int64)a2 >> 1];
  if ( (unsigned __int64)a1 < v4 )
  {
    do
    {
      if ( !*v3 )
        break;
      ++v3;
    }
    while ( (unsigned __int64)v3 < v4 );
  }
  v5 = (_DWORD)v3 - (_DWORD)a1;
  if ( a3 )
    *a3 = v5;
  return 1LL;
}
