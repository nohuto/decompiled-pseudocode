/*
 * XREFs of ndisSriovGetResourceForBar @ 0x1C00F1B60
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C0009A28 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSriovGetResourceForBar(void *a1, __int16 a2, __int16 a3, __int64 a4)
{
  int SetMiniport; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  _BYTE v12[248]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v13[2]; // [rsp+130h] [rbp+30h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_q(0x6Du, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, (__int64)a1);
  memset(v13, 0, sizeof(v13));
  LODWORD(v13[0]) = 786816;
  DWORD2(v13[0]) = 12;
  WORD2(v13[0]) = a2;
  WORD3(v13[0]) = a3;
  memset(v12, 0, sizeof(v12));
  *(_DWORD *)&v12[88] |= 8u;
  *(_QWORD *)&v12[104] = &ndisIntReqGeneric;
  *(_DWORD *)v12 = 15466902;
  *(_QWORD *)&v12[40] = v13;
  *(_QWORD *)&v12[4] = 12LL;
  *(_DWORD *)&v12[32] = 66137;
  *(_QWORD *)&v12[52] = 32LL;
  *(_DWORD *)&v12[48] = 32;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v12, 0LL, 0LL);
  v9 = SetMiniport;
  if ( !SetMiniport )
  {
    v10 = DWORD2(v13[0]);
    *(_OWORD *)a4 = *(_OWORD *)((char *)v13 + DWORD2(v13[0]));
    *(_DWORD *)(a4 + 16) = *(_DWORD *)((char *)&v13[1] + v10);
  }
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qD(0x6Eu, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, (__int64)a1, SetMiniport);
  return v9;
}
