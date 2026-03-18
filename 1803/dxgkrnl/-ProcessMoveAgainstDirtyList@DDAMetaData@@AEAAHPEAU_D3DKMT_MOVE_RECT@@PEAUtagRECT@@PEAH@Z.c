/*
 * XREFs of ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1C01D29A8
 * Callers:
 *     ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C01D2C90 (-ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x1C01D1E94 (-DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA-AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z.c)
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C01D2BDC (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessMoveAgainstDirtyList(
        DDAMetaData *this,
        struct _D3DKMT_MOVE_RECT *a2,
        struct tagRECT *a3,
        int *a4)
{
  RECT *p_DestRect; // rbp
  int DoesRectOverlapWithExistingDirty; // ebx
  int v9; // eax
  __int64 result; // rax
  struct _D3DKMT_PRESENT_RGNS v11; // [rsp+20h] [rbp-28h] BYREF

  p_DestRect = &a2->DestRect;
  *a4 = 1;
  DoesRectOverlapWithExistingDirty = DDAMetaData::DoesRectOverlapWithExistingDirty(
                                       (__int64)this,
                                       (unsigned int *)&a2->DestRect,
                                       (__int64)&v11);
  v9 = DDAMetaData::DoesRectOverlapWithExistingDirty((__int64)this, (unsigned int *)a3, (__int64)&v11);
  if ( !DoesRectOverlapWithExistingDirty && !v9 )
    return 1LL;
  memset(&v11, 0, sizeof(v11));
  v11.pDirtyRects = p_DestRect;
  v11.DirtyRectCount = 1;
  result = DDAMetaData::ProcessNewDirtyRects(this, &v11);
  *a4 = 0;
  return result;
}
