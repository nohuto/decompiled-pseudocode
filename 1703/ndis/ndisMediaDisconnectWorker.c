/*
 * XREFs of ndisMediaDisconnectWorker @ 0x1C00E1E10
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C0009F4C (ndisQuerySetMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisRequestDeviceLowPower @ 0x1C00A7C80 (ndisRequestDeviceLowPower.c)
 */

void __fastcall ndisMediaDisconnectWorker(PVOID P, _DWORD *a2)
{
  POWER_STATE v4; // eax
  POWER_STATE v5; // ebx
  _BYTE v6[248]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+130h] [rbp+30h] BYREF
  __int64 v8; // [rsp+138h] [rbp+38h]
  int v9; // [rsp+140h] [rbp+40h]

  memset(v6, 0, sizeof(v6));
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(0x15u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)a2);
  if ( (a2[1113] & 8) != 0 )
  {
    v4.SystemState = a2[318];
    v5.SystemState = a2[277];
    LODWORD(v7) = 1311360;
    HIDWORD(v8) = 1;
    if ( v4.SystemState < v5.SystemState )
      v5.SystemState = v4.SystemState;
    memset(v6, 0, sizeof(v6));
    *(_DWORD *)&v6[88] |= 8u;
    *(_DWORD *)&v6[8] = 0;
    *(_QWORD *)&v6[104] = &ndisIntReqGeneric;
    *(_DWORD *)v6 = 15466902;
    *(_QWORD *)&v6[40] = &v7;
    *(_DWORD *)&v6[32] = -50265847;
    *(_DWORD *)&v6[4] = 1;
    *(_DWORD *)&v6[48] = 20;
    if ( !(unsigned int)ndisQuerySetMiniport(a2, 0LL, (struct _NDIS_OID_REQUEST *)v6, 0LL, 0LL) )
    {
      a2[333] = a2[317];
      ndisRequestDeviceLowPower((__int64)a2, v5, (REQUEST_POWER_COMPLETE *)ndisMediaDisconnectComplete, a2, 4u);
    }
    ExFreePoolWithTag(P, 0);
  }
  ndisDereferenceMiniport((__int64)a2, 0xBu);
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(0x16u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)a2);
}
