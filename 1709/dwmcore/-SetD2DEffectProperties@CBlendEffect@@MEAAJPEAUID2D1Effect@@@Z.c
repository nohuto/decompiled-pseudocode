/*
 * XREFs of ?SetD2DEffectProperties@CBlendEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x180180430
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBlendEffect::SetD2DEffectProperties(CBlendEffect *this, struct ID2D1Effect *a2)
{
  signed int v2; // eax
  unsigned int v3; // ebx

  v2 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         0LL,
         0LL,
         (char *)this + 176,
         4);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x11u);
  return v3;
}
