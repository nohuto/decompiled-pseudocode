/*
 * XREFs of ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C01ED9B0
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C00A790C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000A2F4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C01EE364 (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 */

void __fastcall DmmLogCommitVidPnFailedPacket(__int64 a1, int a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  const struct DMMVIDPNTOPOLOGY *v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // r15d
  unsigned int v10; // esi
  __int64 v11; // rbx
  char *v12; // rax
  char *v13; // rdi
  int v14; // r8d
  int v15; // eax
  int v16; // r8d
  signed int v17; // eax

  v5 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)a1);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 48);
    v7 = (const struct DMMVIDPNTOPOLOGY *)(v5 + 96);
    if ( !*(_QWORD *)(v6 + 8) )
    {
      v8 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = *((_DWORD *)v7 + 10);
    v10 = 144 * v9 + 80;
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL) + 268LL);
    v12 = (char *)operator new(v10, 0x4E506456u, PagedPool);
    v13 = v12;
    if ( v12 )
    {
      memset(v12, 0, 144 * v9 + 80);
      *((_DWORD *)v13 + 10) = 0;
      *((_QWORD *)v13 + 4) = 0LL;
      *(_DWORD *)v13 = 33;
      *((_DWORD *)v13 + 1) = v10;
      *((_QWORD *)v13 + 1) = 0LL;
      *((_QWORD *)v13 + 2) = 0LL;
      *((_QWORD *)v13 + 3) = 0LL;
      v14 = *((_DWORD *)v13 + 17);
      *((_DWORD *)v13 + 12) = a2;
      *(_QWORD *)(v13 + 52) = v11;
      *((_DWORD *)v13 + 15) = *(_DWORD *)(a1 + 8);
      *((_DWORD *)v13 + 16) = *(_DWORD *)(a1 + 12);
      *((_DWORD *)v13 + 17) ^= (*(_DWORD *)(a1 + 24) ^ v14) & 1;
      v15 = *((_DWORD *)v13 + 17);
      v16 = ((unsigned __int8)v15 ^ (unsigned __int8)*(_DWORD *)(a1 + 24)) & 2;
      *((_DWORD *)v13 + 18) = a3;
      *((_DWORD *)v13 + 19) = v9;
      *((_DWORD *)v13 + 17) = v15 ^ v16;
      v17 = DmmStoreVidPnPathDataIntoDiagPacket(v7, v9, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)(v13 + 80));
      if ( v17 < 0 || (v17 = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v13), v17 < 0) )
        DxgkLogCodePointPacket(0x37u, v17, 0, 0, v11);
      ExFreePoolWithTag(v13, 0);
    }
    else
    {
      DxgkLogCodePointPacket(0x37u, 0xC0000017, 0, 0, v11);
    }
  }
  else
  {
    DxgkLogCodePointPacket(0x37u, 0xC000000D, 0, 0, 0LL);
  }
}
