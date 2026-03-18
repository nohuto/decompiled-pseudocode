/*
 * XREFs of ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C01D2A00
 * Callers:
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C01D2528 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C01D26A8 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C00A0CDC (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNP.c)
 */

__int64 __fastcall DmmStoreVidPnPathDataIntoDiagPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        unsigned int a2,
        struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *a3)
{
  char *v3; // rbp
  __int64 v4; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r15
  _QWORD *v16; // rbx
  unsigned int v18; // ebp
  const struct DMMVIDPNTOPOLOGY *v19; // rsi
  _QWORD *i; // rsi
  int v21; // ecx
  const struct DMMVIDPNTOPOLOGY *v22; // rcx

  v3 = (char *)a1 + 160;
  v4 = a2;
  v9 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160) + 48);
  if ( !*(_QWORD *)(v9 + 8) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v8, v7, v10, v11);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *(_QWORD *)(v9 + 8);
  v14 = *((unsigned int *)a1 + 10);
  v15 = *(_QWORD *)(v13 + 16);
  if ( (unsigned int)v14 <= (unsigned int)v4 )
  {
    v18 = 0;
    v19 = (const struct DMMVIDPNTOPOLOGY *)*((_QWORD *)a1 + 3);
    if ( v19 != (const struct DMMVIDPNTOPOLOGY *)((char *)a1 + 24) )
    {
      for ( i = (_QWORD *)((char *)v19 - 8); i; ++v18 )
      {
        if ( v18 >= (unsigned int)v4 )
          break;
        *((_DWORD *)a3 + 6) = *(_DWORD *)(i[11] + 24LL);
        v21 = *(_DWORD *)(i[12] + 24LL);
        *(_QWORD *)a3 |= 0x600000000000uLL;
        *((_DWORD *)a3 + 7) = v21;
        *((_QWORD *)a3 + 2) = *(_QWORD *)(v15 + 268);
        *(_QWORD *)a3 |= 0x100000000000uLL;
        _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2>((__int64)i, (__int64)a3, v10, v11);
        v22 = (const struct DMMVIDPNTOPOLOGY *)i[1];
        i = (_QWORD *)((char *)v22 - 8);
        if ( v22 == (const struct DMMVIDPNTOPOLOGY *)((char *)a1 + 24) )
          i = 0LL;
        a3 = (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)((char *)a3 + 144);
      }
    }
    return 0LL;
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    v16[3] = ContainedBy<DMMVIDPN>::GetContainer((__int64)v3);
    v16[4] = v14;
    v16[5] = v4;
    WdLogEvent5_WdError(v16);
    return 3221225507LL;
  }
}
