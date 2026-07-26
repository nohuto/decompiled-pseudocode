/*
 * XREFs of ndisNotifyBindFailure @ 0x1C00C24F0
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BF410 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00C2390 (ndisNotifyBindFailureOnUnboundProtocols.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00B860C (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C261C (ndisInitializeNetPnPEvent.c)
 */

void __fastcall ndisNotifyBindFailure(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al
  _BYTE v6[32]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v7[8]; // [rsp+50h] [rbp-B0h] BYREF
  int v8; // [rsp+58h] [rbp-A8h]
  _QWORD *v9; // [rsp+60h] [rbp-A0h]
  int v10; // [rsp+68h] [rbp-98h]
  _QWORD v11[2]; // [rsp+100h] [rbp+0h] BYREF

  if ( (unsigned __int8)byte_1C009960D >= 3u )
    WPP_SF_qq(0x54u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a1, a2);
  v4 = *(_BYTE *)(a2 + 56);
  if ( v4 > 6u || v4 == 6 && *(_BYTE *)(a2 + 57) >= 0x1Eu )
  {
    ndisInitializeNetPnPEvent(v7, v6);
    v11[0] = 1048960LL;
    v11[1] = *(_QWORD *)(a1 + 4048);
    v8 = 16;
    v10 = 16;
    v9 = v11;
    KeWaitForSingleObject((PVOID)(a2 + 360), Executive, 0, 0, 0LL);
    ++*(_DWORD *)(a2 + 424);
    *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
    *(_DWORD *)(a2 + 428) = 987251;
    ndisDeliverNetPnPEventSynchronously(a2, 0LL, (__int64)v7);
    *(_DWORD *)(a2 + 428) = 0;
    if ( (*(_DWORD *)(a2 + 424))-- == 1 )
      *(_QWORD *)(a2 + 416) = 0LL;
    KeReleaseMutex((PRKMUTEX)(a2 + 360), 0);
    if ( (unsigned __int8)byte_1C009960D >= 3u )
      WPP_SF_qq(0x55u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a1, a2);
  }
}
