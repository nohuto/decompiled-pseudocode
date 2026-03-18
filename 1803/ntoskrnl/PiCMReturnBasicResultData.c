/*
 * XREFs of PiCMReturnBasicResultData @ 0x1405C6850
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x1405C664C (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14064069C (PiCMSetObjectProperty.c)
 *     PiCMCreateObject @ 0x1407366F0 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140736894 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140736980 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140736CBC (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140736D98 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140736FBC (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140737184 (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x1407384E0 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x1407386B0 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14073884C (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnBasicResultData(int a1, int a2, _QWORD *a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-18h]

  *a5 = 0;
  v6 = 0;
  if ( a4 >= 8 && a2 == 8 )
  {
    LODWORD(v8) = 8;
    HIDWORD(v8) = a1;
    ProbeForWrite(a3, a4, 4u);
    *a3 = v8;
    *a5 = 8;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
