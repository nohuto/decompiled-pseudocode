/*
 * XREFs of ?SetProperty@CColorMatrixEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801B1910
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorMatrixEffect::SetProperty(__int64 *a1, int a2, int a3, float *a4)
{
  float v5; // xmm1_4
  unsigned int v6; // ebx
  float *v7; // rcx
  __int64 v8; // rax

  if ( a3 == 18
    && (v5 = *a4, (unsigned int)(a2 - 3) <= 0x13)
    && (v6 = 0, (v7 = (float *)a1 + (unsigned int)(a2 - 3) + 44) != 0LL) )
  {
    if ( *v7 != v5 )
    {
      v8 = *a1;
      *v7 = v5;
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v8 + 64))(a1, 0LL, 0LL);
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x34u);
  }
  return v6;
}
