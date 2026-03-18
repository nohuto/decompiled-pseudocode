/*
 * XREFs of Etw_DeviceDelete @ 0x1C003869C
 * Callers:
 *     UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C0034900 (UsbDevice_EvtUsbDeviceCleanupCallback.c)
 * Callees:
 *     McTemplateK0pppqqQ6qqqqn @ 0x1C0008184 (McTemplateK0pppqqQ6qqqqn.c)
 */

NTSTATUS __fastcall Etw_DeviceDelete(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  int v3; // [rsp+30h] [rbp-58h]
  int v4; // [rsp+38h] [rbp-50h]
  int v5; // [rsp+48h] [rbp-40h]
  BOOL v6; // [rsp+50h] [rbp-38h]
  int v7; // [rsp+58h] [rbp-30h]
  int v8; // [rsp+60h] [rbp-28h]

  result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
  {
    v8 = *(_DWORD *)(a2 + 144);
    v7 = *(_DWORD *)(a2 + 140);
    v6 = *(_BYTE *)(a2 + 136) != 0;
    v5 = *(unsigned __int8 *)(a2 + 135);
    v4 = *(_DWORD *)(a2 + 36);
    v3 = *(_DWORD *)(a2 + 20);
    return McTemplateK0pppqqQ6qqqqn(
             *(unsigned __int8 *)(a2 + 135),
             &USBXHCI_ETW_EVENT_DEVICE_DELETE,
             0LL,
             *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
             *(_QWORD *)(a2 + 24),
             *(_QWORD *)a2,
             v3,
             v4,
             a2 + 44,
             v5,
             v6,
             v7,
             v8);
  }
  return result;
}
