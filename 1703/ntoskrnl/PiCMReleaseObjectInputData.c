/*
 * XREFs of PiCMReleaseObjectInputData @ 0x1404E850C
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x1404E6C28 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x1404E812C (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x1404E833C (PiCMGetObjectList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140572E74 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMQueryRemove @ 0x140597828 (PiCMQueryRemove.c)
 *     PiCMCreateObject @ 0x1406A44AC (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1406A4604 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1406A46F0 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406A4A2C (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1406A4B08 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1406A4D28 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x1406A4EA8 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x1406A5670 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x1406A574C (PiCMGetObjectPropertyKeys.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406A5F64 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14004D524 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
