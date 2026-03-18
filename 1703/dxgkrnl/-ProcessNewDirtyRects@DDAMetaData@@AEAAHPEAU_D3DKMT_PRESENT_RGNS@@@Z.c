/*
 * XREFs of ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C01B2BE0
 * Callers:
 *     ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1C01B1994 (-AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C01B1A90 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1C01B29B4 (-ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C01B2A58 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C01B2774 (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C01B28DC (-ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessNewDirtyRects(
        DDAMetaData *this,
        struct _D3DKMT_PRESENT_RGNS *a2,
        __int64 a3,
        __int64 a4)
{
  struct tagRECT *pDirtyRects; // rsi
  UINT v5; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagRECT *v10; // rsi
  UINT v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax

  pDirtyRects = (struct tagRECT *)a2->pDirtyRects;
  v5 = 0;
  if ( a2->DirtyRectCount )
  {
    while ( (unsigned int)DDAMetaData::ProcessDirtyRectAgainstMoveList(this, pDirtyRects) )
    {
      ++v5;
      ++pDirtyRects;
      if ( v5 >= a2->DirtyRectCount )
        goto LABEL_4;
    }
    v15 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v15 + 24) = 701LL;
  }
  else
  {
LABEL_4:
    v10 = (struct tagRECT *)a2->pDirtyRects;
    v11 = 0;
    if ( !a2->DirtyRectCount )
      return 1LL;
    while ( (unsigned int)DDAMetaData::ProcessDirtyRectAgainstDirtyList(this, v10, a3, a4) )
    {
      ++v11;
      ++v10;
      if ( v11 >= a2->DirtyRectCount )
        return 1LL;
    }
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = v11;
    *(_QWORD *)(v15 + 32) = v10;
  }
  WdLogEvent5_WdError(v15);
  return 0LL;
}
