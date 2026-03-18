/*
 * XREFs of ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x180082380
 * Callers:
 *     ?AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1800815F0 (-AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CC52C (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180083960 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800839A8 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CBitmap::AddDirtyRect(CBitmap *this, const struct tagRECT *a2)
{
  int v4; // esi
  LONG right; // eax
  LONG bottom; // eax
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  unsigned int v11; // r10d
  struct tagRECT *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // r9d
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // r8d
  unsigned int top; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax

  v4 = 0;
  if ( a2 )
  {
    if ( a2->left < 0
      || a2->top < 0
      || (right = a2->right, right <= a2->left)
      || (unsigned int)right > *((_DWORD *)this + 36)
      || (bottom = a2->bottom, bottom <= a2->top)
      || (unsigned int)bottom > *((_DWORD *)this + 37) )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1D2u);
      goto LABEL_9;
    }
  }
  if ( !*((_DWORD *)this + 14) )
    goto LABEL_9;
  if ( *((_BYTE *)this + 196) || *((_DWORD *)this + 48) != *((_DWORD *)this + 22) )
  {
    *((_DWORD *)this + 46) = 0;
    *((_BYTE *)this + 196) = 0;
  }
  if ( !a2 || a2->right - a2->left == *((_DWORD *)this + 36) && a2->bottom - a2->top == *((_DWORD *)this + 37) )
  {
    *((_DWORD *)this + 46) = 0;
    goto LABEL_9;
  }
  v11 = *((_DWORD *)this + 46);
  if ( v11 )
  {
    if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(*((_QWORD *)this + 22)) )
      goto LABEL_9;
  }
  else
  {
    *((_DWORD *)this + 47) = *((_DWORD *)this + 22);
  }
  if ( v11 >= 5 )
  {
    do
    {
      v13 = *((_QWORD *)this + 22) + 16LL * (v11 - 1);
      *((_DWORD *)this + 46) = v11 - 1;
      TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v13);
      if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v14) )
      {
        if ( v17 )
        {
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)v15 = 0LL;
        }
        else
        {
          *(_OWORD *)v15 = *(_OWORD *)v16;
        }
      }
      else if ( !v17 )
      {
        if ( *(_DWORD *)v16 < *(_DWORD *)v15 )
          *(_DWORD *)v15 = *(_DWORD *)v16;
        v18 = *(_DWORD *)(v16 + 4);
        if ( v18 < *(_DWORD *)(v15 + 4) )
          *(_DWORD *)(v15 + 4) = v18;
        v19 = *(_DWORD *)(v16 + 8);
        if ( v19 > *(_DWORD *)(v15 + 8) )
          *(_DWORD *)(v15 + 8) = v19;
        v20 = *(_DWORD *)(v16 + 12);
        if ( v20 > *(_DWORD *)(v15 + 12) )
          *(_DWORD *)(v15 + 12) = v20;
      }
      v11 = *((_DWORD *)this + 46);
    }
    while ( v11 > 1 );
    TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2);
    if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v21) )
    {
      if ( v23 )
      {
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)v22 = 0LL;
      }
      else
      {
        *(struct tagRECT *)v22 = *a2;
      }
    }
    else if ( !v23 )
    {
      if ( a2->left < *(_DWORD *)v22 )
        *(_DWORD *)v22 = a2->left;
      top = a2->top;
      if ( top < *(_DWORD *)(v22 + 4) )
        *(_DWORD *)(v22 + 4) = top;
      v25 = a2->right;
      if ( v25 > *(_DWORD *)(v22 + 8) )
        *(_DWORD *)(v22 + 8) = v25;
      v26 = a2->bottom;
      if ( v26 > *(_DWORD *)(v22 + 12) )
        *(_DWORD *)(v22 + 12) = v26;
    }
  }
  else
  {
    v12 = (struct tagRECT *)*((_QWORD *)this + 22);
    if ( v12 )
    {
LABEL_31:
      v12[v11] = *a2;
      ++*((_DWORD *)this + 46);
      goto LABEL_9;
    }
    v12 = (struct tagRECT *)HeapAlloc(WPF::g_processHeap, 0, 0x50uLL);
    *((_QWORD *)this + 22) = v12;
    if ( v12 )
    {
      v11 = *((_DWORD *)this + 46);
      goto LABEL_31;
    }
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x214u);
  }
LABEL_9:
  v7 = *((_DWORD *)this + 22);
  v8 = v7 == -1;
  v9 = v7 + 1;
  *((_DWORD *)this + 22) = v9;
  if ( v8 )
  {
    *((_DWORD *)this + 22) = 1;
    v9 = 1;
  }
  if ( v4 < 0 )
    *((_DWORD *)this + 46) = 0;
  else
    *((_DWORD *)this + 48) = v9;
  return (unsigned int)v4;
}
