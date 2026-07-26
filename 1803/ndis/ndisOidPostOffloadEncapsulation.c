/*
 * XREFs of ndisOidPostOffloadEncapsulation @ 0x1C00225A0
 * Callers:
 *     ndisOidPostTaskOffload @ 0x1C0046E20 (ndisOidPostTaskOffload.c)
 * Callees:
 *     ?ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0022660 (-ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostMiniportSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0022714 (-ndisOidPostMiniportSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 */

void __fastcall ndisOidPostOffloadEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rcx

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = *((_DWORD *)a1 + 10);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqd(219LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, v3, v4);
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( *(_QWORD *)a1 )
      ndisOidPostMiniportSetEncapsulation(a1);
    v5 = *((_QWORD *)a1 + 3);
    if ( v5 )
    {
      v1 = *(_QWORD *)(v5 + 16);
      if ( !*((_DWORD *)a1 + 10) )
      {
        v6 = *(_QWORD *)(v1 + 4120);
        if ( v6 )
        {
          *(_OWORD *)(v6 + 788) = *(_OWORD *)(v6 + 816);
          *(_QWORD *)(v6 + 804) = *(_QWORD *)(v6 + 832);
          *(_DWORD *)(v6 + 812) = *(_DWORD *)(v6 + 840);
        }
      }
      ndisOidPostOpenSetEncapsulation(a1);
    }
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqd(220LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, v3, v4);
}
