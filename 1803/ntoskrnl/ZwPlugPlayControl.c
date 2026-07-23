/*
 * XREFs of ZwPlugPlayControl @ 0x1401A9A20
 * Callers:
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x140503890 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceProperty @ 0x14057AC70 (PlugPlayGetDeviceProperty.c)
 *     PlugPlayGetDeviceStatus @ 0x140586074 (PlugPlayGetDeviceStatus.c)
 *     PlugPlayGetRelatedDevice @ 0x140586840 (PlugPlayGetRelatedDevice.c)
 *     ExpHwidGetDeviceProperties @ 0x1405D4308 (ExpHwidGetDeviceProperties.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x1407288E0 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiCMDeleteDevice @ 0x140736980 (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x1407385C4 (PiCMSetProblem.c)
 *     PlugPlayGetDeviceRelations @ 0x1407F114C (PlugPlayGetDeviceRelations.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwPlugPlayControl(PLUGPLAY_CONTROL_CLASS PlugPlayControlClass, PVOID Buffer, ULONG BufferSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&PlugPlayControlClass);
}
