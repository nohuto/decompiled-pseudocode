/*
 * XREFs of ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180150A40
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18000A4A4 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800887B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x180088B6C (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::CopyPixels(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned __int8 PixelFormatSize; // al
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  signed int v12; // eax
  unsigned int v13; // ebx
  __int128 v15; // [rsp+50h] [rbp-18h] BYREF

  v15 = *(_OWORD *)a2;
  if ( !CSecondaryBitmap::RectInBounds((CSecondaryBitmap *)(a1 - 80), &v15)
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v13 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xADu);
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*(_DWORD *)(a1 + 28));
    v11 = a2[1] * v10 + *a2 * (PixelFormatSize >> 3);
    v12 = CBitmap::CopyPixelsHelper(
            (enum DXGI_FORMAT)*(_DWORD *)(a1 + 28),
            a2[2] - *a2,
            a2[3] - a2[1],
            v10,
            *(_DWORD *)(a1 + 48) - v11,
            (unsigned __int8 *)(v11 + *(_QWORD *)(a1 + 40)),
            a3,
            a4,
            a5);
    v13 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xBDu);
  }
  return v13;
}
