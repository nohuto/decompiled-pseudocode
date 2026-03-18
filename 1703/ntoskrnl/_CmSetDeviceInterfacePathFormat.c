/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x1404E0960
 * Callers:
 *     PiSwDeviceInterfacesUpdateState @ 0x14045FAB8 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceInterfaceSetState @ 0x1404612DC (PiSwDeviceInterfaceSetState.c)
 *     PiUEventCopyEventData @ 0x1404A55B0 (PiUEventCopyEventData.c)
 *     IopGetDeviceInterfaces @ 0x1404E0548 (IopGetDeviceInterfaces.c)
 *     IopRegisterDeviceInterface @ 0x1404E3CE0 (IopRegisterDeviceInterface.c)
 *     PiDmObjectCreate @ 0x1405BDA78 (PiDmObjectCreate.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x1404878A0 (_CmValidateDeviceInterfaceName.c)
 */

NTSTATUS __fastcall CmSetDeviceInterfacePathFormat(__int64 a1, _QWORD *a2, char a3)
{
  NTSTATUS result; // eax
  __int64 v6; // xmm0_8

  result = CmValidateDeviceInterfaceName(a1, (__int64)a2);
  if ( result >= 0 )
  {
    if ( a3 )
      v6 = *(_QWORD *)L"\\??\\";
    else
      v6 = *(_QWORD *)L"\\\\?\\";
    *a2 = v6;
  }
  return result;
}
