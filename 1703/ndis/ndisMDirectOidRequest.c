/*
 * XREFs of ndisMDirectOidRequest @ 0x1C0047400
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceOpenByHandle @ 0x1C001ADA0 (ndisReferenceOpenByHandle.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00211E4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     IsOidRequestDirectOid @ 0x1C00455E8 (IsOidRequestDirectOid.c)
 *     ndisDoDirectOidRequest @ 0x1C0046784 (ndisDoDirectOidRequest.c)
 */

__int64 __fastcall ndisMDirectOidRequest(struct _NDIS_OPEN_BLOCK *a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 MiniportHandle; // rbp
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v4 = -1073741823;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x10u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2);
  if ( IsOidRequestDirectOid(*(_DWORD *)(a2 + 32)) )
  {
    if ( ndisReferenceOpenByHandle(a1, 6u) )
    {
      MiniportHandle = (__int64)a1->MiniportHandle;
      if ( !a1->ProtocolHandle->DirectOidRequestCompleteHandler )
        goto LABEL_10;
      if ( (*(_DWORD *)(MiniportHandle + 3704) & 0x400) == 0 )
        *(_BYTE *)(a2 + 232) = 1;
      memset((void *)(a2 + 72), 0, 0x60uLL);
      *(_DWORD *)(a2 + 88) |= 0x200020u;
      *(_QWORD *)(a2 + 96) = 0LL;
      *(_QWORD *)(a2 + 104) = a1;
      v4 = ndisDoDirectOidRequest(a2, MiniportHandle, 0LL, 0LL);
      if ( v4 != 259 )
LABEL_10:
        ndisMDereferenceOpenUnlocked((__int64)a1, 6);
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
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    v7 = v4;
    WPP_SF_qqd(0x11u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2, v7);
  }
  return v4;
}
