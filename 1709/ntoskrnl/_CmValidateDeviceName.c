/*
 * XREFs of _CmValidateDeviceName @ 0x140521BB0
 * Callers:
 *     PiCMDeviceAction @ 0x14044E39C (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140451DE0 (PiCMGetDeviceDepth.c)
 *     _CmGetDeviceRegKeyPath @ 0x140521A38 (_CmGetDeviceRegKeyPath.c)
 *     _PnpDispatchDevice @ 0x140524760 (_PnpDispatchDevice.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405520B8 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMQueryRemove @ 0x14057468C (PiCMQueryRemove.c)
 *     _CmGetDeviceInterfaceName @ 0x14057FAF4 (_CmGetDeviceInterfaceName.c)
 *     _CmEnumSubkeyCallback @ 0x1405D3230 (_CmEnumSubkeyCallback.c)
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406CF9C8 (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406D0308 (PiCMGenerateDeviceInstance.c)
 *     PiCMRegisterDeviceInterface @ 0x1406D0A14 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x1406D0C14 (PiCMSetDeviceProblem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmValidateDeviceName(__int64 a1, _WORD *a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rcx
  _WORD *v5; // rax
  int v6; // r10d
  __int16 v7; // ax

  v2 = 0;
  v3 = 1;
  if ( !a2 )
    return 3221225485LL;
  v4 = 200LL;
  v5 = a2;
  v6 = 0;
  while ( *v5 )
  {
    ++v5;
    if ( !--v4 )
    {
      v6 = -1073741811;
      break;
    }
  }
  if ( v6 >= 0 )
  {
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
            return (unsigned int)v6;
          return 3221225523LL;
        }
      }
    }
  }
  return 3221225523LL;
}
