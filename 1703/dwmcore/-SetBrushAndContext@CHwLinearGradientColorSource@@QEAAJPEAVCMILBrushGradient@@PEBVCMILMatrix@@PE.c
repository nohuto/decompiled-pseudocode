/*
 * XREFs of ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PEBUCContextState@@@Z @ 0x1801A31EC
 * Callers:
 *     ?SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x1801A2C94 (-SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAV3@@Z @ 0x1801C0D3C (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@.c)
 */

__int64 __fastcall CHwLinearGradientColorSource::SetBrushAndContext(
        CHwLinearGradientColorSource *this,
        struct CMILBrushGradient *a2,
        const struct CMILMatrix *a3,
        const struct CContextState *a4)
{
  _DWORD *v4; // rdi
  int v6; // eax
  int v9; // eax
  unsigned int v10; // esi
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rax
  int v14; // xmm0_4
  int v15; // xmm1_4
  int v16; // ecx
  __int128 v18; // [rsp+48h] [rbp-79h] BYREF
  __int64 v19; // [rsp+58h] [rbp-69h] BYREF
  __int128 v20; // [rsp+68h] [rbp-59h]
  __int128 v21; // [rsp+78h] [rbp-49h]
  __int128 v22; // [rsp+98h] [rbp-29h]
  _OWORD v23[4]; // [rsp+B8h] [rbp-9h] BYREF
  int v24; // [rsp+F8h] [rbp+37h]

  v24 = 0;
  v4 = (_DWORD *)((char *)this + 112);
  *((_QWORD *)this + 27) = a2;
  v6 = *((_DWORD *)a2 + 54);
  v18 = *(_OWORD *)((char *)a2 + 124);
  v19 = *(_QWORD *)((char *)a2 + 140);
  v9 = CGradientTextureGenerator::CalculateTextureSizeAndMapping(&v18, (char *)&v18 + 8, &v19, a3, v6);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x81u);
  }
  else
  {
    *((_DWORD *)this + 26) = *v4;
    CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v23, (CHwLinearGradientColorSource *)((char *)this + 228));
    if ( *((_BYTE *)a4 + 68) )
    {
      v11 = *(_OWORD *)((char *)this + 228);
      v21 = *(_OWORD *)((char *)this + 244);
      v12 = *(_OWORD *)((char *)this + 276);
    }
    else
    {
      v11 = v23[0];
      v21 = v23[1];
      v12 = v23[3];
    }
    *((_DWORD *)this + 12) = 0;
    *((_DWORD *)this + 14) = 0;
    *((_DWORD *)this + 16) = 0;
    v13 = *((_QWORD *)this + 27);
    v20 = v11;
    *((_DWORD *)this + 11) = v11;
    v22 = v12;
    v14 = v12;
    v15 = v21;
    *((_DWORD *)this + 15) = v14;
    *((_DWORD *)this + 13) = v15;
    v16 = *(_DWORD *)(v13 + 216);
    *((_DWORD *)this + 9) = 0;
    *((_DWORD *)this + 10) = 0;
    *((_DWORD *)this + 6) = 2;
    *((_DWORD *)this + 8) = 3;
    *((_DWORD *)this + 7) = v16 != 0 ? 1 : 3;
    *((_DWORD *)this + 24) = 1;
    *((_DWORD *)this + 25) = 1;
  }
  return v10;
}
