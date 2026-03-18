/*
 * XREFs of ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x18015093C
 * Callers:
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x180150710 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x18000ABBC (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??2CSystemMemoryBitmap@@SAPEAX_K@Z @ 0x180135AF4 (--2CSystemMemoryBitmap@@SAPEAX_K@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x1801C4270 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 */

__int64 __fastcall HrCreateDestBitmapCopy(struct IBitmapSource *a1, struct WICRect *a2, struct IBitmapDest **a3)
{
  CSystemMemoryBitmap *v5; // rax
  CSystemMemoryBitmap *v6; // rbx
  unsigned int v7; // edi
  struct WICRect *v8; // r8
  bool v9; // r9
  signed int v10; // eax
  signed int v11; // eax

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
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x5Eu);
    }
    else
    {
      v11 = (**(__int64 (__fastcall ***)(CSystemMemoryBitmap *, GUID *, struct IBitmapDest **))v6)(
              v6,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              a3);
      v7 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x61u);
    }
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x59u);
  }
  return v7;
}
