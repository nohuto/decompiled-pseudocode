/*
 * XREFs of ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x180081E6C
 * Callers:
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180081930 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180082150 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801E95D0 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CBitmap::HrCheckPixelRect(CBitmap *this, const struct WICRect *a2, struct tagRECT *a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // edx
  INT Y; // r9d
  unsigned int left; // r8d
  INT Width; // ebx
  INT v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  LONG v13; // r8d
  LONG v14; // eax
  unsigned int v15; // ecx
  INT Height; // ebx
  INT v17; // eax
  unsigned int v18; // eax
  RECT rcSrc1; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  SetRect(a3, 0, 0, *((_DWORD *)this + 42), *((_DWORD *)this + 43));
  if ( !a2 )
    return v5;
  v6 = -1;
  Y = a2->Y;
  rcSrc1.left = a2->X;
  left = -1;
  if ( rcSrc1.left >= 0 )
    left = rcSrc1.left;
  rcSrc1.top = Y;
  v5 = (rcSrc1.left >> 31) & 0x80070216;
  if ( rcSrc1.left >> 31 == -1 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x27Au);
    return v5;
  }
  Width = a2->Width;
  v10 = -1;
  if ( Width >= 0 )
    v10 = a2->Width;
  v5 = (Width >> 31) & 0x80070216;
  if ( (v5 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x27Bu);
    return v5;
  }
  v11 = left + v10;
  v12 = -1;
  if ( v11 >= left )
    v12 = v11;
  v5 = v11 < left ? 0x80070216 : 0;
  if ( v11 < left )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x27Cu);
    return v5;
  }
  v13 = -1;
  v14 = -1;
  if ( v12 <= 0x7FFFFFFF )
    v14 = v12;
  rcSrc1.right = v14;
  v5 = v12 > 0x7FFFFFFF ? 0x80070216 : 0;
  if ( v12 > 0x7FFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x27Du);
    return v5;
  }
  v15 = -1;
  if ( Y >= 0 )
    v15 = Y;
  v5 = (Y >> 31) & 0x80070216;
  if ( Y >> 31 == -1 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x27Fu);
    return v5;
  }
  Height = a2->Height;
  v17 = -1;
  if ( Height >= 0 )
    v17 = a2->Height;
  v5 = (Height >> 31) & 0x80070216;
  if ( (v5 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x280u);
    return v5;
  }
  v18 = v15 + v17;
  if ( v18 >= v15 )
    v6 = v18;
  v5 = v18 < v15 ? 0x80070216 : 0;
  if ( v18 < v15 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x281u);
    return v5;
  }
  if ( v6 <= 0x7FFFFFFF )
    v13 = v6;
  rcSrc1.bottom = v13;
  v5 = v6 > 0x7FFFFFFF ? 0x80070216 : 0;
  if ( v6 > 0x7FFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x282u);
    return v5;
  }
  IntersectRect(a3, &rcSrc1, a3);
  if ( !IsRectEmpty(&rcSrc1) && EqualRect(a3, &rcSrc1) )
    return v5;
  return 2147942487LL;
}
