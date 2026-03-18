/*
 * XREFs of ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1801D1554
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z @ 0x18009DCE8 (-CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CColorKeyBitmap@@IEAA@PEAVIBitmapRealization@@PEAVID2DBitmapCacheSource@@AEBVCColorKey@@@Z @ 0x1801D10D4 (--0CColorKeyBitmap@@IEAA@PEAVIBitmapRealization@@PEAVID2DBitmapCacheSource@@AEBVCColorKey@@@Z.c)
 */

__int64 __fastcall CColorKeyBitmap::Create(
        int (__fastcall ***a1)(struct IBitmapRealization *, GUID *, struct ID2DBitmapCacheSource **),
        const struct CColorKey *a2,
        struct IBitmapRealization **a3)
{
  int (__fastcall **v3)(struct IBitmapRealization *, GUID *, struct ID2DBitmapCacheSource **); // rax
  unsigned int v4; // ebx
  CColorKeyBitmap *v8; // rax
  CColorKeyBitmap *v9; // rax
  struct IBitmapRealization *v10; // rdx
  const void *retaddr; // [rsp+38h] [rbp+0h]
  struct ID2DBitmapCacheSource *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = 0;
  *a3 = 0LL;
  v13 = 0LL;
  if ( (*v3)((struct IBitmapRealization *)a1, &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3, &v13) >= 0 )
  {
    v8 = (CColorKeyBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0xD8uLL);
    if ( !v8 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    v9 = CColorKeyBitmap::CColorKeyBitmap(v8, (struct IBitmapRealization *)a1, v13, a2);
    v10 = (struct IBitmapRealization *)(((unsigned __int64)v9 + 144) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64));
    *a3 = v10;
    if ( v10 )
    {
      (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v10 + 8LL))(v10);
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x26u);
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x20u);
  }
  if ( v13 )
    (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)v13 + 16LL))(v13);
  return v4;
}
