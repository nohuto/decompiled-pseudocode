/*
 * XREFs of ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180011D9C
 * Callers:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180011A40 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180011E84 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z @ 0x180012868 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::GetCurrentSurface(CGradientBrush *this, __int64 a2, __int64 *a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v9; // rcx
  struct CD3DDeviceLevel1 *v10; // rbx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  int v15; // eax
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v17[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = 0;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v16);
  v9 = *(_QWORD *)(a2 + 384);
  v17[1] = 0LL;
  v17[0] = &v16;
  v10 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 160LL))(v9);
  if ( CGradientSource::FindExistingGradient(
         (CGradientBrush *)((char *)this + 72),
         v10,
         *((_BYTE *)this + 168) == 0,
         (const struct CGradientSource::RetrievalParams *)v17)
    || (v15 = CGradientBrush::Generate(this, v10, (const struct CGradientSource::RetrievalParams *)v17),
        v5 = v15,
        v15 >= 0) )
  {
    v11 = v16;
    v12 = *(_DWORD *)(v16 + 48);
    v13 = v16 + 16;
    *(_DWORD *)a4 = 0;
    v16 = 0LL;
    *(_DWORD *)(a4 + 8) = 1157627904;
    *(float *)(a4 + 4) = (float)v12;
    *a3 = v13 & -(__int64)(v11 != 0);
    *(float *)(a4 + 12) = (float)(v12 + 1);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x16Eu);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v16);
  return v5;
}
