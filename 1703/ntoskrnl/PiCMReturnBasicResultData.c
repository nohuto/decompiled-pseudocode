/*
 * XREFs of PiCMReturnBasicResultData @ 0x1404E6BA8
 * Callers:
 *     PiCMSetObjectProperty @ 0x14045A4C0 (PiCMSetObjectProperty.c)
 *     PiCMValidateDeviceInstance @ 0x1404E6C28 (PiCMValidateDeviceInstance.c)
 *     PiCMCreateObject @ 0x1406A44AC (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1406A4604 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1406A46F0 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406A4A2C (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1406A4B08 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1406A4D28 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x1406A4EA8 (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x1406A5BF4 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x1406A5DC8 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406A5F64 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
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
