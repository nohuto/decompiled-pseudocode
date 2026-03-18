/*
 * XREFs of ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800B1DD4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003B6EC (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18003E458 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E870 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041BF8 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800887C8 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?ContainsBackdropBrush@CWindowBackgroundTreatment@@QEAA_NPEA_N@Z @ 0x1800B1D9C (-ContainsBackdropBrush@CWindowBackgroundTreatment@@QEAA_NPEA_N@Z.c)
 *     ??$?4VCRenderTargetImageSource@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCRenderTargetImageSource@@@12@@Z @ 0x1800B24EC (--$-4VCRenderTargetImageSource@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPt.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowBackgroundTreatment::GenerateImageSourceForEffectInput(
        CWindowBackgroundTreatment *this,
        struct CDrawingContext *a2)
{
  FLOAT v2; // xmm0_4
  int v5; // edi
  __int64 v6; // rcx
  bool v7; // r15
  signed int BackdropImageFromRenderTarget; // eax
  signed int v9; // eax
  signed int v10; // eax
  signed int v11; // eax
  struct IRenderTarget *v12; // rbx
  signed int v13; // eax
  __int64 v14; // xmm1_8
  int v15; // eax
  __int128 v17; // xmm0
  __int64 v18; // xmm1_8
  signed int v19; // eax
  bool v20; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v21[7]; // [rsp+31h] [rbp-98h] BYREF
  struct CRenderTargetImageSource *v22; // [rsp+38h] [rbp-91h] BYREF
  struct IRenderTarget *v23; // [rsp+40h] [rbp-89h] BYREF
  struct D2D_SIZE_F v24; // [rsp+48h] [rbp-81h] BYREF
  struct D2D_RECT_F v25; // [rsp+50h] [rbp-79h] BYREF
  __int128 v26; // [rsp+60h] [rbp-69h] BYREF
  __int128 v27; // [rsp+70h] [rbp-59h] BYREF
  char v28; // [rsp+80h] [rbp-49h]
  __int64 v29; // [rsp+A0h] [rbp-29h]
  __int64 v30; // [rsp+A8h] [rbp-21h]
  __int64 v31; // [rsp+B0h] [rbp-19h]

  v2 = *((float *)this + 20) - *((float *)this + 18);
  v23 = 0LL;
  v22 = 0LL;
  v5 = 0;
  v21[0] = 0;
  v20 = 0;
  v24.width = v2;
  v24.height = *((float *)this + 21) - *((float *)this + 19);
  v26 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 8);
  v6 = *((_QWORD *)this + 7);
  *((_BYTE *)this + 285) = 0;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  *((_QWORD *)this + 36) = &v27;
  *((_BYTE *)this + 287) = 0;
  v27 = 0LL;
  v28 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 48LL))(v6, 16LL) )
  {
    v17 = *(_OWORD *)((char *)this + 72);
    *((_BYTE *)this + 285) = 1;
    v18 = *((_QWORD *)this + 11);
    *(_OWORD *)((char *)this + 120) = v17;
    *((_QWORD *)this + 17) = v18;
  }
  else
  {
    v7 = CWindowBackgroundTreatment::ContainsBackdropBrush((CSpriteVisualContent **)this, &v20);
    if ( v7
      && (v25 = *(struct D2D_RECT_F *)((char *)this + 72),
          BackdropImageFromRenderTarget = CDrawingContext::GetBackdropImageFromRenderTarget(
                                            a2,
                                            &v25,
                                            0,
                                            (struct EffectInput *)&v27),
          v5 = BackdropImageFromRenderTarget,
          BackdropImageFromRenderTarget < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, BackdropImageFromRenderTarget, 0x87u);
    }
    else
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v23);
      LODWORD(v25.right) = 31;
      *(_QWORD *)&v25.left = "DWM Window Background Treatment";
      v9 = CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&v25, &v24, 0, &v23);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x8Du);
      }
      else
      {
        v10 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
        v5 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x90u);
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, struct D2D_SIZE_F *, _BYTE *, __int128 *))(**((_QWORD **)this + 7) + 160LL))(
                  *((_QWORD *)this + 7),
                  a2,
                  &v24,
                  v21,
                  &v26);
          v5 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x93u);
          }
          else
          {
            v12 = v23;
            if ( g_LockAndReadWindowBackdropTexture
              && (v19 = (*(__int64 (__fastcall **)(struct IRenderTarget *, _QWORD, unsigned __int64))(*(_QWORD *)v23 + 184LL))(
                          v23,
                          *((_QWORD *)a2 + 48),
                          ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL)),
                  v5 = v19,
                  v19 < 0) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x99u);
            }
            else
            {
              (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v12 + 208LL))(
                v12,
                (unsigned int)DisplayId::None);
              Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v22);
              v13 = CRenderTargetImageSource::Create(v12, 0, &v22);
              v5 = v13;
              if ( v13 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x9Eu);
              }
              else
              {
                Microsoft::WRL::ComPtr<IImageSource>::operator=<CRenderTargetImageSource>((char *)this + 64, &v22);
                v14 = *((_QWORD *)this + 11);
                *((_BYTE *)this + 285) = 1;
                *(_OWORD *)((char *)this + 120) = *(_OWORD *)((char *)this + 72);
                *((_QWORD *)this + 17) = v14;
                if ( v7 && !*(_BYTE *)(*((_QWORD *)a2 + 816) + 32LL) )
                  *((_BYTE *)this + 287) = 1;
              }
            }
          }
          CDrawingContext::PopTransformInternal(a2, 1);
        }
        v15 = CDrawingContext::PopLayer(a2);
        if ( v15 < 0 && v5 >= 0 )
          v5 = v15;
      }
    }
  }
  if ( *((_BYTE *)this + 285) && v20 )
    *((_QWORD *)this + 37) = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
  *((_QWORD *)this + 36) = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v23);
  return (unsigned int)v5;
}
