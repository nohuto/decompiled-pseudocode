/*
 * XREFs of ndisNdkPcwCollectMiniportStats @ 0x1C00EE2B8
 * Callers:
 *     ndisNdkPcwCollectData @ 0x1C00EE220 (ndisNdkPcwCollectData.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C0009A28 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 */

NTSTATUS __fastcall ndisNdkPcwCollectMiniportStats(__int64 a1, struct _PCW_BUFFER *a2)
{
  _QWORD *v2; // rbx
  const UNICODE_STRING *v5; // rdx
  struct _PCW_DATA Data; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v8[248]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v9[2]; // [rsp+140h] [rbp+40h] BYREF
  char v10; // [rsp+148h] [rbp+48h] BYREF

  v2 = *(_QWORD **)(a1 + 8);
  v9[1] = 0;
  v9[0] = 16253312;
  memset(v8, 0, sizeof(v8));
  *(_DWORD *)&v8[88] |= 8u;
  *(_DWORD *)&v8[8] = 0;
  *(_QWORD *)&v8[104] = &ndisIntReqGeneric;
  *(_DWORD *)v8 = 15466902;
  *(_QWORD *)&v8[40] = v9;
  *(_DWORD *)&v8[32] = -66846206;
  *(_DWORD *)&v8[4] = 2;
  *(_DWORD *)&v8[48] = 248;
  if ( (unsigned int)ndisQuerySetMiniport(v2, 0LL, (struct _NDIS_OID_REQUEST *)v8, 0LL, 0LL) )
    return -1073741823;
  v5 = (const UNICODE_STRING *)v2[555];
  Data.Data = &v10;
  Data.Size = 240;
  if ( !v5 )
    v5 = (const UNICODE_STRING *)v2[485];
  return PcwAddInstance(a2, v5, *(_DWORD *)(a1 + 20), 1u, &Data);
}
