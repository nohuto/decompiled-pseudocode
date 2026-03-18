/*
 * XREFs of ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x18017B5B0
 * Callers:
 *     ?GetBrushRealizationInternal@CLinearGradientLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18017B700 (-GetBrushRealizationInternal@CLinearGradientLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0DC@@@PEAM@Z @ 0x18007D3BC (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0DC@@@PEAM@Z.c)
 *     ?AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z @ 0x1801B2C60 (-AddColorWithPosition@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@M@Z.c)
 */

__int64 __fastcall CGradientLegacyMilBrush::GetGradientColorData<CLinearGradientLegacyMilBrush>(
        __int64 a1,
        CGradientColorData *a2)
{
  __int64 v2; // rbp
  int Opacity; // eax
  unsigned int v6; // ebx
  unsigned __int128 v7; // rax
  int v8; // esi
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rcx
  float *v12; // rax
  float v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  *((_DWORD *)a2 + 6) = 0;
  *((_DWORD *)a2 + 14) = 0;
  Opacity = CLegacyMilBrush::GetOpacity(*(double *)(a1 + 88), *(_QWORD *)(a1 + 96), &v14);
  v6 = Opacity;
  if ( Opacity < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Opacity, 0xC9u);
  }
  else
  {
    v7 = *(unsigned int *)(a1 + 132) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
    v8 = 0;
    v9 = *((_QWORD *)&v7 + 1) >> 4;
    if ( (unsigned int)(*((_QWORD *)&v7 + 1) >> 4) )
    {
      while ( 1 )
      {
        v10 = CGradientColorData::AddColorWithPosition(a2, (const struct _D3DCOLORVALUE *)(v2 + 8), *(double *)v2);
        v6 = v10;
        if ( v10 < 0 )
          break;
        v2 += 24LL;
        if ( ++v8 >= (unsigned int)v9 )
          goto LABEL_5;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xD8u);
    }
    else
    {
LABEL_5:
      if ( *((_DWORD *)a2 + 6) )
      {
        v11 = *((unsigned int *)a2 + 6);
        v12 = (float *)(*(_QWORD *)a2 + 12LL);
        do
        {
          *v12 = v14 * *v12;
          v12 += 4;
          --v11;
        }
        while ( v11 );
      }
      return 0;
    }
  }
  return v6;
}
