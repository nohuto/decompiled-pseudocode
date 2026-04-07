/*
 * XREFs of ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x1800AA404
 * Callers:
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800A9F10 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmap::HrCheckPixelRect(CBitmap *this, const struct WICRect *a2, struct tagRECT *a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  LONG Y; // r9d
  unsigned int left; // r8d
  INT Width; // ebx
  INT v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  LONG v14; // r8d
  LONG v15; // eax
  unsigned int v16; // edx
  INT Height; // ebx
  INT v18; // eax
  unsigned int v19; // eax
  RECT rcSrc1; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  SetRect(a3, 0, 0, *((_DWORD *)this + 46), *((_DWORD *)this + 47));
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
  if ( rcSrc1.left < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x26Bu);
    return v5;
  }
  Width = a2->Width;
  v11 = -1;
  if ( Width >= 0 )
    v11 = a2->Width;
  v5 = (Width >> 31) & 0x80070216;
  if ( (v5 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x26Cu);
    return v5;
  }
  v12 = left + v11;
  v13 = -1;
  if ( v12 >= left )
    v13 = v12;
  v5 = v12 < left ? 0x80070216 : 0;
  if ( v12 < left )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x26Du);
    return v5;
  }
  v14 = -1;
  v15 = -1;
  if ( v13 <= 0x7FFFFFFF )
    v15 = v13;
  rcSrc1.right = v15;
  v5 = v13 > 0x7FFFFFFF ? 0x80070216 : 0;
  if ( v13 > 0x7FFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x26Eu);
    return v5;
  }
  v16 = -1;
  if ( Y >= 0 )
    v16 = Y;
  v5 = (Y >> 31) & 0x80070216;
  if ( Y < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x270u);
    return v5;
  }
  Height = a2->Height;
  v18 = -1;
  if ( Height >= 0 )
    v18 = a2->Height;
  v5 = (Height >> 31) & 0x80070216;
  if ( (v5 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x271u);
    return v5;
  }
  v19 = v16 + v18;
  if ( v19 >= v16 )
    v6 = v19;
  v5 = v19 < v16 ? 0x80070216 : 0;
  if ( v19 < v16 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x272u);
    return v5;
  }
  if ( v6 <= 0x7FFFFFFF )
    v14 = v6;
  rcSrc1.bottom = v14;
  v5 = v6 > 0x7FFFFFFF ? 0x80070216 : 0;
  if ( v6 > 0x7FFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x273u);
    return v5;
  }
  IntersectRect(a3, &rcSrc1, a3);
  if ( !IsRectEmpty(&rcSrc1) && EqualRect(a3, &rcSrc1) )
    return v5;
  return 2147942487LL;
}
