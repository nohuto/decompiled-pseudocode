/*
 * XREFs of ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1C01E23F8
 * Callers:
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01E2898 (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01E2C88 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1C01E2BDC (-SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z.c)
 */

unsigned int __fastcall Win81::AdjustDesktopScaleFactorForOverride(
        Win81 *this,
        int a2,
        struct tagSIZE a3,
        const struct Win81::DPI_SCALE_FACTOR_COLLECTION *a4)
{
  LONG cx; // esi
  int v6; // ebp
  __int64 v7; // rax
  _DWORD *v8; // rax
  unsigned int i; // edi
  __int64 v10; // rax

  cx = a3.cx;
  v6 = (int)this;
  if ( (unsigned int)(a3.cx + 4) > 8 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 468LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = &unk_1C0057218;
  for ( i = 0; i < 5; ++i )
  {
    if ( v6 == *v8 )
      break;
    ++v8;
  }
  if ( i >= 5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 452LL;
    WdLogEvent5_WdAssertion(v10);
  }
  return Win81::SatisfyMinResolutionBarForScaleIdx((Win81 *)(i + cx), a2, a3, a4);
}
