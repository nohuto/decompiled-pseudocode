/*
 * XREFs of ?GetPointerToValidRectsForSurface@CBitmapOfDeviceBitmaps@@QEAAJPEAXVDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019B1EC
 * Callers:
 *     ?GetPointerToValidSourceRects@CHwDeviceBitmapColorSource@@EEBAJPEAVIMILResourceCache@@VDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019FDB0 (-GetPointerToValidSourceRects@CHwDeviceBitmapColorSource@@EEBAJPEAVIMILResourceCache@@VDisplayId.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPointerToValidRects@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJVDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019B148 (-GetPointerToValidRects@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJVDisplayId@@AEAIAEAPEBV-$T.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::GetPointerToValidRectsForSurface(
        __int64 a1,
        int a2,
        unsigned int a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 v6; // r8
  __int64 v7; // r10
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo *v8; // rcx
  int PointerToValidRects; // eax
  unsigned int v10; // ebx

  LODWORD(v6) = *(_DWORD *)(a1 + 288);
  if ( (_DWORD)v6 )
  {
    v7 = *(_QWORD *)(a1 + 264);
    while ( 1 )
    {
      v6 = (unsigned int)(v6 - 1);
      v8 = (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)(v7 + 96 * v6);
      if ( *((_DWORD *)v8 + 2) == a2 )
        break;
      if ( !(_DWORD)v6 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v8 = 0LL;
  }
  PointerToValidRects = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::GetPointerToValidRects(v8, a3, a4, a5);
  v10 = PointerToValidRects;
  if ( PointerToValidRects < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PointerToValidRects, 0x49Fu);
  return v10;
}
