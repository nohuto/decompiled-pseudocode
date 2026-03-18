/*
 * XREFs of ??1CBitmapColorKey@@EEAA@XZ @ 0x1801A151C
 * Callers:
 *     ??_GCBitmapColorKey@@EEAAPEAXI@Z @ 0x1801A15F0 (--_GCBitmapColorKey@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 */

void __fastcall CBitmapColorKey::~CBitmapColorKey(CBitmapColorKey *this)
{
  *(_QWORD *)this = &CBitmapColorKey::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapColorKey::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CBitmapColorKey::`vftable'{for `IWICBitmapSource'};
  ReleaseInterfaceNoNULL<ID2D1Ink>(*((_QWORD *)this + 4));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
