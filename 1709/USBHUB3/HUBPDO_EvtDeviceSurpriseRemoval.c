/*
 * XREFs of HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C006B240
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p @ 0x1C000639C (McTemplateK0p.c)
 *     HUBUCX_CheckIfHubIsDisconnected @ 0x1C0021F30 (HUBUCX_CheckIfHubIsDisconnected.c)
 *     HUBMISC_RemoveDeviceInfoFromGlobalChildList @ 0x1C0028794 (HUBMISC_RemoveDeviceInfoFromGlobalChildList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     HUBPDO_BillboardCleanup @ 0x1C006AD60 (HUBPDO_BillboardCleanup.c)
 */

NTSTATUS __fastcall HUBPDO_EvtDeviceSurpriseRemoval(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rcx
  NTSTATUS result; // eax

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C005B070)
                 + 24);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p(v1, &USBHUB3_ETW_EVENT_DEVICE_SURPRISE_REMOVAL_START, 0LL, *(_QWORD *)(v2 + 24));
  if ( (unsigned __int8)HUBUCX_CheckIfHubIsDisconnected(*(_QWORD *)v2) )
    HUBMISC_RemoveDeviceInfoFromGlobalChildList(v2);
  **(_BYTE **)(v2 + 16) = 1;
  HUBPDO_BillboardCleanup(v2);
  result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    return McTemplateK0p(v3, &USBHUB3_ETW_EVENT_DEVICE_SURPRISE_REMOVAL_COMPLETE, 0LL, *(_QWORD *)(v2 + 24));
  return result;
}
