/*
 * XREFs of ACPIGlobalInitialize @ 0x1C00996BC
 * Callers:
 *     DriverEntry @ 0x1C0098174 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00299A8 (WPP_RECORDER_SF_q.c)
 *     ACPIGetUsedDebuggingDevices @ 0x1C008B3D8 (ACPIGetUsedDebuggingDevices.c)
 */

void *ACPIGlobalInitialize()
{
  int v0; // edx
  __int64 v1; // rbx

  AcpiHalDispatchTable = 1094930505;
  qword_1C00684C0 = (__int64)ACPIGpeHalEnableDisableEvents;
  dword_1C00684BC = 2;
  qword_1C00684C8 = (__int64)ACPIEnableInitializeACPI;
  qword_1C00684D0 = (__int64)ACPIWakeEnableWakeEvents;
  qword_1C00684D8 = (__int64)ACPIWakeMarkHiberPhase;
  ((void (__fastcall *)(int *, __int64 *))HalDispatchTable->HalInitPowerManagement)(
    &AcpiHalDispatchTable,
    &PmHalDispatchTable);
  v1 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763922LL, 0LL, 0LL);
  if ( !v1 )
  {
    v1 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763928LL, 0LL, 0LL);
    if ( !v1 )
    {
      LOBYTE(v0) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v0,
        6,
        10,
        (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
      KeBugCheckEx(0xA5u, 0x11uLL, 1uLL, 0LL, 0LL);
    }
  }
  LOBYTE(v0) = 4;
  WPP_RECORDER_SF_q(
    WPP_GLOBAL_Control->DeviceExtension,
    v0,
    6,
    30,
    (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
    v1);
  *((_BYTE *)AcpiInformation + 84) = 1;
  *(_QWORD *)AcpiInformation = v1;
  ACPIGetUsedDebuggingDevices();
  return AcpiInformation;
}
