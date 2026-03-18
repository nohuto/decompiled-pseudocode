/*
 * XREFs of ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x18017A298
 * Callers:
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x18017A06C (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x18008180C (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??2CSystemMemoryBitmap@@SAPEAX_K@Z @ 0x180158404 (--2CSystemMemoryBitmap@@SAPEAX_K@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x1802009A0 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 */

__int64 __fastcall HrCreateDestBitmapCopy(struct IBitmapSource *a1, struct WICRect *a2, struct IBitmapDest **a3)
{
  CSystemMemoryBitmap *v5; // rax
  CSystemMemoryBitmap *v6; // rbx
  unsigned int v7; // edi
  struct WICRect *v8; // r8
  bool v9; // r9
  int v10; // eax
  int v11; // eax

  *a3 = 0LL;
  v5 = (CSystemMemoryBitmap *)CSystemMemoryBitmap::operator new();
  if ( v5 )
    v6 = CSystemMemoryBitmap::CSystemMemoryBitmap(v5);
  else
    v6 = 0LL;
  if ( v6 )
  {
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v6 + 8LL))(v6);
    v10 = CSystemMemoryBitmap::HrInit(v6, a1, v8, v9);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x5Eu);
    }
    else
    {
      v11 = (**(__int64 (__fastcall ***)(CSystemMemoryBitmap *, GUID *, struct IBitmapDest **))v6)(
              v6,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              a3);
      v7 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x61u);
    }
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x59u);
  }
  return v7;
}
