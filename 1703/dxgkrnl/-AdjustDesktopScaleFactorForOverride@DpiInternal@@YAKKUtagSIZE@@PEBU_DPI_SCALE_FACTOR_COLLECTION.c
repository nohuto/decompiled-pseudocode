/*
 * XREFs of ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C0003D70
 * Callers:
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0003CEC (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C003C1A4 (-UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AC900 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall DpiInternal::AdjustDesktopScaleFactorForOverride(
        DpiInternal *this,
        __int64 a2,
        struct tagSIZE a3,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a4,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a5)
{
  int v5; // r14d
  int v7; // ebx
  int v8; // ebp
  unsigned int v9; // eax
  unsigned int v10; // edi
  __int64 v12; // rax
  __int64 v13; // rax

  v5 = (int)a4;
  v7 = a2;
  v8 = (int)this;
  if ( (unsigned int)((_DWORD)a4 + 11) > 0x16 )
  {
    v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(this, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = 311LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v9 = *(_DWORD *)(*(_QWORD *)&a3 + 8LL);
  v10 = 0;
  if ( v9 )
  {
    this = *(DpiInternal **)(*(_QWORD *)&a3 + 16LL);
    do
    {
      if ( v8 == *(_DWORD *)this )
        break;
      ++v10;
      this = (DpiInternal *)((char *)this + 4);
    }
    while ( v10 < v9 );
  }
  if ( v10 >= v9 )
  {
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(this, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = 294LL;
    WdLogEvent5_WdAssertion(v13);
  }
  return DpiInternal::SatisfyMinResolutionBarForScaleIdx((DpiInternal *)v10, v5, v7, a3, a5);
}
