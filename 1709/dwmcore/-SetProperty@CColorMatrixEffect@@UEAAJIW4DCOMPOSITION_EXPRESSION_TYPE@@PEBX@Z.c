/*
 * XREFs of ?SetProperty@CColorMatrixEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180180740
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorMatrixEffect::SetProperty(__int64 *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v6; // xmm1_4
  float *v7; // rcx
  __int64 v8; // rax

  v4 = 0;
  if ( a3 == 18 && (v6 = *a4, (unsigned int)(a2 - 3) <= 0x13) && (v7 = (float *)a1 + (unsigned int)(a2 - 3) + 44) != 0LL )
  {
    if ( *v7 != v6 )
    {
      v8 = *a1;
      *v7 = v6;
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v8 + 64))(a1, 0LL, 0LL);
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x34u);
  }
  return v4;
}
