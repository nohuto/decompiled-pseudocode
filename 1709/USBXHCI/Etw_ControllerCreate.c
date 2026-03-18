/*
 * XREFs of Etw_ControllerCreate @ 0x1C00382F8
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0059AB0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     McTemplateK0pqqqqqqqsssxqqqt @ 0x1C0008290 (McTemplateK0pqqqqqqqsssxqqqt.c)
 */

NTSTATUS __fastcall Etw_ControllerCreate(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  int v3; // [rsp+20h] [rbp-88h]
  int v4; // [rsp+28h] [rbp-80h]
  int v5; // [rsp+30h] [rbp-78h]
  int v6; // [rsp+38h] [rbp-70h]
  int v7; // [rsp+40h] [rbp-68h]
  int v8; // [rsp+48h] [rbp-60h]
  int v9; // [rsp+50h] [rbp-58h]
  int v10; // [rsp+78h] [rbp-30h]
  int v11; // [rsp+80h] [rbp-28h]
  int v12; // [rsp+88h] [rbp-20h]
  int v13; // [rsp+90h] [rbp-18h]

  result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
  {
    v13 = *(unsigned __int8 *)(a2 + 440);
    v12 = *(_DWORD *)(a2 + 176);
    v11 = *(_DWORD *)(a2 + 328);
    v10 = *(_DWORD *)(a2 + 392);
    v9 = *(unsigned __int8 *)(a2 + 192);
    v8 = *(unsigned __int16 *)(a2 + 188);
    v7 = *(unsigned __int16 *)(a2 + 184);
    v6 = *(unsigned __int16 *)(a2 + 204);
    v5 = *(unsigned __int16 *)(a2 + 200);
    v4 = *(_DWORD *)(a2 + 196);
    v3 = *(_DWORD *)(a2 + 180);
    return McTemplateK0pqqqqqqqsssxqqqt(
             a2 + 250,
             &USBXHCI_ETW_EVENT_CONTROLLER_CREATE,
             0LL,
             *(_QWORD *)(a2 + 8),
             v3,
             v4,
             v5,
             v6,
             v7,
             v8,
             v9,
             a2 + 240,
             a2 + 245,
             a2 + 250,
             *(_QWORD *)(a2 + 264),
             v10,
             v11,
             v12,
             v13);
  }
  return result;
}
