/*
 * XREFs of ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1801360E0
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180019D10 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18004C1D0 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?LockForRead@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801AD370 (-LockForRead@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801D1850 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPE.c)
 * Callees:
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x18000ABBC (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??2CSystemMemoryBitmap@@SAPEAX_K@Z @ 0x180135AF4 (--2CSystemMemoryBitmap@@SAPEAX_K@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x1801C4124 (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 */

__int64 __fastcall HrCreateDestBitmap(
        unsigned int a1,
        unsigned int a2,
        const struct PixelFormatInfo *a3,
        struct IBitmapDest **a4)
{
  CSystemMemoryBitmap *v8; // rax
  CSystemMemoryBitmap *v9; // rdi
  unsigned int v10; // ebx
  signed int v11; // eax
  signed int v12; // eax

  *a4 = 0LL;
  v8 = (CSystemMemoryBitmap *)CSystemMemoryBitmap::operator new();
  if ( v8 )
    v9 = CSystemMemoryBitmap::CSystemMemoryBitmap(v8);
  else
    v9 = 0LL;
  if ( v9 )
  {
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v9 + 8LL))(v9);
    v11 = CSystemMemoryBitmap::HrInit(v9, a1, a2, a3, 1);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x7Du);
    }
    else
    {
      v12 = (**(__int64 (__fastcall ***)(CSystemMemoryBitmap *, GUID *, struct IBitmapDest **))v9)(
              v9,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              a4);
      v10 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x80u);
    }
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x77u);
  }
  return v10;
}
