/*
 * XREFs of ??0CColorKeyBitmap@@IEAA@PEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x180216950
 * Callers:
 *     ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z @ 0x180216BE4 (-Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CColorKeyBitmap *__fastcall CColorKeyBitmap::CColorKeyBitmap(
        CColorKeyBitmap *this,
        struct IBitmapRealization *a2,
        const struct CColorKey *a3)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CColorKeyBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CColorKeyBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_OWORD *)this + 2) = *(_OWORD *)a3;
  *((_OWORD *)this + 3) = *((_OWORD *)a3 + 1);
  *((_DWORD *)this + 16) = *((_DWORD *)a3 + 8);
  return this;
}
