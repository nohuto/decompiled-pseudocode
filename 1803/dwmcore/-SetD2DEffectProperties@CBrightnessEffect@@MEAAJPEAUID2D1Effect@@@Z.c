/*
 * XREFs of ?SetD2DEffectProperties@CBrightnessEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x1801B1670
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrightnessEffect::SetD2DEffectProperties(CBrightnessEffect *this, struct ID2D1Effect *a2)
{
  __int64 v2; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a2;
  v10 = *((_QWORD *)this + 22);
  v5 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64 *, int))(v2 + 72))(
         a2,
         0LL,
         0LL,
         &v10,
         8);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x14u);
  }
  else
  {
    v7 = *(_QWORD *)a2;
    v10 = *((_QWORD *)this + 23);
    v8 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int64 *, int))(v7 + 72))(
           a2,
           1LL,
           0LL,
           &v10,
           8);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x19u);
  }
  return v6;
}
