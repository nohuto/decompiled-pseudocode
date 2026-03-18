/*
 * XREFs of Etw_ControllerRundown @ 0x1C000138C
 * Callers:
 *     Etw_EnableCallback @ 0x1C0001150 (Etw_EnableCallback.c)
 * Callees:
 *     Etw_DeviceListRundown @ 0x1C00013F0 (Etw_DeviceListRundown.c)
 *     McTemplateK0pqqqqqqqsssxqqqt @ 0x1C0008290 (McTemplateK0pqqqqqqqsssxqqqt.c)
 */

__int64 __fastcall Etw_ControllerRundown(__int64 a1, __int64 a2)
{
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    McTemplateK0pqqqqqqqsssxqqqt(
      a1,
      (unsigned int)&USBXHCI_ETW_EVENT_RUNDOWN_CONTROLLER_INFORMATION,
      a1,
      *(_QWORD *)(a2 + 8),
      *(_DWORD *)(a2 + 180),
      *(_DWORD *)(a2 + 196),
      *(_WORD *)(a2 + 200),
      *(_WORD *)(a2 + 204),
      *(_WORD *)(a2 + 184),
      *(_WORD *)(a2 + 188),
      *(_BYTE *)(a2 + 192),
      a2 + 240,
      a2 + 245,
      a2 + 250,
      *(_QWORD *)(a2 + 264),
      *(_DWORD *)(a2 + 392),
      *(_DWORD *)(a2 + 328),
      *(_DWORD *)(a2 + 176),
      *(_BYTE *)(a2 + 440));
  return Etw_DeviceListRundown(a1, a2);
}
