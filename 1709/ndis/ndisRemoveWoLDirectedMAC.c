/*
 * XREFs of ndisRemoveWoLDirectedMAC @ 0x1C00E12B0
 * Callers:
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C0071590 (ndisSetPowerResumeCompleteWorkItem.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     ndisMInvokeOidRequest @ 0x1C00B9A74 (ndisMInvokeOidRequest.c)
 */

__int64 __fastcall ndisRemoveWoLDirectedMAC(__int64 a1)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  int v5; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v6[248]; // [rsp+48h] [rbp-C0h] BYREF

  memset(v6, 0, sizeof(v6));
  v2 = *(_QWORD *)(a1 + 4488);
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(0x96u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1);
  v5 = 131073;
  memset(v6, 0, sizeof(v6));
  *(_DWORD *)&v6[8] = 0;
  *(_QWORD *)&v6[104] = &ndisIntReqGeneric;
  *(_QWORD *)&v6[40] = &v5;
  *(_DWORD *)v6 = 15466902;
  *(_DWORD *)&v6[88] |= 0x408u;
  *(_DWORD *)&v6[32] = -50265845;
  *(_DWORD *)&v6[4] = 1;
  *(_DWORD *)&v6[48] = 4;
  KeInitializeEvent((PRKEVENT)&v6[112], NotificationEvent, 0);
  v3 = ndisMInvokeOidRequest(a1, (_NDIS_OID_REQUEST *)v6);
  if ( v3 == 259 )
  {
    KeWaitForSingleObject(&v6[112], Executive, 0, 0, 0LL);
    v3 = *(_DWORD *)&v6[80];
  }
  if ( v3 )
  {
    if ( (unsigned __int8)byte_1C0098755 >= 2u )
      WPP_SF_d(0x97u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, v3);
  }
  else
  {
    *(_BYTE *)(v2 + 1088) = 0;
  }
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_qD(0x98u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1, v3);
  return v3;
}
