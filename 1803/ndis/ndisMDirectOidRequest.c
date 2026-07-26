/*
 * XREFs of ndisMDirectOidRequest @ 0x1C00457D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C1F0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceOpenByHandle @ 0x1C001C400 (ndisReferenceOpenByHandle.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     IsOidRequestDirectOid @ 0x1C00433FC (IsOidRequestDirectOid.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ndisDoDirectOidRequest @ 0x1C0044A5C (ndisDoDirectOidRequest.c)
 */

__int64 __fastcall ndisMDirectOidRequest(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdi
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v4 = -1073741823;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x10u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a2);
  if ( IsOidRequestDirectOid(*(_DWORD *)(a2 + 32)) )
  {
    if ( ndisReferenceOpenByHandle(a1, 6u) )
    {
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 872LL) )
        goto LABEL_10;
      v5 = *(_QWORD *)(a1 + 16);
      if ( (*(_DWORD *)(v5 + 3704) & 0x400) == 0 )
        *(_BYTE *)(a2 + 232) = 1;
      memset((void *)(a2 + 72), 0, 0x60uLL);
      *(_DWORD *)(a2 + 88) |= 0x200020u;
      *(_QWORD *)(a2 + 96) = 0LL;
      *(_QWORD *)(a2 + 104) = a1;
      v4 = ndisDoDirectOidRequest(a2, v5, 0LL, 0LL);
      if ( v4 != 259 )
LABEL_10:
        ndisMDereferenceOpenUnlocked(a1, 6);
    }
    else
    {
      v4 = -1073676286;
    }
  }
  else
  {
    v4 = -1073741637;
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    v7 = v4;
    WPP_SF_qqd(0x11u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a2, v7);
  }
  return v4;
}
