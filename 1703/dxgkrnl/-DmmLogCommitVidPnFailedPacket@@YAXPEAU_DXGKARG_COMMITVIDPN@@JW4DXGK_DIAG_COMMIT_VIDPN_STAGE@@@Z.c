/*
 * XREFs of ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C01D2528
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C00E399C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000C45C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C01D2A00 (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 */

void __fastcall DmmLogCommitVidPnFailedPacket(__int64 a1, int a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  const struct DMMVIDPNTOPOLOGY *v10; // rbp
  __int64 v11; // rax
  unsigned int v12; // r15d
  unsigned int v13; // esi
  __int64 v14; // rbx
  char *v15; // rax
  char *v16; // rdi
  int v17; // r8d
  int v18; // r8d
  signed int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9

  v5 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)a1);
  if ( v5 )
  {
    v9 = *(_QWORD *)(v5 + 48);
    v10 = (const struct DMMVIDPNTOPOLOGY *)(v5 + 96);
    if ( !*(_QWORD *)(v9 + 8) )
    {
      v11 = WdLogNewEntry5_WdAssertion(0LL, v6, v7, v8);
      WdLogEvent5_WdAssertion(v11);
    }
    v12 = *((_DWORD *)v10 + 10);
    v13 = 144 * v12 + 72;
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL) + 268LL);
    v15 = (char *)operator new(v13, 0x4E506456u, PagedPool);
    v16 = v15;
    if ( v15 )
    {
      memset(v15, 0, 144 * v12 + 72);
      *((_DWORD *)v16 + 10) = 0;
      *((_QWORD *)v16 + 4) = 0LL;
      *(_DWORD *)v16 = 33;
      *((_DWORD *)v16 + 1) = v13;
      *((_QWORD *)v16 + 1) = 0LL;
      *((_QWORD *)v16 + 2) = 0LL;
      *((_QWORD *)v16 + 3) = 0LL;
      v17 = *((_DWORD *)v16 + 15);
      *((_DWORD *)v16 + 12) = a2;
      *((_DWORD *)v16 + 13) = *(_DWORD *)(a1 + 8);
      *((_DWORD *)v16 + 14) = *(_DWORD *)(a1 + 12);
      *((_DWORD *)v16 + 15) ^= (*(_DWORD *)(a1 + 24) ^ v17) & 1;
      v18 = (*(_DWORD *)(a1 + 24) ^ *((_DWORD *)v16 + 15)) & 2;
      *((_DWORD *)v16 + 16) = a3;
      *((_DWORD *)v16 + 15) ^= v18;
      *((_DWORD *)v16 + 17) = v12;
      v19 = DmmStoreVidPnPathDataIntoDiagPacket(v10, v12, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)(v16 + 72));
      if ( v19 < 0 || (v19 = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v16, v20, v21, v22), v19 < 0) )
        DxgkLogCodePointPacket(0x37u, v19, 0, 0, v14);
      ExFreePoolWithTag(v16, 0);
    }
    else
    {
      DxgkLogCodePointPacket(0x37u, 0xC0000017, 0, 0, v14);
    }
  }
  else
  {
    DxgkLogCodePointPacket(0x37u, 0xC000000D, 0, 0, 0LL);
  }
}
