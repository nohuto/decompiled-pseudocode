/*
 * XREFs of ZwPlugPlayControl @ 0x14017FDE0
 * Callers:
 *     PiCMSetProblem @ 0x14044E740 (PiCMSetProblem.c)
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x140528110 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceStatus @ 0x140528214 (PlugPlayGetDeviceStatus.c)
 *     ExpHwidGetDeviceProperties @ 0x14054F0F0 (ExpHwidGetDeviceProperties.c)
 *     PlugPlayGetDeviceProperty @ 0x1405508E0 (PlugPlayGetDeviceProperty.c)
 *     PlugPlayGetRelatedDevice @ 0x140551CF0 (PlugPlayGetRelatedDevice.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x1406C28B0 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiCMDeleteDevice @ 0x1406CF9C8 (PiCMDeleteDevice.c)
 *     PlugPlayGetDeviceRelations @ 0x140786368 (PlugPlayGetDeviceRelations.c)
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
