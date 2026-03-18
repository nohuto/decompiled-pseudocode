/*
 * XREFs of ?SubtractValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@@Z @ 0x1801ACBE0
 * Callers:
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007DEC4 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800887B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::DeviceBitmapInfo::SubtractValidRect(__int64 a1, const RECT *a2, HRGN *a3)
{
  RECT *v3; // rdi
  signed int v7; // ebx
  _DWORD *v8; // rdx
  LONG *v9; // rdx
  _QWORD *v10; // r8
  HRGN RectRgnIndirect; // rax
  signed int LastError; // eax
  HRGN v13; // rsi
  signed int v14; // eax
  int v15; // r14d
  signed int v16; // eax
  signed int v17; // eax
  __int64 v18; // rax
  LONG *v19; // rcx
  unsigned int top; // eax
  unsigned int right; // eax
  unsigned int bottom; // eax
  _QWORD *v23; // rcx
  LONG *v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  _QWORD *v28; // rcx
  unsigned int v30; // [rsp+20h] [rbp-58h]
  unsigned int v31; // [rsp+20h] [rbp-58h]
  struct tagRECT rc; // [rsp+30h] [rbp-48h] BYREF

  v3 = (RECT *)(a1 + 24);
  v7 = 0;
  if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(a1 + 24))
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v8)
    || v3->right <= (unsigned int)*v9
    || (unsigned int)v9[2] <= v3->left
    || v3->bottom <= (unsigned int)v9[1]
    || (unsigned int)v9[3] <= v3->top )
  {
    return (unsigned int)v7;
  }
  if ( !*v10 )
  {
    SetLastError(0);
    RectRgnIndirect = CreateRectRgnIndirect(a2);
    *a3 = RectRgnIndirect;
    if ( !RectRgnIndirect )
    {
      LastError = GetLastError();
      v7 = LastError;
      if ( LastError > 0 )
        v7 = (unsigned __int16)LastError | 0x80070000;
      v30 = 1940;
LABEL_12:
      if ( v7 >= 0 )
        v7 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, v30);
      return (unsigned int)v7;
    }
  }
  v13 = *(HRGN *)(a1 + 40);
  if ( !v13 )
  {
    SetLastError(0);
    v13 = CreateRectRgnIndirect(v3);
    if ( !v13 )
    {
      v14 = GetLastError();
      v7 = v14;
      if ( v14 > 0 )
        v7 = (unsigned __int16)v14 | 0x80070000;
      v30 = 1949;
      goto LABEL_12;
    }
  }
  WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
  *(_QWORD *)(a1 + 48) = 0LL;
  SetLastError(0);
  v15 = CombineRgn(v13, v13, *a3, 4);
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      *(_QWORD *)&v3->right = 0LL;
      *(_QWORD *)&v3->left = 0LL;
    }
    else
    {
      SetLastError(0);
      if ( !GetRgnBox(v13, &rc) )
      {
        v17 = GetLastError();
        v7 = v17;
        if ( v17 > 0 )
          v7 = (unsigned __int16)v17 | 0x80070000;
        v31 = 1984;
        goto LABEL_24;
      }
      *v3 = rc;
      if ( v15 != 2 )
      {
        *(_QWORD *)(a1 + 40) = v13;
        v13 = 0LL;
        goto LABEL_36;
      }
    }
    *(_QWORD *)(a1 + 40) = 0LL;
LABEL_36:
    v18 = *(_QWORD *)(a1 + 16);
    v19 = (LONG *)(a1 + 56);
    *(RECT *)(v18 + 180) = *v3;
    *(RECT *)(v18 + 196) = *v3;
    if ( v3->left > *(_DWORD *)(a1 + 56) )
      *v19 = v3->left;
    top = v3->top;
    if ( top > *(_DWORD *)(a1 + 60) )
      *(_DWORD *)(a1 + 60) = top;
    right = v3->right;
    if ( right < *(_DWORD *)(a1 + 64) )
      *(_DWORD *)(a1 + 64) = right;
    bottom = v3->bottom;
    if ( bottom < *(_DWORD *)(a1 + 68) )
      *(_DWORD *)(a1 + 68) = bottom;
    if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v19) )
    {
      v23[1] = 0LL;
      *v23 = 0LL;
    }
    v24 = (LONG *)(a1 + 72);
    if ( v3->left > *(_DWORD *)(a1 + 72) )
      *v24 = v3->left;
    v25 = v3->top;
    if ( v25 > *(_DWORD *)(a1 + 76) )
      *(_DWORD *)(a1 + 76) = v25;
    v26 = v3->right;
    if ( v26 < *(_DWORD *)(a1 + 80) )
      *(_DWORD *)(a1 + 80) = v26;
    v27 = v3->bottom;
    if ( v27 < *(_DWORD *)(a1 + 84) )
      *(_DWORD *)(a1 + 84) = v27;
    if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v24) )
    {
      v28[1] = 0LL;
      *v28 = 0LL;
    }
    goto LABEL_56;
  }
  v16 = GetLastError();
  v7 = v16;
  if ( v16 > 0 )
    v7 = (unsigned __int16)v16 | 0x80070000;
  v31 = 1959;
LABEL_24:
  if ( v7 >= 0 )
    v7 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, v31);
LABEL_56:
  if ( v13 )
    DeleteObject(v13);
  return (unsigned int)v7;
}
