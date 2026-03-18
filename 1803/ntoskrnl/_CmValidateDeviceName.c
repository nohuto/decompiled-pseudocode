/*
 * XREFs of _CmValidateDeviceName @ 0x140505C80
 * Callers:
 *     _CmGetDeviceRegKeyPath @ 0x140505AF4 (_CmGetDeviceRegKeyPath.c)
 *     _PnpDispatchDevice @ 0x140508900 (_PnpDispatchDevice.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405DE554 (PiCMGetRelatedDeviceInstance.c)
 *     _CmGetDeviceInterfaceName @ 0x1405DEBB0 (_CmGetDeviceInterfaceName.c)
 *     _CmEnumSubkeyCallback @ 0x140638420 (_CmEnumSubkeyCallback.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140736980 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x140737184 (PiCMDeviceAction.c)
 *     PiCMGenerateDeviceInstance @ 0x140737610 (PiCMGenerateDeviceInstance.c)
 *     PiCMGetDeviceDepth @ 0x140737954 (PiCMGetDeviceDepth.c)
 *     PiCMQueryRemove @ 0x140737E40 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x14073823C (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x1407384E0 (PiCMSetDeviceProblem.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14006DC90 (RtlUnalignedStringCchLengthW.c)
 */

__int64 __fastcall CmValidateDeviceName(__int64 a1, const wchar_t *a2)
{
  int v2; // ebx
  int v3; // edi
  NTSTATUS v4; // r8d
  __int16 *v5; // r11
  __int16 v6; // ax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 1;
  if ( !a2 )
    return 3221225485LL;
  v4 = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
  if ( v4 >= 0 )
  {
    v6 = *v5;
    if ( *v5 )
    {
      while ( (unsigned __int16)(v6 - 33) <= 0x5Eu && v6 != 44 )
      {
        if ( v6 == 92 )
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
        v6 = v5[1];
        ++v5;
        if ( !v6 )
        {
          if ( v2 && v3 == 3 )
            return (unsigned int)v4;
          return 3221225523LL;
        }
      }
    }
  }
  return 3221225523LL;
}
