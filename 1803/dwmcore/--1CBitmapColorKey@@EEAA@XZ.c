/*
 * XREFs of ??1CBitmapColorKey@@EEAA@XZ @ 0x1801F54B4
 * Callers:
 *     ??_GCBitmapColorKey@@EEAAPEAXI@Z @ 0x1801F5580 (--_GCBitmapColorKey@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 */

void __fastcall CBitmapColorKey::~CBitmapColorKey(CBitmapColorKey *this)
{
  *(_QWORD *)this = &CBitmapColorKey::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapColorKey::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CBitmapColorKey::`vftable'{for `IWICBitmapSource'};
  ReleaseInterfaceNoNULL<IBitmapSource>(*((_QWORD *)this + 4));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
