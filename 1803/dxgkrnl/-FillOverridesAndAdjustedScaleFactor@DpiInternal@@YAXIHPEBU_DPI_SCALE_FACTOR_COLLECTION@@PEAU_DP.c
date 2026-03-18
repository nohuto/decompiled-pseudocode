/*
 * XREFs of ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0008960
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0008844 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00C5A7C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C00089E4 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?CalculateMinMaxOverride@DpiInternal@@YAXKUtagSIZE@@PEAJ1QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C000B334 (-CalculateMinMaxOverride@DpiInternal@@YAXKUtagSIZE@@PEAJ1QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 */

void __fastcall DpiInternal::FillOverridesAndAdjustedScaleFactor(
        DpiInternal *this,
        __int64 a2,
        int *a3,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a4)
{
  int v6; // edi
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // [rsp+20h] [rbp-18h]
  const struct _DPI_SCALE_FACTOR_COLLECTION *v11; // [rsp+28h] [rbp-10h]

  v6 = (int)this;
  if ( !*((_DWORD *)a4 + 3) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 512LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !*((_DWORD *)a4 + 8) || !*((_DWORD *)a4 + 9) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 513LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DpiInternal::CalculateMinMaxOverride(
    (DpiInternal *)*((unsigned int *)a4 + 3),
    *((_QWORD *)a4 + 4),
    (struct tagSIZE)((char *)a4 + 80),
    (int *)a4 + 22,
    a3,
    v11);
  if ( v6 )
  {
    *((_DWORD *)a4 + 21) = 1234568;
    v7 = (100 * v6 + 48) / 0x60u;
  }
  else
  {
    v7 = DpiInternal::AdjustDesktopScaleFactorForOverride(
           (DpiInternal *)*((unsigned int *)a4 + 3),
           *((_QWORD *)a4 + 4),
           (struct tagSIZE)a3,
           (const struct _DPI_SCALE_FACTOR_COLLECTION *)*((unsigned int *)a4 + 21),
           v10);
  }
  *((_DWORD *)a4 + 2) = v7;
}
