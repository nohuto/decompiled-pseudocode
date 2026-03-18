/*
 * XREFs of ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PEBUCContextState@@@Z @ 0x1801F7604
 * Callers:
 *     ?SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x1801F7074 (-SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800BE970 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@Z @ 0x1801E7104 (-SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@.c)
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAV3@@Z @ 0x180220E34 (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@.c)
 */

__int64 __fastcall CHwLinearGradientColorSource::SetBrushAndContext(
        CHwLinearGradientColorSource *this,
        struct CMILBrushGradient *a2,
        const struct CMILMatrix *a3,
        const struct CContextState *a4)
{
  _DWORD *v4; // rdi
  int v6; // eax
  int v7; // xmm1_4
  int v10; // eax
  unsigned int v11; // esi
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14; // xmm0_4
  int v15; // xmm1_4
  int v16; // r9d
  int v17; // edx
  __int128 v19; // [rsp+48h] [rbp-79h] BYREF
  _DWORD v20[4]; // [rsp+58h] [rbp-69h] BYREF
  __int128 v21; // [rsp+68h] [rbp-59h]
  __int128 v22; // [rsp+78h] [rbp-49h]
  __int128 v23; // [rsp+98h] [rbp-29h]
  _OWORD v24[4]; // [rsp+B8h] [rbp-9h] BYREF
  int v25; // [rsp+F8h] [rbp+37h]

  v25 = 0;
  v4 = (_DWORD *)((char *)this + 120);
  *((_QWORD *)this + 28) = a2;
  v6 = *((_DWORD *)a2 + 54);
  v7 = *((_DWORD *)a2 + 36);
  v19 = *(_OWORD *)((char *)a2 + 124);
  v20[0] = *((_DWORD *)a2 + 35);
  v20[1] = v7;
  v10 = CGradientTextureGenerator::CalculateTextureSizeAndMapping(&v19, (char *)&v19 + 8, v20, a3, v6);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x81u);
  }
  else
  {
    *((_DWORD *)this + 28) = *v4;
    CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v24, (CHwLinearGradientColorSource *)((char *)this + 236));
    if ( *((_BYTE *)a4 + 68) )
    {
      v12 = *(_OWORD *)((char *)this + 236);
      v22 = *(_OWORD *)((char *)this + 252);
      v13 = *(_OWORD *)((char *)this + 284);
    }
    else
    {
      v12 = v24[0];
      v22 = v24[1];
      v13 = v24[3];
    }
    *((_DWORD *)this + 12) = 0;
    *((_DWORD *)this + 14) = 0;
    *((_DWORD *)this + 16) = 0;
    v21 = v12;
    *((_DWORD *)this + 11) = v12;
    v23 = v13;
    v14 = v13;
    v15 = v22;
    *((_DWORD *)this + 15) = v14;
    *((_DWORD *)this + 13) = v15;
    CHwTexturedColorSource::SetFilterMode((__int64)this, 1, 0LL);
    *((_DWORD *)this + 8) = 3;
    *((_DWORD *)this + 24) = v17;
    *((_DWORD *)this + 25) = v17;
    *((_DWORD *)this + 7) = v16 != 0 ? 1 : 3;
  }
  return v11;
}
