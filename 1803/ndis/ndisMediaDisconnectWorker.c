/*
 * XREFs of ndisMediaDisconnectWorker @ 0x1C00EE880
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisQuerySetMiniport @ 0x1C000AE40 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisRequestDeviceLowPower @ 0x1C00B0C28 (ndisRequestDeviceLowPower.c)
 */

void __fastcall ndisMediaDisconnectWorker(_QWORD *P)
{
  _DWORD *v1; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  POWER_STATE v5; // edi
  POWER_STATE v6; // r14d
  _BYTE v7[248]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+130h] [rbp+30h] BYREF
  __int64 v9; // [rsp+138h] [rbp+38h]
  int v10; // [rsp+140h] [rbp+40h]

  v1 = (_DWORD *)P[4];
  memset(v7, 0, sizeof(v7));
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(0x15u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v1);
  if ( (v1[1113] & 8) != 0 )
  {
    v5.SystemState = v1[318];
    v6.SystemState = v1[277];
    LODWORD(v8) = 1311360;
    HIDWORD(v9) = 1;
    memset(v7, 0, sizeof(v7));
    *(_DWORD *)&v7[88] |= 8u;
    *(_DWORD *)&v7[8] = 0;
    *(_QWORD *)&v7[104] = &ndisIntReqGeneric;
    *(_DWORD *)v7 = 15466902;
    *(_QWORD *)&v7[40] = &v8;
    *(_DWORD *)&v7[32] = -50265847;
    *(_DWORD *)&v7[4] = 1;
    *(_DWORD *)&v7[48] = 20;
    if ( !(unsigned int)ndisQuerySetMiniport(v1, 0LL, (struct _NDIS_OID_REQUEST *)v7, 0LL, 0LL) )
    {
      v1[333] = v1[317];
      if ( v5.SystemState >= v6.SystemState )
        v5.SystemState = v6.SystemState;
      ndisRequestDeviceLowPower((__int64)v1, v5, (REQUEST_POWER_COMPLETE *)ndisMediaDisconnectComplete, v1, 4u);
    }
    ExFreePoolWithTag(P, 0);
  }
  ndisDereferenceMiniport((__int64)v1, 0xBu, v3, v4);
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(0x16u, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)v1);
}
