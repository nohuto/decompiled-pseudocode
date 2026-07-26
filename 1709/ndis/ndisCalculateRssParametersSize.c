/*
 * XREFs of ndisCalculateRssParametersSize @ 0x1C001CF9C
 * Callers:
 *     ndisSetMiniportRSSParameters @ 0x1C001CC10 (ndisSetMiniportRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C001CD14 (ndisSetOpenRSSParameters.c)
 *     ndisQueryMiniportRSSParameters @ 0x1C0046E70 (ndisQueryMiniportRSSParameters.c)
 *     ndisQueryOpenRSSParameters @ 0x1C0046FC8 (ndisQueryOpenRSSParameters.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007B338 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCalculateRssParametersSize(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r9d
  int v3; // r8d
  unsigned int v4; // r8d
  unsigned int v7; // ebx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  unsigned int v12; // eax

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a1 + 12);
  *a2 = 0;
  v4 = v2 + v3;
  if ( v4 >= v2 )
  {
    v7 = v4;
    v8 = *(_DWORD *)(a1 + 24);
    v9 = v8 + *(unsigned __int16 *)(a1 + 20);
    if ( v9 >= v8 )
    {
      v10 = v9;
      if ( v7 > v9 )
        v10 = v7;
      if ( *(_BYTE *)(a1 + 1) < 2u )
        goto LABEL_10;
      if ( *(unsigned int *)(a1 + 32) * (unsigned __int64)*(unsigned int *)(a1 + 36) <= 0xFFFFFFFF )
      {
        v11 = *(_DWORD *)(a1 + 28);
        v12 = v11 + *(_DWORD *)(a1 + 32) * *(_DWORD *)(a1 + 36);
        if ( v12 >= v11 )
        {
          if ( v10 <= v12 )
            v10 = v11 + *(_DWORD *)(a1 + 32) * *(_DWORD *)(a1 + 36);
LABEL_10:
          *a2 = v10;
          return 0LL;
        }
      }
    }
  }
  return 3221291029LL;
}
