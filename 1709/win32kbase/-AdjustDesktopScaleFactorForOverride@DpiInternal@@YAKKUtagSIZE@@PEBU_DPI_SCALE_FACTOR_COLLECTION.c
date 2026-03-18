/*
 * XREFs of ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C00F526C
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0099FD8 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00F8F9C (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 */

unsigned int __fastcall DpiInternal::AdjustDesktopScaleFactorForOverride(
        DpiInternal *this,
        __int64 a2,
        struct tagSIZE a3,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a4)
{
  int v4; // r14d
  int v6; // ebx
  int v7; // ebp
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v13; // [rsp+20h] [rbp-8h]

  v4 = (int)a4;
  v6 = a2;
  v7 = (int)this;
  if ( (unsigned int)((_DWORD)a4 + 11) > 0x16 )
  {
    v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *(_DWORD *)(*(_QWORD *)&a3 + 8LL);
  v10 = 0;
  if ( v9 )
  {
    this = *(DpiInternal **)(*(_QWORD *)&a3 + 16LL);
    do
    {
      if ( v7 == *(_DWORD *)this )
        break;
      ++v10;
      this = (DpiInternal *)((char *)this + 4);
    }
    while ( v10 < v9 );
  }
  if ( v10 >= v9 )
  {
    v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  return DpiInternal::SatisfyMinResolutionBarForScaleIdx((DpiInternal *)v10, v4, v6, a3, v13);
}
