/*
 * XREFs of ??0CColorKeyBitmap@@IEAA@PEAVIBitmapRealization@@PEAVID2DBitmapCacheSource@@AEBVCColorKey@@@Z @ 0x1801D10D4
 * Callers:
 *     ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1801D1554 (-Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180089F90 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CColorKeyBitmap *__fastcall CColorKeyBitmap::CColorKeyBitmap(
        CColorKeyBitmap *this,
        struct IBitmapRealization *a2,
        struct ID2DBitmapCacheSource *a3,
        const struct CColorKey *a4)
{
  CD2DBitmapCache *v4; // rsi
  struct ID2DBitmapCacheSource *v5; // r14

  *((_DWORD *)this + 2) = 0;
  v4 = (CColorKeyBitmap *)((char *)this + 16);
  *((_QWORD *)this + 4) = 0LL;
  v5 = (CColorKeyBitmap *)((char *)this + 152);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 12) = (char *)this + 128;
  *((_QWORD *)this + 13) = (char *)this + 128;
  *((_DWORD *)this + 28) = 2;
  *(_QWORD *)((char *)this + 116) = 2LL;
  *(_QWORD *)this = &CColorKeyBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CColorKeyBitmap::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CColorKeyBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CColorKeyBitmap::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CColorKeyBitmap::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 19) = &CColorKeyBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 21) = 0LL;
  *((_OWORD *)this + 11) = *(_OWORD *)a4;
  *((_OWORD *)this + 12) = *((_OWORD *)a4 + 1);
  *((_DWORD *)this + 52) = *((_DWORD *)a4 + 8);
  *((_QWORD *)this + 20) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 21) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)a3 + 8LL))(a3);
  CD2DBitmapCache::InitializeCache(v4, v5);
  return this;
}
