/*
 * XREFs of ?SetBoundingRect@CoverWindowAcc@@UEAAXAEBUCRect@Geometry@@@Z @ 0x1802E7D40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CoverWindowAcc::SetBoundingRect(CoverWindowAcc *this, const struct Geometry::CRect *a2)
{
  unsigned int v2; // eax
  __m128i v4; // xmm1
  double v5; // xmm0_8
  __m128i v6; // xmm0
  int v7; // eax
  unsigned int v8; // eax
  __m128i v9; // xmm0
  int v10; // eax
  HRESULT inited; // eax
  __int64 v12; // rdx
  VARIANT pvarg; // [rsp+20h] [rbp-69h] BYREF
  VARIANT pvar; // [rsp+38h] [rbp-51h] BYREF
  VARIANT newValue; // [rsp+50h] [rbp-39h] BYREF
  VARIANT oldValue; // [rsp+70h] [rbp-19h] BYREF
  DOUBLE prgn[4]; // [rsp+90h] [rbp+7h] BYREF
  DOUBLE v18[4]; // [rsp+B0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v2 = *((_DWORD *)this + 22) - *((_DWORD *)this + 20);
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 21));
  v5 = (double)*((int *)this + 20);
  pvar.vt = 0;
  pvarg.vt = 0;
  prgn[0] = v5;
  v6 = _mm_cvtsi32_si128(v2);
  v7 = *((_DWORD *)this + 23) - *((_DWORD *)this + 21);
  *(_QWORD *)&prgn[1] = *(_OWORD *)&_mm_cvtepi32_pd(v4);
  *(_QWORD *)&prgn[2] = *(_OWORD *)&_mm_cvtepi32_pd(v6);
  prgn[3] = (double)v7;
  *((_OWORD *)this + 5) = *(_OWORD *)a2;
  v8 = *((_DWORD *)this + 22) - *((_DWORD *)this + 20);
  *(double *)v4.m128i_i64 = (double)*((int *)this + 20);
  v18[1] = (double)*((int *)this + 21);
  v9 = _mm_cvtsi32_si128(v8);
  v10 = *((_DWORD *)this + 23) - *((_DWORD *)this + 21);
  v18[0] = *(DOUBLE *)v4.m128i_i64;
  *(_QWORD *)&v18[2] = *(_OWORD *)&_mm_cvtepi32_pd(v9);
  v18[3] = (double)v10;
  inited = InitVariantFromDoubleArray(prgn, 4u, &pvar);
  if ( inited >= 0 )
  {
    inited = InitVariantFromDoubleArray(v18, 4u, &pvarg);
    if ( inited >= 0 )
    {
      newValue = pvarg;
      oldValue = pvar;
      UiaRaiseAutomationPropertyChangedEvent((IRawElementProviderSimple *)this - 3, 30001, &oldValue, &newValue);
      goto LABEL_7;
    }
    v12 = 328LL;
  }
  else
  {
    v12 = 327LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    v12,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
    (const char *)(unsigned int)inited);
LABEL_7:
  VariantClear(&pvarg);
  VariantClear(&pvar);
}
