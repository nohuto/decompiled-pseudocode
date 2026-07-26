/*
 * XREFs of ndisOidTranslateBetweenOids @ 0x1C000AFAC
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000A240 (ndisQueueOidRequest.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C0009F4C (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

__int64 __fastcall ndisOidTranslateBetweenOids(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v6; // rcx
  _QWORD v7[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v8[248]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v8, 0, sizeof(v8));
  v7[0] = 0LL;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(237LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a3);
  result = *(unsigned int *)(a3 + 32);
  if ( (_DWORD)result == 131334 )
  {
    if ( a1[32] < 6u )
    {
      memset(v8, 0, sizeof(v8));
      *(_QWORD *)&v8[40] = v7;
      *(_DWORD *)v8 = 15466902;
      *(_DWORD *)&v8[32] = 131332;
      *(_QWORD *)&v8[4] = 2LL;
      *(_DWORD *)&v8[48] = 8;
      *(_DWORD *)&v8[88] |= 0x100008u;
      *(_QWORD *)&v8[104] = &ndisIntReqGeneric;
      result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x7172444Eu);
      *(_QWORD *)(a3 + 144) = result;
      if ( result )
      {
        memset((void *)result, 0, 0x40uLL);
        result = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v8, 0LL, 0LL);
        *(_DWORD *)(*(_QWORD *)(a3 + 144) + 56LL) = result;
        if ( !(_DWORD)result )
        {
          *(_QWORD *)(*(_QWORD *)(a3 + 144) + 24LL) = v7[0];
          memset(v8, 0, sizeof(v8));
          *(_QWORD *)&v8[40] = v7;
          *(_QWORD *)&v8[104] = &ndisIntReqGeneric;
          *(_DWORD *)&v8[88] |= 0x100008u;
          *(_DWORD *)v8 = 15466902;
          *(_DWORD *)&v8[32] = 131333;
          *(_QWORD *)&v8[4] = 2LL;
          *(_DWORD *)&v8[48] = 8;
          result = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v8, 0LL, 0LL);
          *(_DWORD *)(*(_QWORD *)(a3 + 144) + 56LL) = result;
          if ( !(_DWORD)result )
          {
            *(_QWORD *)(*(_QWORD *)(a3 + 144) + 32LL) = v7[0];
            *(_QWORD *)(*(_QWORD *)(a3 + 144) + 40LL) = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 24LL)
                                                      + *(_QWORD *)(*(_QWORD *)(a3 + 144) + 32LL);
            memset(v8, 0, sizeof(v8));
            *(_QWORD *)&v8[40] = v7;
            *(_QWORD *)&v8[104] = &ndisIntReqGeneric;
            *(_DWORD *)&v8[88] |= 0x100008u;
            *(_DWORD *)v8 = 15466902;
            *(_DWORD *)&v8[32] = 131331;
            *(_QWORD *)&v8[4] = 2LL;
            *(_DWORD *)&v8[48] = 8;
            result = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v8, 0LL, 0LL);
            *(_DWORD *)(*(_QWORD *)(a3 + 144) + 56LL) = result;
            if ( !(_DWORD)result )
            {
              result = v7[0];
              *(_QWORD *)(*(_QWORD *)(a3 + 144) + 48LL) = v7[0];
            }
          }
        }
      }
    }
  }
  else if ( (_DWORD)result == 131611 && a1[32] < 6u )
  {
    memset(v8, 0, sizeof(v8));
    *(_QWORD *)&v8[40] = v7;
    *(_DWORD *)v8 = 15466902;
    *(_DWORD *)&v8[32] = 131332;
    *(_QWORD *)&v8[4] = 2LL;
    *(_DWORD *)&v8[48] = 8;
    *(_DWORD *)&v8[88] |= 0x100088u;
    *(_QWORD *)&v8[104] = &ndisIntReqGeneric;
    result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x7172444Eu);
    *(_QWORD *)(a3 + 144) = result;
    if ( result )
    {
      memset((void *)result, 0, 0x40uLL);
      result = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v8, 0LL, 0LL);
      *(_DWORD *)(*(_QWORD *)(a3 + 144) + 56LL) = result;
      if ( !(_DWORD)result )
      {
        *(_QWORD *)(*(_QWORD *)(a3 + 144) + 24LL) = v7[0];
        memset(v8, 0, sizeof(v8));
        *(_QWORD *)&v8[40] = v7;
        *(_QWORD *)&v8[104] = &ndisIntReqGeneric;
        *(_DWORD *)&v8[88] |= 0x100008u;
        *(_DWORD *)v8 = 15466902;
        *(_DWORD *)&v8[32] = 131333;
        *(_QWORD *)&v8[4] = 2LL;
        *(_DWORD *)&v8[48] = 8;
        result = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v8, 0LL, 0LL);
        *(_DWORD *)(*(_QWORD *)(a3 + 144) + 56LL) = result;
        if ( !(_DWORD)result )
        {
          *(_QWORD *)(*(_QWORD *)(a3 + 144) + 32LL) = v7[0];
          v6 = *(_QWORD **)(a3 + 144);
          result = v6[3] + v6[4];
          v6[5] = result;
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    return WPP_SF_q(238LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a3);
  return result;
}
