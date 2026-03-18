/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x1404905D8
 * Callers:
 *     IopGetDeviceInterfaces @ 0x1404901A0 (IopGetDeviceInterfaces.c)
 *     PiUEventCopyEventData @ 0x14058C024 (PiUEventCopyEventData.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1405C5C8C (PiSwDeviceInterfacesUpdateState.c)
 *     PiDmObjectCreate @ 0x1405D3AB4 (PiDmObjectCreate.c)
 *     IopRegisterDeviceInterface @ 0x1405F5474 (IopRegisterDeviceInterface.c)
 *     PiSwDeviceInterfaceSetState @ 0x140646AC0 (PiSwDeviceInterfaceSetState.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x140505D30 (_CmValidateDeviceInterfaceName.c)
 */

__int64 __fastcall CmSetDeviceInterfacePathFormat(__int64 a1, _QWORD *a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // xmm0_8

  result = CmValidateDeviceInterfaceName();
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
