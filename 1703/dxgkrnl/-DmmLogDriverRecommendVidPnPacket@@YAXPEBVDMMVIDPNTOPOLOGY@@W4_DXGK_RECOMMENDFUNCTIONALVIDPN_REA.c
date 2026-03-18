/*
 * XREFs of ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C01D26A8
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01D3638 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C01D2A00 (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 */

void __fastcall DmmLogDriverRecommendVidPnPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned int v10; // r14d
  unsigned int v11; // ebp
  __int64 v12; // rbx
  char *v13; // rax
  char *v14; // rdi
  signed int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  v6 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160) + 48);
  if ( !*(_QWORD *)(v6 + 8) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5, v4, v7, v8);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_DWORD *)a1 + 10);
  v11 = 144 * v10 + 56;
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL) + 268LL);
  v13 = (char *)operator new(v11, 0x4E506456u, PagedPool);
  v14 = v13;
  if ( v13 )
  {
    memset(v13, 0, 144 * v10 + 56);
    *((_DWORD *)v14 + 10) = 0;
    *((_QWORD *)v14 + 4) = 0LL;
    *(_DWORD *)v14 = 34;
    *((_DWORD *)v14 + 1) = v11;
    *((_QWORD *)v14 + 1) = 0LL;
    *((_QWORD *)v14 + 2) = 0LL;
    *((_QWORD *)v14 + 3) = 0LL;
    *((_DWORD *)v14 + 12) = a2;
    *((_DWORD *)v14 + 13) = v10;
    v15 = DmmStoreVidPnPathDataIntoDiagPacket(a1, v10, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)(v14 + 56));
    if ( v15 < 0 || (v15 = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v14, v16, v17, v18), v15 < 0) )
      DxgkLogCodePointPacket(0x38u, v15, 0, 0, v12);
    ExFreePoolWithTag(v14, 0);
  }
  else
  {
    DxgkLogCodePointPacket(0x38u, 0xC0000017, 0, 0, v12);
  }
}
