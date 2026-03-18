/*
 * XREFs of HUBFDO_EvtDeviceSurpriseRemoval @ 0x1C0067470
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p @ 0x1C0006374 (McTemplateK0p.c)
 *     HUBMUX_QueueSurpriseRemovalToAllPSMs @ 0x1C000DA3C (HUBMUX_QueueSurpriseRemovalToAllPSMs.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall HUBFDO_EvtDeviceSurpriseRemoval(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  NTSTATUS result; // eax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B0C0);
  v2 = v1;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink),
      &USBHUB3_ETW_EVENT_HUB_SURPRISE_REMOVAL_START,
      0LL,
      *(_QWORD *)(v1 + 240));
  HUBMUX_QueueSurpriseRemovalToAllPSMs(v2);
  result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    return McTemplateK0p(v3, &USBHUB3_ETW_EVENT_HUB_SURPRISE_REMOVAL_COMPLETE, 0LL, *(_QWORD *)(v2 + 240));
  return result;
}
