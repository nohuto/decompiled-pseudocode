/*
 * XREFs of ACPIGlobalInitialize @ 0x1C00ABCB0
 * Callers:
 *     DriverEntry @ 0x1C00ACE60 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0017654 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     ACPIGetUsedDebuggingDevices @ 0x1C008AE00 (ACPIGetUsedDebuggingDevices.c)
 */

void *ACPIGlobalInitialize()
{
  int v0; // edx
  __int64 v1; // rbx

  AcpiHalDispatchTable = 1094930505;
  qword_1C00778B0 = (__int64)ACPIGpeHalEnableDisableEvents;
  dword_1C00778AC = 2;
  qword_1C00778B8 = (__int64)ACPIEnableInitializeACPI;
  qword_1C00778C0 = (__int64)ACPIWakeEnableWakeEvents;
  qword_1C00778C8 = (__int64)ACPIWakeMarkHiberPhase;
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
        (__int64)&WPP_2260554ba3bf3834a501608aef56474b_Traceguids);
      KeBugCheckEx(0xA5u, 0x11uLL, 1uLL, 0LL, 0LL);
    }
  }
  LOBYTE(v0) = 4;
  WPP_RECORDER_SF_q(
    WPP_GLOBAL_Control->DeviceExtension,
    v0,
    6,
    30,
    (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids,
    v1);
  *((_BYTE *)AcpiInformation + 84) = 1;
  *(_QWORD *)AcpiInformation = v1;
  ACPIGetUsedDebuggingDevices();
  return AcpiInformation;
}
