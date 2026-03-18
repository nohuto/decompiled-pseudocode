/*
 * XREFs of ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x180056130
 * Callers:
 *     ?AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z @ 0x180054A30 (-AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B2510 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3FEC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CBitmap::AddDirtyRect(CBitmap *this, const struct tagRECT *a2)
{
  int v4; // esi
  LONG right; // eax
  LONG bottom; // eax
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  unsigned int left; // edx
  unsigned int *v10; // rax
  unsigned int v11; // r10d
  unsigned int top; // r9d
  int v13; // eax
  LPVOID v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // r9d
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // r8d
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax

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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1E7u);
      goto LABEL_20;
    }
  }
  if ( !*((_DWORD *)this + 14) )
    goto LABEL_20;
  if ( *((_BYTE *)this + 196) || *((_DWORD *)this + 48) != *((_DWORD *)this + 22) )
  {
    *((_DWORD *)this + 46) = 0;
    *((_BYTE *)this + 196) = 0;
  }
  if ( !a2 || a2->right - a2->left == *((_DWORD *)this + 36) && a2->bottom - a2->top == *((_DWORD *)this + 37) )
  {
    *((_DWORD *)this + 46) = 0;
    goto LABEL_20;
  }
  v7 = *((_DWORD *)this + 46);
  if ( v7 )
  {
    v8 = a2->right;
    left = a2->left;
    v10 = (unsigned int *)*((_QWORD *)this + 22);
    if ( v8 <= left )
      goto LABEL_20;
    v11 = a2->bottom;
    top = a2->top;
    if ( v11 <= top || left >= *v10 && top >= v10[1] && v8 <= v10[2] && v11 <= v10[3] )
      goto LABEL_20;
  }
  else
  {
    *((_DWORD *)this + 47) = *((_DWORD *)this + 22);
  }
  if ( v7 >= 5 )
  {
    do
    {
      TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(*((_QWORD *)this + 22) + 16LL
                                                                                                * (unsigned int)--*((_DWORD *)this + 46));
      if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v16) )
      {
        if ( v19 )
        {
          *(_QWORD *)(v17 + 8) = 0LL;
          *(_QWORD *)v17 = 0LL;
        }
        else
        {
          *(_OWORD *)v17 = *(_OWORD *)v18;
        }
      }
      else if ( !v19 )
      {
        if ( *(_DWORD *)v18 < *(_DWORD *)v17 )
          *(_DWORD *)v17 = *(_DWORD *)v18;
        v20 = *(_DWORD *)(v18 + 4);
        if ( v20 < *(_DWORD *)(v17 + 4) )
          *(_DWORD *)(v17 + 4) = v20;
        v21 = *(_DWORD *)(v18 + 8);
        if ( v21 > *(_DWORD *)(v17 + 8) )
          *(_DWORD *)(v17 + 8) = v21;
        v22 = *(_DWORD *)(v18 + 12);
        if ( v22 > *(_DWORD *)(v17 + 12) )
          *(_DWORD *)(v17 + 12) = v22;
      }
    }
    while ( *((_DWORD *)this + 46) > 1u );
    TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2);
    if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v23) )
    {
      if ( v25 )
      {
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)v24 = 0LL;
      }
      else
      {
        *(struct tagRECT *)v24 = *a2;
      }
    }
    else if ( !v25 )
    {
      if ( a2->left < *(_DWORD *)v24 )
        *(_DWORD *)v24 = a2->left;
      v26 = a2->top;
      if ( v26 < *(_DWORD *)(v24 + 4) )
        *(_DWORD *)(v24 + 4) = v26;
      v27 = a2->right;
      if ( v27 > *(_DWORD *)(v24 + 8) )
        *(_DWORD *)(v24 + 8) = v27;
      v28 = a2->bottom;
      if ( v28 > *(_DWORD *)(v24 + 12) )
        *(_DWORD *)(v24 + 12) = v28;
    }
  }
  else if ( *((_QWORD *)this + 22)
         || (v15 = HeapAlloc(WPF::g_processHeap, 0, 0x50uLL), (*((_QWORD *)this + 22) = v15) != 0LL) )
  {
    *(struct tagRECT *)(*((_QWORD *)this + 22) + 16LL * (unsigned int)(*((_DWORD *)this + 46))++) = *a2;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x229u);
  }
LABEL_20:
  v13 = *((_DWORD *)this + 22) + 1;
  if ( *((_DWORD *)this + 22) == -1 )
    v13 = 1;
  *((_DWORD *)this + 22) = v13;
  if ( v4 < 0 )
    *((_DWORD *)this + 46) = 0;
  else
    *((_DWORD *)this + 48) = v13;
  return (unsigned int)v4;
}
