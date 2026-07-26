/*
 * XREFs of ndisOidTranslateBetweenOids @ 0x1C000E404
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000C3B0 (ndisQueueOidRequest.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000AE40 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

__int64 __fastcall ndisOidTranslateBetweenOids(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 result; // rax
  _QWORD *v7; // rcx
  _QWORD v8[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v9[248]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v9, 0, sizeof(v9));
  v8[0] = 0LL;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(252LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a3, v5);
  result = *(unsigned int *)(a3 + 32);
  if ( (_DWORD)result == 131334 )
  {
    if ( a1[32] < 6u )
    {
      memset(v9, 0, sizeof(v9));
      *(_DWORD *)&v9[88] |= 0x100008u;
      *(_QWORD *)&v9[40] = v8;
      *(_DWORD *)v9 = 15466902;
      *(_QWORD *)&v9[104] = &ndisIntReqGeneric;
      *(_DWORD *)&v9[32] = 131332;
      *(_QWORD *)&v9[4] = 2LL;
      *(_DWORD *)&v9[48] = 8;
      result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x7172444Eu);
      *(_QWORD *)(a3 + 144) = result;
      if ( result )
      {
        memset((void *)result, 0, 0x40uLL);
        result = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v9, 0LL, 0LL);
        *(_DWORD *)(*(_QWORD *)(a3 + 144) + 56LL) = result;
        if ( !(_DWORD)result )
        {
          *(_QWORD *)(*(_QWORD *)(a3 + 144) + 24LL) = v8[0];
          memset(v9, 0, sizeof(v9));
          *(_QWORD *)&v9[40] = v8;
          *(_DWORD *)&v9[88] |= 0x100008u;
          *(_QWORD *)&v9[104] = &ndisIntReqGeneric;
          *(_DWORD *)v9 = 15466902;
          *(_DWORD *)&v9[32] = 131333;
          *(_QWORD *)&v9[4] = 2LL;
          *(_DWORD *)&v9[48] = 8;
          result = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v9, 0LL, 0LL);
          *(_DWORD *)(*(_QWORD *)(a3 + 144) + 56LL) = result;
          if ( !(_DWORD)result )
          {
            *(_QWORD *)(*(_QWORD *)(a3 + 144) + 32LL) = v8[0];
            *(_QWORD *)(*(_QWORD *)(a3 + 144) + 40LL) = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 24LL)
                                                      + *(_QWORD *)(*(_QWORD *)(a3 + 144) + 32LL);
            memset(v9, 0, sizeof(v9));
            *(_DWORD *)&v9[88] |= 0x100008u;
            *(_QWORD *)&v9[40] = v8;
            *(_QWORD *)&v9[104] = &ndisIntReqGeneric;
            *(_DWORD *)v9 = 15466902;
            *(_DWORD *)&v9[32] = 131331;
            *(_QWORD *)&v9[4] = 2LL;
            *(_DWORD *)&v9[48] = 8;
            result = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v9, 0LL, 0LL);
            *(_DWORD *)(*(_QWORD *)(a3 + 144) + 56LL) = result;
            if ( !(_DWORD)result )
            {
              result = v8[0];
              *(_QWORD *)(*(_QWORD *)(a3 + 144) + 48LL) = v8[0];
            }
          }
        }
      }
    }
  }
  else if ( (_DWORD)result == 131611 && a1[32] < 6u )
  {
    memset(v9, 0, sizeof(v9));
    *(_DWORD *)&v9[88] |= 0x100088u;
    *(_QWORD *)&v9[40] = v8;
    *(_DWORD *)v9 = 15466902;
    *(_QWORD *)&v9[104] = &ndisIntReqGeneric;
    *(_DWORD *)&v9[32] = 131332;
    *(_QWORD *)&v9[4] = 2LL;
    *(_DWORD *)&v9[48] = 8;
    result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x7172444Eu);
    *(_QWORD *)(a3 + 144) = result;
    if ( result )
    {
      memset((void *)result, 0, 0x40uLL);
      result = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v9, 0LL, 0LL);
      *(_DWORD *)(*(_QWORD *)(a3 + 144) + 56LL) = result;
      if ( !(_DWORD)result )
      {
        *(_QWORD *)(*(_QWORD *)(a3 + 144) + 24LL) = v8[0];
        memset(v9, 0, sizeof(v9));
        *(_QWORD *)&v9[40] = v8;
        *(_DWORD *)&v9[88] |= 0x100008u;
        *(_QWORD *)&v9[104] = &ndisIntReqGeneric;
        *(_DWORD *)v9 = 15466902;
        *(_DWORD *)&v9[32] = 131333;
        *(_QWORD *)&v9[4] = 2LL;
        *(_DWORD *)&v9[48] = 8;
        result = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v9, 0LL, 0LL);
        *(_DWORD *)(*(_QWORD *)(a3 + 144) + 56LL) = result;
        if ( !(_DWORD)result )
        {
          *(_QWORD *)(*(_QWORD *)(a3 + 144) + 32LL) = v8[0];
          v7 = *(_QWORD **)(a3 + 144);
          result = v7[3] + v7[4];
          v7[5] = result;
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    return WPP_SF_q(253LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a3, v5);
  return result;
}
