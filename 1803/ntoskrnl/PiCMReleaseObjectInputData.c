/*
 * XREFs of PiCMReleaseObjectInputData @ 0x14050C488
 * Callers:
 *     PiCMGetObjectList @ 0x14050C2C8 (PiCMGetObjectList.c)
 *     PiCMGetDeviceStatus @ 0x140585B84 (PiCMGetDeviceStatus.c)
 *     PiCMValidateDeviceInstance @ 0x1405C664C (PiCMValidateDeviceInstance.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405DE554 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateObject @ 0x1407366F0 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140736894 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140736980 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140736CBC (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140736D98 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140736FBC (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140737184 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140737954 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x140737A30 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140737E40 (PiCMQueryRemove.c)
 *     PiCMUnregisterDeviceInterface @ 0x14073884C (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14006E290 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
