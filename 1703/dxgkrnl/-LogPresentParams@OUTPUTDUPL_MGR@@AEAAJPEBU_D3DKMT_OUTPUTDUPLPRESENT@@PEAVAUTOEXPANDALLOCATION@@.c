/*
 * XREFs of ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@@Z @ 0x1C01AD9A0
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01010E4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00A63E0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C00DDFBC (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C01AD890 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::LogPresentParams(
        DXGDIAGNOSTICSWITHMUTEX **this,
        const struct _D3DKMT_OUTPUTDUPLPRESENT *a2,
        PVOID *a3)
{
  size_t v5; // rdi
  UINT v6; // r14d
  char *Buffer; // rax
  __int64 v8; // rcx
  char *v9; // rbp
  __int64 v10; // rax
  OUTPUTDUPL_MGR *v12; // rcx

  v5 = 16 * a2->PresentRegions.DirtyRectCount;
  v6 = 24 * a2->PresentRegions.MoveRectCount;
  Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(a3, v6 + v5 + 72, 0);
  v9 = Buffer;
  if ( Buffer )
  {
    memset(Buffer, 0, 0x48uLL);
    OUTPUTDUPL_MGR::InitializePacketHeader(v12, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v9);
    *((_DWORD *)v9 + 1) = v6 + v5 + 72;
    *((_DWORD *)v9 + 12) = 2;
    *((_DWORD *)v9 + 13) = a2->VidPnSourceId;
    *((_DWORD *)v9 + 14) = a2->Flags.0;
    *((_DWORD *)v9 + 15) = a2->PresentRegions.DirtyRectCount;
    *((_DWORD *)v9 + 16) = a2->PresentRegions.MoveRectCount;
    memmove(v9 + 72, a2->PresentRegions.pDirtyRects, v5);
    memmove(&v9[(v5 & 0xFFFFFFFFFFFFFFF0uLL) + 72], a2->PresentRegions.pMoveRects, v6);
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v9, 1LL);
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v10 + 24) = 1118LL;
    WdLogEvent5_WdLowResource(v10);
    return 3221225495LL;
  }
}
