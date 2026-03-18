/*
 * XREFs of PiCMReleaseObjectInputData @ 0x140530DB0
 * Callers:
 *     PiCMDeviceAction @ 0x14044E39C (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140451DE0 (PiCMGetDeviceDepth.c)
 *     PiCMValidateDeviceInstance @ 0x140530010 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x140530950 (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x140530BE0 (PiCMGetObjectList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405520B8 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMOpenClassKey @ 0x140573DB4 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x140573F4C (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x140574110 (PiCMOpenObjectKey.c)
 *     PiCMQueryRemove @ 0x14057468C (PiCMQueryRemove.c)
 *     PiCMCreateObject @ 0x1406CF784 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1406CF8DC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1406CF9C8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406CFD04 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1406CFDE0 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1406D0000 (PiCMDeleteObject.c)
 *     PiCMGetObjectPropertyKeys @ 0x1406D064C (PiCMGetObjectPropertyKeys.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1406D085C (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406D0E9C (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1400DF360 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
