/*
 * XREFs of ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C01B1848
 * Callers:
 *     ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C01B2774 (-ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C01B28DC (-ProcessDirtyRectAgainstMoveList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1C01B2A58 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1C01B1BD8 (-ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C01B1F68 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DDAMetaData::AddToDirtyList(DDAMetaData *this, struct tagRECT *a2)
{
  unsigned int v4; // r8d
  unsigned int v5; // edi
  __int64 v6; // rdx
  struct tagRECT *DirtyRectData; // rcx
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax

  if ( !*((_QWORD *)this + 8) )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = *((_DWORD *)this + 5);
    if ( v4 < v5 )
    {
      if ( (unsigned int)(((unsigned __int64)*(unsigned int *)(*((_QWORD *)this + 4) + 12LL) - 36) >> 4) == v4 )
      {
        if ( v4 + 8 < v5 )
          v5 = v4 + 8;
      }
      else
      {
        v5 = v4 + 1;
      }
      DirtyRectData = DDAMetaData::GetDirtyRectData(this, v5);
      if ( !DirtyRectData )
      {
        v8 = WdLogNewEntry5_WdError(0LL, v6);
        *(_QWORD *)(v8 + 24) = v5;
LABEL_10:
        WdLogEvent5_WdError(v8);
        return 0LL;
      }
      DirtyRectData[(*((_DWORD *)this + 6))++] = *a2;
      return 1LL;
    }
    if ( !(unsigned int)DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(this) )
    {
      v12 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v12 + 24) = 1071LL;
LABEL_15:
      v8 = v12;
      goto LABEL_10;
    }
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
          *((_QWORD *)this + 9),
          (unsigned int)a2->left,
          (unsigned int)a2->top,
          (unsigned int)a2->right,
          a2->bottom);
  if ( !v15 )
  {
    v12 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v12 + 24) = 1080LL;
    goto LABEL_15;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
         *((_QWORD *)this + 8),
         *((_QWORD *)this + 8),
         *((_QWORD *)this + 9),
         2LL) )
  {
    return 1LL;
  }
  v18 = WdLogNewEntry5_WdError(v17, v16);
  *(_QWORD *)(v18 + 24) = 1086LL;
  WdLogEvent5_WdError(v18);
  return v15;
}
