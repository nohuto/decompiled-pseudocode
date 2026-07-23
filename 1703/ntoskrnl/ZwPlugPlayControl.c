/*
 * XREFs of ZwPlugPlayControl @ 0x140180420
 * Callers:
 *     ExpHwidGetDeviceProperties @ 0x1404E5648 (ExpHwidGetDeviceProperties.c)
 *     PlugPlayGetRelatedDevice @ 0x1404E6560 (PlugPlayGetRelatedDevice.c)
 *     PlugPlayGetDeviceProperty @ 0x1404E6710 (PlugPlayGetDeviceProperty.c)
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1404E7E90 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceStatus @ 0x1404E7F8C (PlugPlayGetDeviceStatus.c)
 *     PiCMDeleteDevice @ 0x1406A46F0 (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x1406A5CDC (PiCMSetProblem.c)
 *     PlugPlayGetDeviceRelations @ 0x140742540 (PlugPlayGetDeviceRelations.c)
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
