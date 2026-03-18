/*
 * XREFs of ??$IsConstantOpaqueInternal@$$CBVCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KA_NPEBVCLinearGradientLegacyMilBrush@@@Z @ 0x18014588C
 * Callers:
 *     ?IsConstantOpaque@CLinearGradientLegacyMilBrush@@UEBA_NXZ @ 0x180147010 (-IsConstantOpaque@CLinearGradientLegacyMilBrush@@UEBA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CK@@@PEAM@Z @ 0x18007D6CC (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CK@@@PEAM@Z.c)
 */

char __fastcall CGradientLegacyMilBrush::IsConstantOpaqueInternal<CLinearGradientLegacyMilBrush const>(__int64 a1)
{
  __int64 v2; // rsi
  char v3; // bl
  signed int Opacity; // eax
  int v5; // ecx
  unsigned int v6; // edx
  float *i; // rax
  float v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  v3 = 0;
  Opacity = CLegacyMilBrush::GetOpacity(*(double *)(a1 + 88), *(_QWORD *)(a1 + 96), &v9);
  if ( Opacity < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Opacity, 0x84u);
  }
  else if ( v9 >= 1.0 )
  {
    v5 = 0;
    v6 = *(_DWORD *)(a1 + 132) / 0x18u;
    if ( v6 )
    {
      for ( i = (float *)(v2 + 20); *i >= 1.0; i += 6 )
      {
        if ( ++v5 >= v6 )
          return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  return v3;
}
