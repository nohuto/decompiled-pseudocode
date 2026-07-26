/*
 * XREFs of ?ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001D250
 * Callers:
 *     ndisOidPostOffloadEncapsulation @ 0x1C001D190 (ndisOidPostOffloadEncapsulation.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 */

void __fastcall ndisOidPostOpenSetEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 3);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(220LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, *(_QWORD *)(v3 + 16), v1, v3);
  v4 = *(_QWORD *)(v3 + 792);
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 64) )
    {
      if ( !*((_DWORD *)a1 + 10) || *(_DWORD *)(v1 + 52) == *(_DWORD *)(v1 + 48) )
        *(_DWORD *)(v1 + 52) = *(_DWORD *)(v4 + 80);
      *(_DWORD *)(v1 + 32) = *(_DWORD *)(v4 + 64);
      v5 = *(_QWORD *)(v4 + 72);
      *(_DWORD *)(v4 + 64) = 0;
      *(_QWORD *)(v1 + 40) = v5;
      LODWORD(v5) = *(_DWORD *)(v4 + 80);
      *(_QWORD *)(v4 + 72) = 0LL;
      *(_DWORD *)(v1 + 48) = v5;
      *(_DWORD *)(v4 + 80) = 0;
    }
    if ( !*((_DWORD *)a1 + 10) )
    {
      v6 = *(_QWORD *)(v1 + 40);
      *(_OWORD *)v4 = *(_OWORD *)v6;
      *(_QWORD *)(v4 + 16) = *(_QWORD *)(v6 + 16);
      *(_DWORD *)(v4 + 24) = *(_DWORD *)(v6 + 24);
      *(_BYTE *)(v4 + 28) = 1;
    }
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(221LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v3, v1);
}
