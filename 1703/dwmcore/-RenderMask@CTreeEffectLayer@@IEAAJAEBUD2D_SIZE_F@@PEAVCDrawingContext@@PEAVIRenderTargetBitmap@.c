/*
 * XREFs of ?RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x180158868
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800145D8 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x1800A79A4 (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderMask(
        CTreeEffectLayer *this,
        const struct D2D_SIZE_F *a2,
        struct CDrawingContext *a3,
        struct IRenderTargetBitmap *a4)
{
  float width; // xmm1_4
  float height; // xmm0_4
  __int64 v8; // rax
  __int64 (__fastcall *v9)(struct IRenderTargetBitmap *, __int64 *); // rax
  float v10; // xmm1_4
  float v11; // xmm0_4
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  float v16[4]; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v17[4]; // [rsp+58h] [rbp-18h] BYREF

  if ( !a4 )
    return 0LL;
  width = a2->width;
  height = a2->height;
  v8 = *(_QWORD *)a4;
  v17[0] = 0;
  v17[1] = 0;
  v16[0] = 0.0;
  v9 = *(__int64 (__fastcall **)(struct IRenderTargetBitmap *, __int64 *))(v8 + 184);
  v16[1] = 0.0;
  v15 = 0LL;
  *(float *)&v17[2] = width;
  v10 = width / *((float *)this + 66);
  *(float *)&v17[3] = height;
  v11 = height / *((float *)this + 67);
  v16[2] = v10;
  v16[3] = v11;
  v12 = v9(a4, &v15);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x307u);
  }
  else
  {
    v14 = CDrawingContext::DrawBitmapSource(a3, v15, (__int64)v17, v16, *((_DWORD *)a3 + 1674), 0, 0, 0LL);
    v13 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x30Bu);
  }
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v15);
  return v13;
}
