/*
 * XREFs of ?ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00E52C4
 * Callers:
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00E4B5C (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C0009F4C (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 */

__int64 __fastcall ndisPcwQueryPcfMatchCount(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCurrentCapabilities; // rax
  int SetMiniport; // eax
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v7[248]; // [rsp+40h] [rbp-C0h] BYREF

  ReceiveFilterCurrentCapabilities = a1->ReceiveFilterCurrentCapabilities;
  v6 = 0LL;
  if ( !ReceiveFilterCurrentCapabilities || (ReceiveFilterCurrentCapabilities->EnabledFilterTypes & 2) == 0 )
    return 0LL;
  memset(v7, 0, sizeof(v7));
  *(_DWORD *)&v7[88] |= 8u;
  *(_QWORD *)&v7[104] = &ndisIntReqGeneric;
  *(_DWORD *)v7 = 15466902;
  *(_QWORD *)&v7[40] = &v6;
  *(_DWORD *)&v7[32] = 66101;
  *(_QWORD *)&v7[4] = 2LL;
  *(_DWORD *)&v7[48] = 8;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v7, 0LL, 0LL);
  v5 = v6;
  if ( SetMiniport )
    return 0LL;
  return v5;
}
