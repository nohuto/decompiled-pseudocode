/*
 * XREFs of ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00B23EC
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGCONTEXT::ValidatePresentRegions(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        int a3,
        int a4)
{
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rcx
  __int64 v5; // rbx
  UINT v9; // r11d
  UINT MoveRectCount; // r14d
  const D3DKMT_MOVE_RECT *pMoveRects; // r10
  UINT DirtyRectCount; // r11d
  UINT v13; // r10d
  const RECT *i; // rdi
  __int64 right; // rcx
  __int64 left; // rdx
  int bottom; // r8d
  int top; // r9d
  __int64 v20; // rax
  _QWORD *v21; // rdx
  int *p_bottom; // rdi
  __int64 v23; // rdx
  int v24; // r8d
  int v25; // eax
  int v26; // r9d
  int x; // esi
  int v28; // ebp
  __int64 v29; // rdx
  int v30; // eax
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _DWORD v36[14]; // [rsp+20h] [rbp-38h]

  pPresentRegions = a2->pPresentRegions;
  v5 = 0LL;
  v9 = 0;
  MoveRectCount = pPresentRegions->MoveRectCount;
  pMoveRects = pPresentRegions->pMoveRects;
  if ( MoveRectCount )
  {
    p_bottom = &pMoveRects->DestRect.bottom;
    while ( 1 )
    {
      v23 = (unsigned int)*(p_bottom - 1);
      v24 = *(p_bottom - 3);
      if ( (int)v23 <= v24 )
        break;
      v25 = *p_bottom;
      v26 = *(p_bottom - 2);
      if ( *p_bottom <= v26 || (int)v23 > a3 || v25 > a4 || v24 < 0 || v26 < 0 )
        break;
      x = pMoveRects->SourcePoint.x;
      v28 = *(p_bottom - 4);
      v29 = (unsigned int)(pMoveRects->SourcePoint.x + v23 - v24);
      v36[0] = pMoveRects->SourcePoint.x;
      v30 = v28 + v25 - v26;
      v36[1] = v28;
      v36[2] = v29;
      v36[3] = v30;
      if ( (int)v29 > a3 || v30 > a4 || x < 0 || v28 < 0 )
      {
        v20 = WdLogNewEntry5_WdError(pPresentRegions, v29);
        *(_QWORD *)(v20 + 24) = -1073741811LL;
        v31 = (_QWORD *)(v20 + 32);
        do
        {
          v32 = (int)v36[v5++];
          *v31++ = v32;
        }
        while ( v5 < 4 );
        goto LABEL_31;
      }
      ++v9;
      ++pMoveRects;
      p_bottom += 6;
      if ( v9 >= MoveRectCount )
        goto LABEL_2;
    }
    v20 = WdLogNewEntry5_WdError(pPresentRegions, v23);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    v33 = (_QWORD *)(v20 + 32);
    do
    {
      v34 = p_bottom[v5++ - 3];
      *v33++ = v34;
    }
    while ( v5 < 4 );
LABEL_31:
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  else
  {
LABEL_2:
    DirtyRectCount = pPresentRegions->DirtyRectCount;
    v13 = 0;
    for ( i = pPresentRegions->pDirtyRects; v13 < DirtyRectCount; ++i )
    {
      right = (unsigned int)i->right;
      left = (unsigned int)i->left;
      if ( ((a2->Flags.Value >> 28) & 1) != 0 )
      {
        if ( (int)right < (int)left || (bottom = i->bottom, top = i->top, bottom < top) )
        {
LABEL_12:
          v20 = WdLogNewEntry5_WdError(right, left);
          *(_QWORD *)(v20 + 24) = -1073741811LL;
          v21 = (_QWORD *)(v20 + 32);
          do
          {
            v35 = *(&i->left + v5++);
            *v21++ = v35;
          }
          while ( v5 < 4 );
          goto LABEL_31;
        }
      }
      else
      {
        if ( (int)right <= (int)left )
          goto LABEL_12;
        bottom = i->bottom;
        top = i->top;
        if ( bottom <= top )
          goto LABEL_12;
      }
      if ( (int)right > a3 || bottom > a4 || (int)left < 0 || top < 0 )
        goto LABEL_12;
      ++v13;
    }
    return 0LL;
  }
}
