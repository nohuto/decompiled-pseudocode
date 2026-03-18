/*
 * XREFs of ?SetD2DEffectProperties@CBrightnessEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x180180490
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrightnessEffect::SetD2DEffectProperties(CBrightnessEffect *this, struct ID2D1Effect *a2)
{
  __int64 (__fastcall *v4)(struct ID2D1Effect *, _QWORD, _QWORD, unsigned __int64 *, int); // rax
  signed int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int); // rax
  signed int v8; // eax
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
  v10 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 44), (__m128)*((unsigned int *)this + 45)).m128_u64[0];
  v5 = v4(a2, 0LL, 0LL, &v10, 8);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x14u);
  }
  else
  {
    v7 = *(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
    v10 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 46), (__m128)*((unsigned int *)this + 47)).m128_u64[0];
    v8 = v7(a2, 1LL, 0LL, &v10, 8);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x19u);
  }
  return v6;
}
