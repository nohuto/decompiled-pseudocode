/*
 * XREFs of Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C000C6E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1C0006D14 (ControllerPreInterruptsDisableAcpiCallout.c)
 *     McTemplateK0pqqh @ 0x1C000D3D8 (McTemplateK0pqqh.c)
 *     McTemplateK0pqqq @ 0x1C000D46C (McTemplateK0pqqq.c)
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1C0016BC4 (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C00182B4 (WPP_RECORDER_SF_qdd.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  int v6; // edx
  int v7; // r8d
  unsigned int Arg2; // esi
  struct _MCGEN_TRACE_CONTEXT *v9; // rcx
  const GUID *v10; // r8

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004B408)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3104))(WdfDriverGlobals, a1);
  Arg2 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh(
      *(unsigned __int8 *)(v4 + 396),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_PRE_INTERRUPTS_START,
      v7,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      *(_BYTE *)(v4 + 396));
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_qdd(
    *(_QWORD *)(v4 + 72),
    v6,
    4,
    80,
    (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
    a1,
    a2,
    *(_DWORD *)(v4 + 348));
  ControllerPreInterruptsDisableAcpiCallout(a1);
  Interrupter_D0ExitPreInterruptsDisabled(*(_QWORD *)(v4 + 128));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq(
      v9,
      &USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_PRE_INTERRUPTS_COMPLETE,
      v10,
      *(const void **)(v4 + 8),
      a2,
      Arg2,
      0);
  return 0LL;
}
