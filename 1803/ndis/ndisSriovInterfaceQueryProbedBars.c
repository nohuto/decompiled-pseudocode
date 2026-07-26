/*
 * XREFs of ndisSriovInterfaceQueryProbedBars @ 0x1C00F4A10
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000AE40 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSriovInterfaceQueryProbedBars(void *a1, __int64 a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rbx
  unsigned int SetMiniport; // edi
  __int64 v7; // rcx
  _BYTE v9[248]; // [rsp+30h] [rbp-D0h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_q(0x61u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, (__int64)a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6F69444Eu);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    *v5 = 524672;
    v5[1] = 8;
    memset(v9, 0, sizeof(v9));
    *(_DWORD *)&v9[88] |= 8u;
    *(_DWORD *)&v9[4] = 0;
    *(_DWORD *)&v9[8] = 0;
    *(_QWORD *)&v9[104] = &ndisIntReqGeneric;
    *(_DWORD *)v9 = 15466902;
    *(_DWORD *)&v9[32] = 66136;
    *(_QWORD *)&v9[40] = v5;
    *(_DWORD *)&v9[48] = 32;
    SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v9, 0LL, 0LL);
    if ( !SetMiniport )
    {
      v7 = (unsigned int)v5[1];
      *(_OWORD *)a2 = *(_OWORD *)((char *)v5 + v7);
      *(_QWORD *)(a2 + 16) = *(_QWORD *)((char *)v5 + v7 + 16);
    }
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    SetMiniport = -1073741670;
  }
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qD(0x62u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, (__int64)a1, SetMiniport);
  return SetMiniport;
}
