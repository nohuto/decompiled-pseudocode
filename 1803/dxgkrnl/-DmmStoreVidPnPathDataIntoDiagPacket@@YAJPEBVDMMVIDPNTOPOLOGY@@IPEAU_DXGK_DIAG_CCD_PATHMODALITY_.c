/*
 * XREFs of ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C02153F8
 * Callers:
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C0214394 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C0214520 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C00DAD08 (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNP.c)
 */

__int64 __fastcall DmmStoreVidPnPathDataIntoDiagPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        unsigned int a2,
        struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *a3)
{
  char *v3; // rbp
  __int64 v4; // rdi
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r15
  _QWORD *v13; // rbx
  char *v15; // rsi
  unsigned int v16; // ebp
  char *v17; // rcx
  char *v18; // rbx
  int v19; // ecx
  char *v20; // rax

  v3 = (char *)a1 + 160;
  v4 = a2;
  v8 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160) + 48);
  v9 = *(_QWORD *)(v8 + 8);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v10);
    v9 = *(_QWORD *)(v8 + 8);
  }
  v11 = *((unsigned int *)a1 + 10);
  v12 = *(_QWORD *)(v9 + 16);
  if ( (unsigned int)v11 <= (unsigned int)v4 )
  {
    v15 = (char *)a1 + 24;
    v16 = 0;
    v17 = (char *)*((_QWORD *)a1 + 3);
    v18 = 0LL;
    if ( v17 != v15 )
      v18 = v17 - 8;
    while ( v18 && v16 < (unsigned int)v4 )
    {
      *((_DWORD *)a3 + 6) = *(_DWORD *)(*((_QWORD *)v18 + 11) + 24LL);
      v19 = *(_DWORD *)(*((_QWORD *)v18 + 12) + 24LL);
      *(_QWORD *)a3 |= 0x600000000000uLL;
      *((_DWORD *)a3 + 7) = v19;
      *((_QWORD *)a3 + 2) = *(_QWORD *)(v12 + 268);
      *(_QWORD *)a3 |= 0x100000000000uLL;
      _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2>((__int64)v18, (__int64)a3);
      v20 = (char *)*((_QWORD *)v18 + 1);
      v18 = v20 - 8;
      if ( v20 == v15 )
        v18 = 0LL;
      a3 = (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)((char *)a3 + 144);
      ++v16;
    }
    return 0LL;
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v13[3] = ContainedBy<DMMVIDPN>::GetContainer((__int64)v3);
    v13[4] = v11;
    v13[5] = v4;
    WdLogEvent5_WdError(v13);
    return 3221225507LL;
  }
}
