/*
 * XREFs of ?RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x18014C128
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800809DC (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@@Z @ 0x18003DA1C (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderMask(
        CTreeEffectLayer *this,
        const struct D2D_SIZE_F *a2,
        struct CDrawingContext *a3,
        struct IRenderTargetBitmap *a4)
{
  float width; // xmm1_4
  float height; // xmm0_4
  __int64 v11; // rax
  __int64 (__fastcall *v12)(struct IRenderTargetBitmap *, __int64 *); // rax
  float v13; // xmm1_4
  float v14; // xmm0_4
  signed int v15; // eax
  unsigned int v16; // ebx
  signed int v17; // eax
  __int64 v18; // [rsp+40h] [rbp-30h] BYREF
  float v19[4]; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v20[4]; // [rsp+58h] [rbp-18h] BYREF

  if ( !a4 )
    return 0LL;
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *, _QWORD, unsigned __int64))(*(_QWORD *)a4 + 184LL))(
      a4,
      *((_QWORD *)a3 + 48),
      ((unsigned __int64)a3 + 8) & -(__int64)(a3 != 0LL));
  width = a2->width;
  height = a2->height;
  v11 = *(_QWORD *)a4;
  v20[0] = 0;
  v20[1] = 0;
  v19[0] = 0.0;
  v12 = *(__int64 (__fastcall **)(struct IRenderTargetBitmap *, __int64 *))(v11 + 192);
  v19[1] = 0.0;
  v18 = 0LL;
  *(float *)&v20[2] = width;
  v13 = width / *((float *)this + 68);
  *(float *)&v20[3] = height;
  v14 = height / *((float *)this + 69);
  v19[2] = v13;
  v19[3] = v14;
  v15 = v12(a4, &v18);
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x340u);
  }
  else
  {
    v17 = CDrawingContext::DrawBitmapSource(a3, v18, (__int64)v20, v19, 0, 0);
    v16 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x347u);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  return v16;
}
