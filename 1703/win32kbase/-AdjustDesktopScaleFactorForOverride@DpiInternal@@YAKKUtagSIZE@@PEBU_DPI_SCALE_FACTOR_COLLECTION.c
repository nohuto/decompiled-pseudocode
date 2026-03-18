/*
 * XREFs of ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C00F3FEC
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00912F0 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
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
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rax

  v5 = (int)a4;
  v7 = a2;
  v8 = (int)this;
  if ( (unsigned int)((_DWORD)a4 + 11) > 0x16 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *(_DWORD *)(*(_QWORD *)&a3 + 8LL);
  v11 = 0;
  if ( v10 )
  {
    this = *(DpiInternal **)(*(_QWORD *)&a3 + 16LL);
    do
    {
      if ( v8 == *(_DWORD *)this )
        break;
      ++v11;
      this = (DpiInternal *)((char *)this + 4);
    }
    while ( v11 < v10 );
  }
  if ( v11 >= v10 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  return DpiInternal::SatisfyMinResolutionBarForScaleIdx((DpiInternal *)v11, v5, v7, a3, a5);
}
