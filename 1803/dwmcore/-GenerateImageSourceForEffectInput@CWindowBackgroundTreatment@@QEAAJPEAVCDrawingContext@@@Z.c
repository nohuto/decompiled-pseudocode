/*
 * XREFs of ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000BF08
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetConsistentIRenderTargetNoRef@CWindowBackgroundTreatment@@AEBAPEAVIRenderTarget@@PEBV2@@Z @ 0x18000BB28 (-GetConsistentIRenderTargetNoRef@CWindowBackgroundTreatment@@AEBAPEAVIRenderTarget@@PEBV2@@Z.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x18000BDF4 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 *     ??$_Try_emplace@AEBQEAVIRenderTarget@@$$V@?$unordered_map@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@6@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBQEAVIRenderTarget@@@Z @ 0x18000C410 (--$_Try_emplace@AEBQEAVIRenderTarget@@$$V@-$unordered_map@PEAVIRenderTarget@@V-$ComPtr@VCRenderT.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@_K@Z @ 0x18000C63C (-_End@-$_Hash@V-$_Umap_traits@PEAVIRenderTarget@@V-$ComPtr@VCRenderTargetImageSource@@@WRL@Micro.c)
 *     ??4?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000C87C (--4-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18006BC10 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18006CA58 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18006CEC8 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowBackgroundTreatment::GenerateImageSourceForEffectInput(
        struct D2D_RECT_F *this,
        struct CDrawingContext *a2)
{
  FLOAT v2; // xmm0_4
  int (__fastcall ***v4)(const struct IRenderTarget *, GUID *, CHwDisplayRenderTarget **); // rdx
  int v6; // esi
  char v7; // r12
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rcx
  __int64 v13; // rcx
  char top_high; // r12
  int BackdropImageFromRenderTarget; // eax
  int v16; // eax
  int v17; // eax
  struct IRenderTarget *v18; // rbx
  int v19; // eax
  int v20; // eax
  __int64 v21; // xmm1_8
  int v22; // eax
  __int64 v24; // xmm1_8
  int v25; // eax
  char right_low; // [rsp+30h] [rbp-A9h]
  _BYTE v27[7]; // [rsp+31h] [rbp-A8h] BYREF
  struct D2D_RECT_F v28; // [rsp+38h] [rbp-A1h] BYREF
  struct IRenderTarget *ConsistentIRenderTargetNoRef; // [rsp+48h] [rbp-91h] BYREF
  struct CRenderTargetImageSource *v30; // [rsp+50h] [rbp-89h] BYREF
  struct IRenderTarget *v31; // [rsp+58h] [rbp-81h] BYREF
  struct D2D_SIZE_F v32; // [rsp+60h] [rbp-79h] BYREF
  __int128 v33; // [rsp+68h] [rbp-71h] BYREF
  __int128 v34; // [rsp+80h] [rbp-59h] BYREF
  char v35; // [rsp+90h] [rbp-49h]
  __int64 v36; // [rsp+B0h] [rbp-29h]
  __int64 v37; // [rsp+B8h] [rbp-21h]

  v2 = this[9].right - this[9].left;
  v31 = 0LL;
  v4 = (int (__fastcall ***)(const struct IRenderTarget *, GUID *, CHwDisplayRenderTarget **))*((_QWORD *)a2 + 45);
  v6 = 0;
  v30 = 0LL;
  v27[0] = 0;
  v7 = 0;
  v32.width = v2;
  v32.height = this[9].bottom - this[9].top;
  v33 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  ConsistentIRenderTargetNoRef = CWindowBackgroundTreatment::GetConsistentIRenderTargetNoRef(
                                   (CWindowBackgroundTreatment *)this,
                                   v4);
  v8 = *(_QWORD *)&this[7].right & std::_Hash_bytes((const unsigned __int8 *)&ConsistentIRenderTargetNoRef, 8uLL);
  while ( 1 )
  {
    v9 = (_QWORD *)std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::_End(
                     &this[4].right,
                     &v28,
                     v8);
    if ( v10 == *v9 )
      break;
    if ( *(_QWORD *)(v10 + 16) == v11 )
      goto LABEL_4;
  }
  v10 = *(_QWORD *)&this[5].left;
LABEL_4:
  if ( v10 != *(_QWORD *)&this[5].left )
  {
    std::unordered_map<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>::_Try_emplace<IRenderTarget * const &,>(
      &this[4].right,
      &v28,
      &ConsistentIRenderTargetNoRef);
    if ( *(_QWORD *)(*(_QWORD *)&v28.left + 24LL) )
    {
      std::unordered_map<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>::_Try_emplace<IRenderTarget * const &,>(
        &this[4].right,
        &v28,
        &ConsistentIRenderTargetNoRef);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v28.left + 24LL) + 96LL) + 32LL))(
        *(_QWORD *)(*(_QWORD *)&v28.left + 24LL) + 96LL,
        (unsigned __int64)&this[3].right & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    }
    std::unordered_map<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>::_Try_emplace<IRenderTarget * const &,>(
      &this[4].right,
      &v28,
      &ConsistentIRenderTargetNoRef);
    Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(*(_QWORD *)&v28.left + 24LL);
  }
  BYTE2(this[22].top) = 0;
  v12 = *(_QWORD *)&this[8].right;
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v12 + 96) + 32LL))(
      v12 + 96,
      (unsigned __int64)&this[3].right & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&this[8].right);
  }
  v13 = *(_QWORD *)&this[4].left;
  v36 = 0LL;
  v37 = 0LL;
  v34 = 0LL;
  *(_QWORD *)&this[23].left = &v34;
  v35 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL))(v13, 18LL) )
  {
    v24 = *(_QWORD *)&this[10].left;
    this[12] = this[9];
    *(_QWORD *)&this[13].left = v24;
  }
  else
  {
    top_high = HIBYTE(this[22].top);
    right_low = LOBYTE(this[22].right);
    if ( top_high
      && (v28 = this[9],
          BackdropImageFromRenderTarget = CDrawingContext::GetBackdropImageFromRenderTarget(
                                            a2,
                                            &v28,
                                            0,
                                            (struct EffectInput *)&v34),
          v6 = BackdropImageFromRenderTarget,
          BackdropImageFromRenderTarget < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BackdropImageFromRenderTarget, 0xC5u);
    }
    else
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v31);
      LODWORD(v28.right) = 31;
      *(_QWORD *)&v28.left = "DWM Window Background Treatment";
      if ( (int)CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&v28, &v32, 0, &v31) >= 0 )
      {
        v16 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
        v6 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xD6u);
        }
        else
        {
          v17 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, struct D2D_SIZE_F *, _BYTE *, __int128 *))(**(_QWORD **)&this[4].left + 160LL))(
                  *(_QWORD *)&this[4].left,
                  a2,
                  &v32,
                  v27,
                  &v33);
          v6 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xD9u);
          }
          else
          {
            v18 = v31;
            if ( g_LockAndReadWindowBackdropTexture
              && (v25 = (*(__int64 (__fastcall **)(struct IRenderTarget *, _QWORD, unsigned __int64))(*(_QWORD *)v31 + 224LL))(
                          v31,
                          *((_QWORD *)a2 + 48),
                          ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL)),
                  v6 = v25,
                  v25 < 0) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xDFu);
            }
            else
            {
              (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v18 + 248LL))(
                v18,
                (unsigned int)DisplayId::None);
              Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v30);
              v19 = CRenderTargetImageSource::Create(v18, 0, &v30);
              v6 = v19;
              if ( v19 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xE4u);
              }
              else
              {
                v20 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)v30 + 12) + 24LL))(
                        (char *)v30 + 96,
                        (unsigned __int64)&this[3].right & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
                v6 = v20;
                if ( v20 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xE9u);
                }
                else
                {
                  if ( top_high )
                  {
                    std::unordered_map<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>::_Try_emplace<IRenderTarget * const &,>(
                      &this[4].right,
                      &v28,
                      &ConsistentIRenderTargetNoRef);
                    Microsoft::WRL::ComPtr<CRenderTargetImageSource>::operator=(*(_QWORD *)&v28.left + 24LL, &v30);
                    (*(void (__fastcall **)(struct IRenderTarget *, struct D2D_RECT_F *))(*(_QWORD *)ConsistentIRenderTargetNoRef
                                                                                        + 208LL))(
                      ConsistentIRenderTargetNoRef,
                      this);
                  }
                  else
                  {
                    Microsoft::WRL::ComPtr<CRenderTargetImageSource>::operator=(&this[8].right, &v30);
                  }
                  v21 = *(_QWORD *)&this[10].left;
                  this[12] = this[9];
                  *(_QWORD *)&this[13].left = v21;
                  if ( top_high && !*(_BYTE *)(*((_QWORD *)a2 + 816) + 32LL) )
                    BYTE2(this[22].top) = 1;
                }
              }
            }
          }
          CDrawingContext::PopTransformInternal(a2, 1);
        }
        v22 = CDrawingContext::PopLayer(a2);
        if ( v22 < 0 && v6 >= 0 )
          v6 = v22;
      }
    }
    v7 = right_low;
  }
  if ( CWindowBackgroundTreatment::HasValidSource(
         (CWindowBackgroundTreatment *)this,
         (int (__fastcall ***)(const struct IRenderTarget *, GUID *, CHwDisplayRenderTarget **))ConsistentIRenderTargetNoRef)
    && v7 )
  {
    *(_QWORD *)&this[23].right = *(_QWORD *)(*(_QWORD *)&this[1].left + 496LL);
  }
  *(_QWORD *)&this[23].left = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)&v34 + 8);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v30);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v31);
  return (unsigned int)v6;
}
