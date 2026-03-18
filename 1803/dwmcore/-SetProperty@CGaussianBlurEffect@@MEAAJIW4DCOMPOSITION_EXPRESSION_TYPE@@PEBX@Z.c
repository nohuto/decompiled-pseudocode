/*
 * XREFs of ?SetProperty@CGaussianBlurEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801B1DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGaussianBlurEffect::SetProperty(float *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float *v5; // rax
  float v6; // xmm1_4

  if ( a3 != 18 || (v4 = 0, a2) || (v5 = a1 + 44, v6 = fmaxf(0.0, *a4), a1 == (float *)-176LL) )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x4Eu);
  }
  else if ( *v5 != v6 )
  {
    *v5 = v6;
    (*(void (__fastcall **)(float *, _QWORD, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, 0LL, 0LL);
  }
  return v4;
}
