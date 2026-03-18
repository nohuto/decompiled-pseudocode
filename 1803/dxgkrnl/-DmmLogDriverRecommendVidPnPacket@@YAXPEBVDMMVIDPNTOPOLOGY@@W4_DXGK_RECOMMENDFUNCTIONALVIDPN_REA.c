/*
 * XREFs of ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C0214520
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0216824 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C02153F8 (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 */

void __fastcall DmmLogDriverRecommendVidPnPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // r14d
  __int64 v9; // rbx
  unsigned int v10; // esi
  char *v11; // rax
  char *v12; // rdi
  signed int v13; // eax

  v5 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160) + 48);
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v7);
    v6 = *(_QWORD *)(v5 + 8);
  }
  v8 = *((_DWORD *)a1 + 10);
  v9 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 268LL);
  v10 = 144 * v8 + 56;
  v11 = (char *)operator new[](v10, 0x4E506456u, PagedPool);
  v12 = v11;
  if ( v11 )
  {
    memset(v11, 0, 144 * v8 + 56);
    *((_DWORD *)v12 + 10) = 0;
    *((_QWORD *)v12 + 4) = 0LL;
    *(_DWORD *)v12 = 34;
    *((_DWORD *)v12 + 1) = v10;
    *((_QWORD *)v12 + 1) = 0LL;
    *((_QWORD *)v12 + 2) = 0LL;
    *((_QWORD *)v12 + 3) = 0LL;
    *((_DWORD *)v12 + 12) = a2;
    *((_DWORD *)v12 + 13) = v8;
    v13 = DmmStoreVidPnPathDataIntoDiagPacket(a1, v8, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)(v12 + 56));
    if ( v13 < 0 || (v13 = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v12), v13 < 0) )
      DxgkLogCodePointPacket(0x38u, v13, 0, 0, v9);
    operator delete[](v12);
  }
  else
  {
    DxgkLogCodePointPacket(0x38u, 0xC0000017, 0, 0, v9);
  }
}
