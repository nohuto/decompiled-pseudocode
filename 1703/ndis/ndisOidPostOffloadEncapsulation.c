/*
 * XREFs of ndisOidPostOffloadEncapsulation @ 0x1C0020C00
 * Callers:
 *     ndisOidPostTaskOffload @ 0x1C0048800 (ndisOidPostTaskOffload.c)
 * Callees:
 *     ?ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0020CC0 (-ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostMiniportSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0020D74 (-ndisOidPostMiniportSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
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
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqd(204LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v1, v3, v4);
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
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqd(205LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v1, v3, v4);
}
