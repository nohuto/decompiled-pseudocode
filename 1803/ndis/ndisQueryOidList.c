/*
 * XREFs of ndisQueryOidList @ 0x1C00C405C
 * Callers:
 *     ndisGetMiniportInfo @ 0x1C00E970C (ndisGetMiniportInfo.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisQuerySetMiniportEx2 @ 0x1C001F144 (ndisQuerySetMiniportEx2.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisSplitStatisticsOids @ 0x1C00C417C (ndisSplitStatisticsOids.c)
 */

__int64 __fastcall ndisQueryOidList(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned int v5; // edi
  int v7; // [rsp+20h] [rbp-E0h]
  int v8; // [rsp+28h] [rbp-D8h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  UINT v10; // [rsp+58h] [rbp-A8h] BYREF
  UINT v11; // [rsp+5Ch] [rbp-A4h] BYREF
  _BYTE v12[248]; // [rsp+60h] [rbp-A0h] BYREF

  P = 0LL;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(0x11u, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a1);
  memset(v12, 0, sizeof(v12));
  v2 = *(_QWORD **)(a1 + 16);
  *(_DWORD *)&v12[88] |= 8u;
  *(_DWORD *)&v12[8] = 0;
  *(_QWORD *)&v12[40] = 0LL;
  *(_DWORD *)&v12[48] = 0;
  *(_QWORD *)&v12[104] = &ndisIntReqIoctl;
  *(_DWORD *)v12 = 15466902;
  *(_DWORD *)&v12[32] = 65793;
  *(_DWORD *)&v12[4] = 2;
  v5 = ndisQuerySetMiniportEx2(v2, v3, (struct _NDIS_OID_REQUEST *)v12, v4, v7, v8, 0x2020444Eu, &P, &v11, &v10);
  if ( !v5 )
    v5 = ndisSplitStatisticsOids(a1, P, v10 >> 2);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qD(0x12u, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a1, v5);
  return v5;
}
