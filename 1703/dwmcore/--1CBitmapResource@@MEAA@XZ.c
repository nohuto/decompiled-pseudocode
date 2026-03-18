/*
 * XREFs of ??1CBitmapResource@@MEAA@XZ @ 0x18007D014
 * Callers:
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x180020210 (--1CHwndBitmap@@MEAA@XZ.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x180055960 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ??_GCBitmapResource@@MEAAPEAXI@Z @ 0x18007D054 (--_GCBitmapResource@@MEAAPEAXI@Z.c)
 *     ??1CFlipChain@@MEAA@XZ @ 0x180163988 (--1CFlipChain@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CBitmapResource::~CBitmapResource(CBitmapResource *this)
{
  CResource *v1; // rbx

  v1 = (CBitmapResource *)((char *)this + 16);
  *(_QWORD *)this = &CBitmapResource::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CBitmapResource::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CBitmapResource::`vftable'{for `CContent'};
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 10);
  CResource::~CResource(v1);
}
