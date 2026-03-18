/*
 * XREFs of ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PEBUCContextState@@@Z @ 0x1801BCAD8
 * Callers:
 *     ?SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x1801BC564 (-SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18007B590 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAV3@@Z @ 0x1801D9990 (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@.c)
 */

__int64 __fastcall CHwLinearGradientColorSource::SetBrushAndContext(
        CHwLinearGradientColorSource *this,
        struct CMILBrushGradient *a2,
        const struct CMILMatrix *a3,
        const struct CContextState *a4)
{
  _DWORD *v4; // r14
  int v6; // eax
  int v7; // xmm1_4
  signed int v10; // eax
  unsigned int v11; // edi
  __int128 *v12; // r11
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rax
  int v16; // xmm0_4
  int v17; // xmm1_4
  int v18; // ecx
  __int128 v20; // [rsp+48h] [rbp-79h] BYREF
  _DWORD v21[4]; // [rsp+58h] [rbp-69h] BYREF
  __int128 v22; // [rsp+68h] [rbp-59h]
  __int128 v23; // [rsp+78h] [rbp-49h]
  __int128 v24; // [rsp+98h] [rbp-29h]
  _OWORD v25[4]; // [rsp+B8h] [rbp-9h] BYREF
  int v26; // [rsp+F8h] [rbp+37h]

  v26 = 0;
  v4 = (_DWORD *)((char *)this + 120);
  *((_QWORD *)this + 28) = a2;
  v6 = *((_DWORD *)a2 + 54);
  v7 = *((_DWORD *)a2 + 36);
  v20 = *(_OWORD *)((char *)a2 + 124);
  v21[0] = *((_DWORD *)a2 + 35);
  v21[1] = v7;
  v10 = CGradientTextureGenerator::CalculateTextureSizeAndMapping(&v20, (char *)&v20 + 8, v21, a3, v6);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x81u);
  }
  else
  {
    *((_DWORD *)this + 28) = *v4;
    CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v25, (CHwLinearGradientColorSource *)((char *)this + 236));
    if ( *((_BYTE *)a4 + 68) )
    {
      v13 = *v12;
      v23 = v12[1];
      v14 = v12[3];
    }
    else
    {
      v13 = v25[0];
      v23 = v25[1];
      v14 = v25[3];
    }
    *((_DWORD *)this + 12) = 0;
    *((_DWORD *)this + 14) = 0;
    *((_DWORD *)this + 16) = 0;
    v15 = *((_QWORD *)this + 28);
    v22 = v13;
    *((_DWORD *)this + 11) = v13;
    v24 = v14;
    v16 = v14;
    v17 = v23;
    *((_DWORD *)this + 15) = v16;
    *((_DWORD *)this + 13) = v17;
    v18 = *(_DWORD *)(v15 + 216);
    *((_DWORD *)this + 9) = 0;
    *((_DWORD *)this + 10) = 0;
    *((_DWORD *)this + 6) = 2;
    *((_DWORD *)this + 8) = 3;
    *((_DWORD *)this + 7) = v18 != 0 ? 1 : 3;
    *((_DWORD *)this + 24) = 1;
    *((_DWORD *)this + 25) = 1;
  }
  return v11;
}
