/*
 * XREFs of ?Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180011E84
 * Callers:
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180011D9C (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV-$TMilRect.c)
 *     ?GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x18018FE88 (-GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGr.c)
 * Callees:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N3W4D2D1_EXTEND_MODE@@@Z @ 0x18001269C (-Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GR.c)
 *     ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x1800135F4 (-ToD2D1ExtendMode@ExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGradientBrush::Generate(
        CGradientBrush *this,
        struct CD3DDeviceLevel1 *a2,
        const struct CGradientSource::RetrievalParams *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // eax
  char v9; // dl
  char v10; // r9
  struct CD3DDeviceLevel1 *v11; // r10
  int v12; // eax
  unsigned int v13; // edi

  v4 = *((_QWORD *)this + 17);
  v7 = *((_QWORD *)this + 18) - v4;
  *((_BYTE *)this + 169) = 1;
  v6 = v7 / 20;
  v5 = *((_QWORD *)this + 18);
  LOBYTE(v6) = 1;
  LOBYTE(v7) = *((_DWORD *)this + 26) == 4;
  if ( v4 != v5 )
  {
    while ( *(float *)(v4 + 16) >= 1.0 )
    {
      v4 += 20LL;
      if ( v4 == v5 )
      {
        LOBYTE(v6) = 1;
        goto LABEL_6;
      }
    }
    *((_BYTE *)this + 169) = 0;
    LOBYTE(v6) = 0;
  }
LABEL_6:
  LOBYTE(v4) = *((_BYTE *)this + 96);
  v8 = ExtendMode::ToD2D1ExtendMode(v4, v6, a3, v7);
  v12 = CGradientSource::Generate((CGradientBrush *)((char *)this + 72), v11, v10, v9, v8);
  v13 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x155u);
  else
    *((_BYTE *)this + 168) = 1;
  return v13;
}
