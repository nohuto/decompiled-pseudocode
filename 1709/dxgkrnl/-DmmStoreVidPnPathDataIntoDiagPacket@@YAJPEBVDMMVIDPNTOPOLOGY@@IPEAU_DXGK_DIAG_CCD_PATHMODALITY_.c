/*
 * XREFs of ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C01EE364
 * Callers:
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C01ED9B0 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C01EDB38 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C00F40C4 (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNP.c)
 */

__int64 __fastcall DmmStoreVidPnPathDataIntoDiagPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        unsigned int a2,
        struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *a3)
{
  char *v3; // rbp
  __int64 v4; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r15
  _QWORD *v13; // rbx
  unsigned int v15; // ebp
  const struct DMMVIDPNTOPOLOGY *v16; // rdi
  _QWORD *i; // rdi
  int v18; // ecx
  const struct DMMVIDPNTOPOLOGY *v19; // rcx

  v3 = (char *)a1 + 160;
  v4 = a2;
  v8 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160) + 48);
  if ( !*(_QWORD *)(v8 + 8) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *(_QWORD *)(v8 + 8);
  v11 = *((unsigned int *)a1 + 10);
  v12 = *(_QWORD *)(v10 + 16);
  if ( (unsigned int)v11 <= (unsigned int)v4 )
  {
    v15 = 0;
    v16 = (const struct DMMVIDPNTOPOLOGY *)*((_QWORD *)a1 + 3);
    if ( v16 != (const struct DMMVIDPNTOPOLOGY *)((char *)a1 + 24) )
    {
      for ( i = (_QWORD *)((char *)v16 - 8); i; ++v15 )
      {
        if ( v15 >= (unsigned int)v4 )
          break;
        *((_DWORD *)a3 + 6) = *(_DWORD *)(i[11] + 24LL);
        v18 = *(_DWORD *)(i[12] + 24LL);
        *(_QWORD *)a3 |= 0x600000000000uLL;
        *((_DWORD *)a3 + 7) = v18;
        *((_QWORD *)a3 + 2) = *(_QWORD *)(v12 + 268);
        *(_QWORD *)a3 |= 0x100000000000uLL;
        _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2>((__int64)i, (__int64)a3);
        v19 = (const struct DMMVIDPNTOPOLOGY *)i[1];
        i = (_QWORD *)((char *)v19 - 8);
        if ( v19 == (const struct DMMVIDPNTOPOLOGY *)((char *)a1 + 24) )
          i = 0LL;
        a3 = (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)((char *)a3 + 144);
      }
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
