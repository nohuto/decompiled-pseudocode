/*
 * XREFs of ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C01007B0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
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
  UINT MoveRectCount; // r15d
  const D3DKMT_MOVE_RECT *pMoveRects; // r10
  UINT DirtyRectCount; // r10d
  UINT v13; // r9d
  const RECT *i; // rsi
  int right; // eax
  __int64 left; // rcx
  int bottom; // edx
  int top; // r8d
  __int64 v20; // rax
  _QWORD *v21; // rdx
  int *p_bottom; // rsi
  int v23; // eax
  int v24; // r8d
  int v25; // edx
  int v26; // r9d
  int v27; // ebp
  _QWORD *v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  _DWORD v33[2]; // [rsp+20h] [rbp-38h]
  int v34; // [rsp+28h] [rbp-30h]
  int v35; // [rsp+2Ch] [rbp-2Ch]

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
      v23 = *(p_bottom - 1);
      v24 = *(p_bottom - 3);
      if ( v23 <= v24 )
        break;
      v25 = *p_bottom;
      v26 = *(p_bottom - 2);
      if ( *p_bottom <= v26 || v23 > a3 || v25 > a4 || v24 < 0 || v26 < 0 )
        break;
      v27 = *(p_bottom - 4);
      v33[0] = pMoveRects->SourcePoint.x;
      v33[1] = v27;
      v34 = v33[0] + v23 - v24;
      v35 = v25 - v26 + v27;
      if ( v34 > a3 || v25 - v26 + v27 > a4 || v33[0] < 0 || v27 < 0 )
      {
        v20 = WdLogNewEntry5_WdError(pPresentRegions);
        *(_QWORD *)(v20 + 24) = -1073741811LL;
        v28 = (_QWORD *)(v20 + 32);
        do
        {
          v29 = (int)v33[v5++];
          *v28++ = v29;
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
    v20 = WdLogNewEntry5_WdError(pPresentRegions);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    v30 = (_QWORD *)(v20 + 32);
    do
    {
      v31 = p_bottom[v5++ - 3];
      *v30++ = v31;
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
      right = i->right;
      left = (unsigned int)i->left;
      if ( (a2->Flags.Value & 0x10000000) != 0 )
      {
        if ( right < (int)left || (bottom = i->bottom, top = i->top, bottom < top) )
        {
LABEL_12:
          v20 = WdLogNewEntry5_WdError(left);
          *(_QWORD *)(v20 + 24) = -1073741811LL;
          v21 = (_QWORD *)(v20 + 32);
          do
          {
            v32 = *(&i->left + v5++);
            *v21++ = v32;
          }
          while ( v5 < 4 );
          goto LABEL_31;
        }
      }
      else
      {
        if ( right <= (int)left )
          goto LABEL_12;
        bottom = i->bottom;
        top = i->top;
        if ( bottom <= top )
          goto LABEL_12;
      }
      if ( right > a3 || bottom > a4 || (int)left < 0 || top < 0 )
        goto LABEL_12;
      ++v13;
    }
    return 0LL;
  }
}
