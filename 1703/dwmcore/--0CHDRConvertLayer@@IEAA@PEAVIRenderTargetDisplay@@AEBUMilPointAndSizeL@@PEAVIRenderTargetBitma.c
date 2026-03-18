/*
 * XREFs of ??0CHDRConvertLayer@@IEAA@PEAVIRenderTargetDisplay@@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180157B80
 * Callers:
 *     ?Create@CHDRConvertLayer@@SAJPEAVIRenderTargetDisplay@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z @ 0x180157D68 (-Create@CHDRConvertLayer@@SAJPEAVIRenderTargetDisplay@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180015244 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CHDRConvertLayer *__fastcall CHDRConvertLayer::CHDRConvertLayer(
        CHDRConvertLayer *this,
        struct IRenderTargetDisplay *a2,
        const struct MilPointAndSizeL *a3,
        struct IRenderTargetBitmap *a4)
{
  CExternalLayer::CExternalLayer(this, a3, a4);
  *((_QWORD *)this + 14) = a2;
  *(_QWORD *)this = &CHDRConvertLayer::`vftable';
  if ( a2 )
    (*(void (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 15) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)a4 + 8LL))(a4);
  return this;
}
