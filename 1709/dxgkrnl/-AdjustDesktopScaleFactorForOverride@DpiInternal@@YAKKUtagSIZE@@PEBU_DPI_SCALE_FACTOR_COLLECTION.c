/*
 * XREFs of ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C000C3B4
 * Callers:
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C000C330 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C002C4D4 (-UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00E2B88 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C000C434 (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 */

unsigned int __fastcall DpiInternal::AdjustDesktopScaleFactorForOverride(
        DpiInternal *this,
        int a2,
        struct tagSIZE a3,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a4)
{
  int v4; // r14d
  int v7; // ebp
  unsigned int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // rax
  __int64 v12; // rax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v13; // [rsp+20h] [rbp-8h]

  v4 = (int)a4;
  v7 = (int)this;
  if ( (unsigned int)((_DWORD)a4 + 11) > 0x16 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 311LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v8 = *(_DWORD *)(*(_QWORD *)&a3 + 8LL);
  v9 = 0;
  if ( v8 )
  {
    this = *(DpiInternal **)(*(_QWORD *)&a3 + 16LL);
    do
    {
      if ( v7 == *(_DWORD *)this )
        break;
      ++v9;
      this = (DpiInternal *)((char *)this + 4);
    }
    while ( v9 < v8 );
  }
  if ( v9 >= v8 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 294LL;
    WdLogEvent5_WdAssertion(v12);
  }
  return DpiInternal::SatisfyMinResolutionBarForScaleIdx((DpiInternal *)v9, v4, a2, a3, v13);
}
