/*
 * XREFs of ndisAddWoLDirectedMAC @ 0x1C00E0B48
 * Callers:
 *     ?ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C006EEDC (-ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     ?ndisInitializeDirectedWolPattern@@YAXPEAEKPEAU_RTL_BITMAP@@PEAPEAE@Z @ 0x1C004941C (-ndisInitializeDirectedWolPattern@@YAXPEAEKPEAU_RTL_BITMAP@@PEAPEAE@Z.c)
 *     ndisMInvokeOidRequest @ 0x1C00AEFF0 (ndisMInvokeOidRequest.c)
 */

__int64 __fastcall ndisAddWoLDirectedMAC(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v5; // rcx
  unsigned __int8 *v6; // rdx
  unsigned int v7; // ebx
  unsigned __int8 *v8; // [rsp+38h] [rbp-D0h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v10[248]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v11[272]; // [rsp+158h] [rbp+50h] BYREF

  memset(v10, 0, sizeof(v10));
  memset(v11, 0, 0x10CuLL);
  v3 = *(_QWORD *)(a1 + 4488);
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(0x93u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1);
  if ( ndisDirectedMacForNapsState )
  {
    v8 = 0LL;
    ndisInitializeDirectedWolPattern(v11, v2, &BitMapHeader, &v8);
    v5 = *(_QWORD *)(a1 + 4064);
    v6 = v8;
    *(_DWORD *)v8 = *(_DWORD *)(v5 + 1126);
    *((_WORD *)v6 + 2) = *(_WORD *)(v5 + 1130);
    RtlSetBits(&BitMapHeader, 0, 6u);
    memset(v10, 0, sizeof(v10));
    *(_DWORD *)&v10[8] = 0;
    *(_DWORD *)&v10[88] |= 0x408u;
    *(_QWORD *)&v10[104] = &ndisIntReqGeneric;
    *(_DWORD *)v10 = 15466902;
    *(_QWORD *)&v10[40] = v11;
    *(_DWORD *)&v10[32] = -50265846;
    *(_DWORD *)&v10[4] = 1;
    *(_DWORD *)&v10[48] = 268;
    KeInitializeEvent((PRKEVENT)&v10[112], NotificationEvent, 0);
    v7 = ndisMInvokeOidRequest(a1, (_NDIS_OID_REQUEST *)v10);
    if ( v7 == 259 )
    {
      KeWaitForSingleObject(&v10[112], Executive, 0, 0, 0LL);
      v7 = *(_DWORD *)&v10[80];
    }
    if ( v7 )
    {
      if ( (unsigned __int8)byte_1C0099615 >= 2u )
        WPP_SF_d(0x95u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, v7);
    }
    else
    {
      *(_BYTE *)(v3 + 1088) = 1;
    }
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_qD(0x96u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1, v7);
    return v7;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0099615 >= 3u )
      WPP_SF_qD(0x94u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1, 0);
    return 0LL;
  }
}
