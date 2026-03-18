/*
 * XREFs of ??1CBitmapColorKey@@EEAA@XZ @ 0x1801BAA48
 * Callers:
 *     ??_GCBitmapColorKey@@EEAAPEAXI@Z @ 0x1801BAB20 (--_GCBitmapColorKey@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 */

void __fastcall CBitmapColorKey::~CBitmapColorKey(CBitmapColorKey *this)
{
  *(_QWORD *)this = &CBitmapColorKey::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapColorKey::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CBitmapColorKey::`vftable'{for `IWICBitmapSource'};
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(*((_QWORD *)this + 4));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
