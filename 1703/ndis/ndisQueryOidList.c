/*
 * XREFs of ndisQueryOidList @ 0x1C00B99B0
 * Callers:
 *     ndisGetMiniportInfo @ 0x1C00DDD7C (ndisGetMiniportInfo.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisQuerySetMiniportEx2 @ 0x1C001D418 (ndisQuerySetMiniportEx2.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisSplitStatisticsOids @ 0x1C00B9AD0 (ndisSplitStatisticsOids.c)
 */

__int64 __fastcall ndisQueryOidList(__int64 a1)
{
  _DWORD *v2; // rcx
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
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(0x11u, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a1);
  memset(v12, 0, sizeof(v12));
  v2 = *(_DWORD **)(a1 + 16);
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
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qD(0x12u, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a1, v5);
  return v5;
}
