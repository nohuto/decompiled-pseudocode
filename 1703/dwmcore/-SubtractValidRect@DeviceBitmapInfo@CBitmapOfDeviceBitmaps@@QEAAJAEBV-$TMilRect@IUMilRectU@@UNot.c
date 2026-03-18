/*
 * XREFs of ?SubtractValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@@Z @ 0x180135DC4
 * Callers:
 *     ?AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z @ 0x180054A30 (-AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B2510 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::DeviceBitmapInfo::SubtractValidRect(__int64 a1, const RECT *a2, HRGN *a3)
{
  RECT *v3; // rsi
  unsigned int v6; // r8d
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int left; // ecx
  unsigned int bottom; // edx
  HRGN RectRgnIndirect; // rax
  signed int LastError; // eax
  HRGN v14; // rbp
  signed int v15; // eax
  int v16; // r14d
  signed int v17; // eax
  signed int v18; // eax
  __int64 v19; // rax
  unsigned int top; // eax
  unsigned int right; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v27; // [rsp+20h] [rbp-68h]
  unsigned int v28; // [rsp+20h] [rbp-68h]
  struct tagRECT rc; // [rsp+30h] [rbp-58h] BYREF

  v3 = (RECT *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 24);
  v8 = 0;
  if ( *(_DWORD *)(a1 + 32) <= v6 )
    return v8;
  v9 = *(_DWORD *)(a1 + 36);
  if ( v9 <= *(_DWORD *)(a1 + 28) )
    return v8;
  left = a2->left;
  if ( a2->right <= (unsigned int)a2->left )
    return v8;
  bottom = a2->bottom;
  if ( bottom <= a2->top || v3->right <= left || a2->right <= v6 || v9 <= a2->top || bottom <= v3->top )
    return v8;
  if ( !*a3 )
  {
    SetLastError(0);
    RectRgnIndirect = CreateRectRgnIndirect(a2);
    *a3 = RectRgnIndirect;
    if ( !RectRgnIndirect )
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      v27 = 2007;
LABEL_14:
      if ( (v8 & 0x80000000) == 0 )
        v8 = -2003304445;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v27);
      return v8;
    }
  }
  v14 = *(HRGN *)(a1 + 40);
  if ( !v14 )
  {
    SetLastError(0);
    v14 = CreateRectRgnIndirect(v3);
    if ( !v14 )
    {
      v15 = GetLastError();
      v8 = v15;
      if ( v15 > 0 )
        v8 = (unsigned __int16)v15 | 0x80070000;
      v27 = 2016;
      goto LABEL_14;
    }
  }
  WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
  *(_QWORD *)(a1 + 48) = 0LL;
  SetLastError(0);
  v16 = CombineRgn(v14, v14, *a3, 4);
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      *(_QWORD *)&v3->right = 0LL;
      *(_QWORD *)&v3->left = 0LL;
    }
    else
    {
      SetLastError(0);
      if ( !GetRgnBox(v14, &rc) )
      {
        v18 = GetLastError();
        v8 = v18;
        if ( v18 > 0 )
          v8 = (unsigned __int16)v18 | 0x80070000;
        v28 = 2051;
        goto LABEL_26;
      }
      *v3 = rc;
      if ( v16 != 2 )
      {
        *(_QWORD *)(a1 + 40) = v14;
        v14 = 0LL;
        goto LABEL_38;
      }
    }
    *(_QWORD *)(a1 + 40) = 0LL;
LABEL_38:
    v19 = *(_QWORD *)(a1 + 16);
    *(RECT *)(v19 + 172) = *v3;
    *(RECT *)(v19 + 188) = *v3;
    if ( v3->left > *(_DWORD *)(a1 + 56) )
      *(_DWORD *)(a1 + 56) = v3->left;
    top = v3->top;
    if ( top > *(_DWORD *)(a1 + 60) )
      *(_DWORD *)(a1 + 60) = top;
    right = v3->right;
    if ( right < *(_DWORD *)(a1 + 64) )
      *(_DWORD *)(a1 + 64) = right;
    v22 = v3->bottom;
    if ( v22 < *(_DWORD *)(a1 + 68) )
      *(_DWORD *)(a1 + 68) = v22;
    if ( *(_DWORD *)(a1 + 64) <= *(_DWORD *)(a1 + 56) || *(_DWORD *)(a1 + 68) <= *(_DWORD *)(a1 + 60) )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    if ( v3->left > *(_DWORD *)(a1 + 72) )
      *(_DWORD *)(a1 + 72) = v3->left;
    v23 = v3->top;
    if ( v23 > *(_DWORD *)(a1 + 76) )
      *(_DWORD *)(a1 + 76) = v23;
    v24 = v3->right;
    if ( v24 < *(_DWORD *)(a1 + 80) )
      *(_DWORD *)(a1 + 80) = v24;
    v25 = v3->bottom;
    if ( v25 < *(_DWORD *)(a1 + 84) )
      *(_DWORD *)(a1 + 84) = v25;
    if ( *(_DWORD *)(a1 + 80) <= *(_DWORD *)(a1 + 72) || *(_DWORD *)(a1 + 84) <= *(_DWORD *)(a1 + 76) )
    {
      *(_QWORD *)(a1 + 80) = 0LL;
      *(_QWORD *)(a1 + 72) = 0LL;
    }
    goto LABEL_60;
  }
  v17 = GetLastError();
  v8 = v17;
  if ( v17 > 0 )
    v8 = (unsigned __int16)v17 | 0x80070000;
  v28 = 2026;
LABEL_26:
  if ( (v8 & 0x80000000) == 0 )
    v8 = -2003304445;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v28);
LABEL_60:
  if ( v14 )
    DeleteObject(v14);
  return v8;
}
