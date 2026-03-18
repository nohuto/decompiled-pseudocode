/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x14051AE6C
 * Callers:
 *     IopRegisterDeviceInterface @ 0x140517BAC (IopRegisterDeviceInterface.c)
 *     IopGetDeviceInterfaces @ 0x140519D98 (IopGetDeviceInterfaces.c)
 *     PiUEventCopyEventData @ 0x1405484D0 (PiUEventCopyEventData.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1405BB128 (PiSwDeviceInterfacesUpdateState.c)
 *     PiDmObjectCreate @ 0x1405CD66C (PiDmObjectCreate.c)
 *     PiSwDeviceInterfaceSetState @ 0x1405E2678 (PiSwDeviceInterfaceSetState.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x14051E570 (_CmValidateDeviceInterfaceName.c)
 */

__int64 __fastcall CmSetDeviceInterfacePathFormat(__int64 a1, _QWORD *a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // xmm0_8

  result = CmValidateDeviceInterfaceName(a1, a2);
  if ( (int)result >= 0 )
  {
    if ( a3 )
      v6 = *(_QWORD *)L"\\??\\";
    else
      v6 = *(_QWORD *)L"\\\\?\\";
    *a2 = v6;
  }
  return result;
}
