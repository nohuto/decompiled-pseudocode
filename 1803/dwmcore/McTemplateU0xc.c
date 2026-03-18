/*
 * XREFs of McTemplateU0xc @ 0x18021CD00
 * Callers:
 *     _lambda_5473257d4121221b454f30f9568d7f98_::operator() @ 0x18021C000 (_lambda_5473257d4121221b454f30f9568d7f98_--operator().c)
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18021C30C (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x18021DD44 (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xc(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, char a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v6; // [rsp+30h] [rbp-38h]
  int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  char *v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  char v13; // [rsp+88h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v6 = &v12;
  v8 = 0;
  v7 = 8;
  v9 = &v13;
  v11 = 0;
  v10 = 1;
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Core_Provider_Context, a2, 3u, &v5);
}
