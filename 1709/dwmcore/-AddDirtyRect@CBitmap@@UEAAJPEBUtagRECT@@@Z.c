/*
 * XREFs of ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x18008C760
 * Callers:
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007DEC4 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180088768 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800887B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CBitmap::AddDirtyRect(CBitmap *this, struct tagRECT *a2)
{
  int v4; // esi
  LONG right; // eax
  LONG bottom; // eax
  int v7; // eax
  unsigned int v9; // r10d
  LPVOID v10; // rax
  _DWORD *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r9d
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  _DWORD *v18; // rdx
  __int64 v19; // rdx
  int v20; // r8d
  unsigned int top; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax

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
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x1D2u);
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
  v9 = *((_DWORD *)this + 46);
  if ( v9 )
  {
    if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(*((_QWORD *)this + 22), (__int64)a2) )
      goto LABEL_9;
  }
  else
  {
    *((_DWORD *)this + 47) = *((_DWORD *)this + 22);
  }
  if ( v9 >= 5 )
  {
    do
    {
      TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(*((_QWORD *)this + 22)
                                                                                  + 16LL
                                                                                  * (unsigned int)--*((_DWORD *)this + 46)));
      if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v11) )
      {
        if ( v14 )
        {
          *(_QWORD *)(v12 + 8) = 0LL;
          *(_QWORD *)v12 = 0LL;
        }
        else
        {
          *(_OWORD *)v12 = *(_OWORD *)v13;
        }
      }
      else if ( !v14 )
      {
        if ( *(_DWORD *)v13 < *(_DWORD *)v12 )
          *(_DWORD *)v12 = *(_DWORD *)v13;
        v15 = *(_DWORD *)(v13 + 4);
        if ( v15 < *(_DWORD *)(v12 + 4) )
          *(_DWORD *)(v12 + 4) = v15;
        v16 = *(_DWORD *)(v13 + 8);
        if ( v16 > *(_DWORD *)(v12 + 8) )
          *(_DWORD *)(v12 + 8) = v16;
        v17 = *(_DWORD *)(v13 + 12);
        if ( v17 > *(_DWORD *)(v12 + 12) )
          *(_DWORD *)(v12 + 12) = v17;
      }
    }
    while ( *((_DWORD *)this + 46) > 1u );
    TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2);
    if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v18) )
    {
      if ( v20 )
      {
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)v19 = 0LL;
      }
      else
      {
        *(struct tagRECT *)v19 = *a2;
      }
    }
    else if ( !v20 )
    {
      if ( a2->left < *(_DWORD *)v19 )
        *(_DWORD *)v19 = a2->left;
      top = a2->top;
      if ( top < *(_DWORD *)(v19 + 4) )
        *(_DWORD *)(v19 + 4) = top;
      v22 = a2->right;
      if ( v22 > *(_DWORD *)(v19 + 8) )
        *(_DWORD *)(v19 + 8) = v22;
      v23 = a2->bottom;
      if ( v23 > *(_DWORD *)(v19 + 12) )
        *(_DWORD *)(v19 + 12) = v23;
    }
  }
  else if ( *((_QWORD *)this + 22)
         || (v10 = HeapAlloc(WPF::g_processHeap, 0, 0x50uLL), (*((_QWORD *)this + 22) = v10) != 0LL) )
  {
    *(struct tagRECT *)(*((_QWORD *)this + 22) + 16LL * (unsigned int)(*((_DWORD *)this + 46))++) = *a2;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x214u);
  }
LABEL_9:
  v7 = *((_DWORD *)this + 22) + 1;
  if ( *((_DWORD *)this + 22) == -1 )
    v7 = 1;
  *((_DWORD *)this + 22) = v7;
  if ( v4 < 0 )
    *((_DWORD *)this + 46) = 0;
  else
    *((_DWORD *)this + 48) = v7;
  return (unsigned int)v4;
}
