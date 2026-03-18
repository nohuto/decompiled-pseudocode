/*
 * XREFs of ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00D1788
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00D16D8 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C00CBACC (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 */

void __fastcall DpiInternal::FillOverridesAndAdjustedScaleFactor(
        DpiInternal *this,
        __int64 a2,
        struct tagSIZE a3,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a4)
{
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rax

  v6 = (int)this;
  if ( !*((_DWORD *)a4 + 3) )
  {
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*((_DWORD *)a4 + 8) || !*((_DWORD *)a4 + 9) )
  {
    v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( v6 )
  {
    *((_DWORD *)a4 + 21) = 1234569;
    v9 = (100 * v6 + 48) / 0x60u;
  }
  else
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
    v9 = DpiInternal::AdjustDesktopScaleFactorForOverride(
           (DpiInternal *)*((unsigned int *)a4 + 3),
           *((_QWORD *)a4 + 4),
           a3,
           (const struct _DPI_SCALE_FACTOR_COLLECTION *)*((unsigned int *)a4 + 21));
  }
  *((_DWORD *)a4 + 2) = v9;
}
