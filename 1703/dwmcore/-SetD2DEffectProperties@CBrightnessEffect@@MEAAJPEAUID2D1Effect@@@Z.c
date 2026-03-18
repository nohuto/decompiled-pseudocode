/*
 * XREFs of ?SetD2DEffectProperties@CBrightnessEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x1801791C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrightnessEffect::SetD2DEffectProperties(CBrightnessEffect *this, struct ID2D1Effect *a2)
{
  __int64 (__fastcall *v4)(struct ID2D1Effect *, _QWORD, _QWORD, unsigned __int64 *, int); // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int); // rax
  int v8; // eax
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
  v10 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 52), (__m128)*((unsigned int *)this + 53)).m128_u64[0];
  v5 = v4(a2, 0LL, 0LL, &v10, 8);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x14u);
  }
  else
  {
    v7 = *(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
    v10 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 54), (__m128)*((unsigned int *)this + 55)).m128_u64[0];
    v8 = v7(a2, 1LL, 0LL, &v10, 8);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x19u);
  }
  return v6;
}
