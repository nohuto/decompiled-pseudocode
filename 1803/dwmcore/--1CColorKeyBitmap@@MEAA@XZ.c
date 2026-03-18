/*
 * XREFs of ??1CColorKeyBitmap@@MEAA@XZ @ 0x1802169B8
 * Callers:
 *     ??_ECColorKeyBitmap@@MEAAPEAXI@Z @ 0x180216A00 (--_ECColorKeyBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CColorKeyBitmap::~CColorKeyBitmap(CColorKeyBitmap *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CColorKeyBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CColorKeyBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
