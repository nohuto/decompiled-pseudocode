/*
 * XREFs of ?Create@CHDRConvertLayer@@SAJPEAVIRenderTargetDisplay@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z @ 0x180157D68
 * Callers:
 *     ?PushHDRConversionLayer@CDrawingContext@@AEAAJXZ @ 0x18014D534 (-PushHDRConversionLayer@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CHDRConvertLayer@@IEAA@PEAVIRenderTargetDisplay@@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180157B80 (--0CHDRConvertLayer@@IEAA@PEAVIRenderTargetDisplay@@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitma.c)
 */

__int64 __fastcall CHDRConvertLayer::Create(
        struct IRenderTargetDisplay *a1,
        const struct MilPointAndSizeL *a2,
        struct CHDRConvertLayer **a3)
{
  __int64 v3; // rax
  int v7; // eax
  unsigned int v8; // ebx
  CHDRConvertLayer *v9; // rax
  struct IRenderTargetBitmap *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a1;
  v11 = 0LL;
  *a3 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct IRenderTargetDisplay *, struct IRenderTargetBitmap **))(v3 + 480))(a1, &v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x14u);
  }
  else
  {
    v9 = (CHDRConvertLayer *)operator new(0x80uLL);
    if ( v9 )
      v9 = CHDRConvertLayer::CHDRConvertLayer(v9, a1, a2, v11);
    *a3 = v9;
    if ( !v9 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x19u);
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v11);
  return v8;
}
