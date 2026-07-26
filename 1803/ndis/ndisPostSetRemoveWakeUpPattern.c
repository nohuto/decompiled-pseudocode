/*
 * XREFs of ndisPostSetRemoveWakeUpPattern @ 0x1C004B2C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     ndisMiniportPostRemoveWoLPattern @ 0x1C004A9B4 (ndisMiniportPostRemoveWoLPattern.c)
 *     ndisPostRemoveMiniportWakeUpPattern @ 0x1C004AEFC (ndisPostRemoveMiniportWakeUpPattern.c)
 *     ndisRemoveOpenWakeUpPattern @ 0x1C004B5A0 (ndisRemoveOpenWakeUpPattern.c)
 */

void __fastcall ndisPostSetRemoveWakeUpPattern(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbp
  unsigned __int8 v5; // al
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqq(0x29u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, v1, v4, v3);
  if ( *(_DWORD *)(a1 + 40) )
  {
    v7 = *(_QWORD **)(v3 + 144);
    if ( v7 )
    {
      *(_DWORD *)(v3 + 32) = *(_DWORD *)v7;
      *(_QWORD *)(v3 + 40) = v7[1];
      *(_DWORD *)(v3 + 48) = *((_DWORD *)v7 + 4);
      ExFreePoolWithTag(v7, 0);
      *(_QWORD *)(v3 + 144) = 0LL;
    }
  }
  else if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( *(_QWORD *)a1 )
    {
      v5 = *(_BYTE *)(v1 + 32);
      if ( v5 > 6u || v5 == 6 && *(_BYTE *)(v1 + 33) >= 0x14u )
      {
        ndisMiniportPostRemoveWoLPattern(v1, v3);
        v6 = *(_QWORD **)(v3 + 144);
        *(_DWORD *)(v3 + 32) = *(_DWORD *)v6;
        *(_QWORD *)(v3 + 40) = v6[1];
        *(_DWORD *)(v3 + 48) = *((_DWORD *)v6 + 4);
        ExFreePoolWithTag(v6, 0);
        *(_QWORD *)(v3 + 144) = 0LL;
      }
      else
      {
        ndisPostRemoveMiniportWakeUpPattern(v1, v3, 0);
      }
    }
    if ( v4 )
      ndisRemoveOpenWakeUpPattern(v4, v3, *(unsigned int *)(a1 + 40));
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqq(0x2Au, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, v1, v4, v3);
}
