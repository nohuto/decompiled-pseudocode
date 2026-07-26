/*
 * XREFs of ndisRemoveWoLDirectedMAC @ 0x1C00E2A94
 * Callers:
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C0071E10 (ndisSetPowerResumeCompleteWorkItem.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     ndisMInvokeOidRequest @ 0x1C00AEFF0 (ndisMInvokeOidRequest.c)
 */

__int64 __fastcall ndisRemoveWoLDirectedMAC(__int64 a1)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  int v5; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v6[248]; // [rsp+48h] [rbp-C0h] BYREF

  memset(v6, 0, sizeof(v6));
  v2 = *(_QWORD *)(a1 + 4488);
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(0x97u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1);
  v5 = 131073;
  memset(v6, 0, sizeof(v6));
  *(_DWORD *)&v6[8] = 0;
  *(_DWORD *)&v6[88] |= 0x408u;
  *(_QWORD *)&v6[104] = &ndisIntReqGeneric;
  *(_DWORD *)v6 = 15466902;
  *(_QWORD *)&v6[40] = &v5;
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
    if ( (unsigned __int8)byte_1C0099615 >= 2u )
      WPP_SF_d(0x98u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, v3);
  }
  else
  {
    *(_BYTE *)(v2 + 1088) = 0;
  }
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_qD(0x99u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1, v3);
  return v3;
}
