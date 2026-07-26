/*
 * XREFs of ?ndisOidPostMiniportSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0020D74
 * Callers:
 *     ndisOidPostOffloadEncapsulation @ 0x1C0020C00 (ndisOidPostOffloadEncapsulation.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisOidPostMiniportSetEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // xmm1_8

  v1 = *(_QWORD *)a1;
  v2 = *((_QWORD *)a1 + 4);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 4120LL);
  if ( v3 && *(_DWORD *)(v3 + 1216) )
  {
    *(_DWORD *)(v2 + 32) = *(_DWORD *)(v3 + 1216);
    *(_DWORD *)(v3 + 1216) = 0;
    *(_QWORD *)(v2 + 40) = *(_QWORD *)(*(_QWORD *)(v1 + 4120) + 1208LL);
    *(_QWORD *)(v3 + 1208) = 0LL;
    if ( !*((_DWORD *)a1 + 10) || *(_DWORD *)(v2 + 52) == *(_DWORD *)(v2 + 48) )
      *(_DWORD *)(v2 + 52) = *(_DWORD *)(*(_QWORD *)(v1 + 4120) + 1220LL);
    *(_DWORD *)(v2 + 48) = *(_DWORD *)(*(_QWORD *)(v1 + 4120) + 1220LL);
    *(_DWORD *)(v3 + 1220) = 0;
    if ( !*((_DWORD *)a1 + 10) )
    {
      v4 = *(_DWORD *)(v3 + 868);
      v5 = *(_QWORD *)(v3 + 860);
      *(_OWORD *)(v3 + 760) = *(_OWORD *)(v3 + 844);
      *(_QWORD *)(v3 + 776) = v5;
      *(_DWORD *)(v3 + 784) = v4;
    }
  }
}
