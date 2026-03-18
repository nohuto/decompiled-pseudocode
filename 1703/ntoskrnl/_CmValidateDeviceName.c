/*
 * XREFs of _CmValidateDeviceName @ 0x140483E80
 * Callers:
 *     _CmGetDeviceRegKeyPath @ 0x140483D10 (_CmGetDeviceRegKeyPath.c)
 *     _PnpDispatchDevice @ 0x140486450 (_PnpDispatchDevice.c)
 *     _CmGetDeviceInterfaceName @ 0x1404E60A4 (_CmGetDeviceInterfaceName.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140572E74 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMQueryRemove @ 0x140597828 (PiCMQueryRemove.c)
 *     _CmEnumSubkeyCallback @ 0x1405AAE70 (_CmEnumSubkeyCallback.c)
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406A46F0 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x1406A4EA8 (PiCMDeviceAction.c)
 *     PiCMGenerateDeviceInstance @ 0x1406A532C (PiCMGenerateDeviceInstance.c)
 *     PiCMGetDeviceDepth @ 0x1406A5670 (PiCMGetDeviceDepth.c)
 *     PiCMRegisterDeviceInterface @ 0x1406A595C (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x1406A5BF4 (PiCMSetDeviceProblem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmValidateDeviceName(__int64 a1, _WORD *a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rcx
  _WORD *i; // rax
  __int16 v7; // ax

  v2 = 0;
  v3 = 1;
  if ( !a2 )
    return 3221225485LL;
  v4 = 200LL;
  for ( i = a2; *i; ++i )
  {
    if ( !--v4 )
      return 3221225523LL;
  }
  v7 = *a2;
  if ( *a2 )
  {
    while ( (unsigned __int16)(v7 - 33) <= 0x5Eu && v7 != 44 )
    {
      if ( v7 == 92 )
      {
        if ( !v2 )
          return 3221225523LL;
        v2 = 0;
        ++v3;
      }
      else
      {
        ++v2;
      }
      v7 = a2[1];
      ++a2;
      if ( !v7 )
      {
        if ( v2 && v3 == 3 )
          return 0LL;
        return 3221225523LL;
      }
    }
  }
  return 3221225523LL;
}
