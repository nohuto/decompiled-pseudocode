/*
 * XREFs of ndisSriovInterfaceResetVF @ 0x1C00F2380
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C0009A28 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSriovInterfaceResetVF(void *a1, __int16 a2)
{
  int SetMiniport; // eax
  unsigned int v5; // edi
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v8; // [rsp+34h] [rbp-CCh]
  _BYTE v9[248]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v9, 0, sizeof(v9));
  v7 = 0;
  v8 = 0;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_q(0x65u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, (__int64)a1);
  v7 = 393600;
  v8 = a2;
  memset(v9, 0, sizeof(v9));
  *(_DWORD *)&v9[88] |= 8u;
  *(_DWORD *)&v9[8] = 0;
  *(_QWORD *)&v9[104] = &ndisIntReqGeneric;
  *(_DWORD *)v9 = 15466902;
  *(_QWORD *)&v9[40] = &v7;
  *(_DWORD *)&v9[32] = 66133;
  *(_DWORD *)&v9[4] = 1;
  *(_DWORD *)&v9[48] = 6;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v9, 0LL, 0LL);
  v5 = SetMiniport;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qD(0x66u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, (__int64)a1, SetMiniport);
  return v5;
}
