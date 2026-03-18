/*
 * XREFs of ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18015B510
 * Callers:
 *     <none>
 * Callees:
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x1800253EC (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18007E394 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3FEC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
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
  int v12; // eax
  unsigned int v13; // ebx
  __int128 v15; // [rsp+50h] [rbp-18h] BYREF

  v15 = *(_OWORD *)a2;
  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds((CSecondaryBitmap *)(a1 - 80), &v15)
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v13 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xB2u);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC4u);
  }
  return v13;
}
