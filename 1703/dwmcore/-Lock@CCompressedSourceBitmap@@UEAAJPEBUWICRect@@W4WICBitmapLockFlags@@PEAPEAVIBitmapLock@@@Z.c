/*
 * XREFs of ?Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801AAD60
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1801AA958 (-EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 */

__int64 __fastcall CCompressedSourceBitmap::Lock(
        CCompressedSourceBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        struct IBitmapLock **a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v8 = CCompressedSourceBitmap::EnsureUncompressedBitmap((CCompressedSourceBitmap *)((char *)this - 24));
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB7u);
  }
  else
  {
    v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 28))(
            *((_QWORD *)this + 28),
            &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
            &v13);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xBAu);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64, const struct WICRect *, _QWORD, struct IBitmapLock **))(*(_QWORD *)v13 + 24LL))(
              v13,
              a2,
              a3,
              a4);
      v9 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xBCu);
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>(v13);
  return v9;
}
