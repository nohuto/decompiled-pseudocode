/*
 * XREFs of Etw_DeviceRundown @ 0x1C0038734
 * Callers:
 *     Etw_DeviceListRundown @ 0x1C00013F0 (Etw_DeviceListRundown.c)
 * Callees:
 *     McTemplateK0pppqqQ6qqqqn @ 0x1C0008184 (McTemplateK0pppqqQ6qqqqn.c)
 *     Etw_EndpointListRundown @ 0x1C0038940 (Etw_EndpointListRundown.c)
 */

__int64 __fastcall Etw_DeviceRundown(const GUID *a1, __int64 a2)
{
  int v5; // [rsp+30h] [rbp-58h]
  int v6; // [rsp+38h] [rbp-50h]
  int v7; // [rsp+48h] [rbp-40h]
  BOOL v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+60h] [rbp-28h]

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
  {
    v10 = *(_DWORD *)(a2 + 144);
    v9 = *(_DWORD *)(a2 + 140);
    v8 = *(_BYTE *)(a2 + 136) != 0;
    v7 = *(unsigned __int8 *)(a2 + 135);
    v6 = *(_DWORD *)(a2 + 36);
    v5 = *(_DWORD *)(a2 + 20);
    McTemplateK0pppqqQ6qqqqn(
      (__int64)a1,
      &USBXHCI_ETW_EVENT_RUNDOWN_DEVICE_INFORMATION,
      a1,
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
      *(_QWORD *)(a2 + 24),
      *(_QWORD *)a2,
      v5,
      v6,
      a2 + 44,
      v7,
      v8,
      v9,
      v10);
  }
  return Etw_EndpointListRundown(a1, a2);
}
