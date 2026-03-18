/*
 * XREFs of ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180178460
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18000D284 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18000E3F0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000EB44 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?ContainsBackdropBrush@CWindowBackgroundTreatment@@QEAA_NPEA_N@Z @ 0x1800104DC (-ContainsBackdropBrush@CWindowBackgroundTreatment@@QEAA_NPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4938 (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800D4F00 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??$?4VCRenderTargetImageSource@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCRenderTargetImageSource@@@12@@Z @ 0x1801708D0 (--$-4VCRenderTargetImageSource@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPt.c)
 */

__int64 __fastcall CWindowBackgroundTreatment::GenerateImageSourceForEffectInput(
        CWindowBackgroundTreatment *this,
        struct CDrawingContext *a2)
{
  int v2; // edi
  FLOAT v3; // xmm0_4
  __int64 v6; // rcx
  int BackdropImageFromRenderTarget; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  struct IRenderTarget *v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  bool v16; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v17[7]; // [rsp+31h] [rbp-4Fh] BYREF
  struct CRenderTargetImageSource *v18; // [rsp+38h] [rbp-48h] BYREF
  struct IRenderTarget *v19; // [rsp+40h] [rbp-40h] BYREF
  struct D2D_SIZE_F v20; // [rsp+48h] [rbp-38h] BYREF
  struct D2D_RECT_F v21; // [rsp+50h] [rbp-30h] BYREF
  __int128 v22; // [rsp+60h] [rbp-20h] BYREF

  v2 = 0;
  v3 = *((float *)this + 20) - *((float *)this + 18);
  v19 = 0LL;
  v18 = 0LL;
  v17[0] = 0;
  v16 = 0;
  v20.width = v3;
  v20.height = *((float *)this + 21) - *((float *)this + 19);
  v22 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)this + 8);
  v6 = *((_QWORD *)this + 7);
  *(_WORD *)((char *)this + 277) = 256;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 48LL))(v6, 82LL) )
  {
    *((_BYTE *)this + 277) = 1;
  }
  else if ( CWindowBackgroundTreatment::ContainsBackdropBrush((CSpriteVisualContent **)this, &v16)
         && (v21 = *(struct D2D_RECT_F *)((char *)this + 72),
             memset_0((char *)this + 280, 0, 0x58uLL),
             BackdropImageFromRenderTarget = CDrawingContext::GetBackdropImageFromRenderTarget(
                                               a2,
                                               &v21,
                                               0,
                                               (CWindowBackgroundTreatment *)((char *)this + 280)),
             v2 = BackdropImageFromRenderTarget,
             BackdropImageFromRenderTarget < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BackdropImageFromRenderTarget, 0x81u);
  }
  else
  {
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v19);
    LODWORD(v21.right) = 31;
    *(_QWORD *)&v21.left = "DWM Window Background Treatment";
    v8 = CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&v21, &v20, 0, &v19);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x87u);
    }
    else
    {
      v9 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x8Au);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, struct D2D_SIZE_F *, _BYTE *, __int128 *))(**((_QWORD **)this + 7) + 144LL))(
                *((_QWORD *)this + 7),
                a2,
                &v20,
                v17,
                &v22);
        v2 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x8Du);
        }
        else
        {
          v11 = v19;
          if ( g_LockAndReadWindowBackdropTexture
            && (v12 = (*(__int64 (__fastcall **)(struct IRenderTarget *, _QWORD, unsigned __int64))(*(_QWORD *)v19
                                                                                                  + 176LL))(
                        v19,
                        *((_QWORD *)a2 + 49),
                        ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL)),
                v2 = v12,
                v12 < 0) )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x93u);
          }
          else
          {
            Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v18);
            v13 = CRenderTargetImageSource::Create(v11, 1, &v18);
            v2 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x96u);
            }
            else
            {
              Microsoft::WRL::ComPtr<IImageSource>::operator=<CRenderTargetImageSource>(
                (__int64 *)this + 8,
                (__int64 *)&v18);
              *((_BYTE *)this + 277) = 1;
            }
          }
        }
        CDrawingContext::PopTransformInternal(a2, 1);
      }
      v14 = CDrawingContext::PopLayer(a2);
      if ( v14 < 0 && v2 >= 0 )
        v2 = v14;
    }
  }
  if ( *((_BYTE *)this + 277) && v16 )
    *((_QWORD *)this + 46) = *(_QWORD *)(*((_QWORD *)this + 2) + 520LL);
  *((_BYTE *)this + 278) = 0;
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v19);
  return (unsigned int)v2;
}
