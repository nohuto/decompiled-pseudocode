/*
 * XREFs of ndisNotifyBindFailure @ 0x1C00BDB0C
 * Callers:
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00B2180 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5D68 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00B54E4 (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00B64CC (ndisInitializeNetPnPEvent.c)
 */

void __fastcall ndisNotifyBindFailure(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al
  struct _KEVENT v6; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+50h] [rbp-B0h] BYREF
  int v8; // [rsp+58h] [rbp-A8h]
  _QWORD *v9; // [rsp+60h] [rbp-A0h]
  int v10; // [rsp+68h] [rbp-98h]
  _QWORD v11[2]; // [rsp+100h] [rbp+0h] BYREF

  if ( (unsigned __int8)byte_1C009260D >= 3u )
    WPP_SF_qq(0x54u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, a1, a2);
  v4 = *(_BYTE *)(a2 + 56);
  if ( v4 > 6u || v4 == 6 && *(_BYTE *)(a2 + 57) >= 0x1Eu )
  {
    ndisInitializeNetPnPEvent(&v7, &v6);
    v11[0] = 1048960LL;
    v11[1] = *(_QWORD *)(a1 + 4048);
    v8 = 16;
    v10 = 16;
    v9 = v11;
    KeWaitForSingleObject((PVOID)(a2 + 360), Executive, 0, 0, 0LL);
    ++*(_DWORD *)(a2 + 424);
    *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
    *(_DWORD *)(a2 + 428) = 987336;
    ndisDeliverNetPnPEventSynchronously(a2, 0LL, (__int64)&v7);
    *(_DWORD *)(a2 + 428) = 0;
    if ( (*(_DWORD *)(a2 + 424))-- == 1 )
      *(_QWORD *)(a2 + 416) = 0LL;
    KeReleaseMutex((PRKMUTEX)(a2 + 360), 0);
    if ( (unsigned __int8)byte_1C009260D >= 3u )
      WPP_SF_qq(0x55u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, a1, a2);
  }
}
