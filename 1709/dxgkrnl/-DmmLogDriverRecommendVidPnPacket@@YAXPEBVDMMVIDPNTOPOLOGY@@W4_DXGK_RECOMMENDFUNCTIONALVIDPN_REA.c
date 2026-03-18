/*
 * XREFs of ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C01EDB38
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01EED18 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C01EE364 (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 */

void __fastcall DmmLogDriverRecommendVidPnPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // r14d
  unsigned int v8; // ebp
  __int64 v9; // rbx
  char *v10; // rax
  char *v11; // rdi
  signed int v12; // eax

  v5 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160) + 48);
  if ( !*(_QWORD *)(v5 + 8) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_DWORD *)a1 + 10);
  v8 = 144 * v7 + 56;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 268LL);
  v10 = (char *)operator new(v8, 0x4E506456u, PagedPool);
  v11 = v10;
  if ( v10 )
  {
    memset(v10, 0, 144 * v7 + 56);
    *((_DWORD *)v11 + 10) = 0;
    *((_QWORD *)v11 + 4) = 0LL;
    *(_DWORD *)v11 = 34;
    *((_DWORD *)v11 + 1) = v8;
    *((_QWORD *)v11 + 1) = 0LL;
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 3) = 0LL;
    *((_DWORD *)v11 + 12) = a2;
    *((_DWORD *)v11 + 13) = v7;
    v12 = DmmStoreVidPnPathDataIntoDiagPacket(a1, v7, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)(v11 + 56));
    if ( v12 < 0 || (v12 = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v11), v12 < 0) )
      DxgkLogCodePointPacket(0x38u, v12, 0, 0, v9);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    DxgkLogCodePointPacket(0x38u, 0xC0000017, 0, 0, v9);
  }
}
