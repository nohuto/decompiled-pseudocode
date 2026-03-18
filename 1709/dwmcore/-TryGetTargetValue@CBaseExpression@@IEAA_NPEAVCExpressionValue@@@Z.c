/*
 * XREFs of ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x1800A1D20
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800A2E74 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800A5300 (-GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBaseExpression::TryGetTargetValue(CBaseExpression *this, struct CExpressionValue *a2)
{
  char v3; // bl
  __int64 v4; // rcx
  CPropertyBagBase *v6; // rcx
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(CPropertyBagBase *__hidden, unsigned int, struct CExpressionValue *); // rax
  signed int Property; // eax

  v3 = 0;
  v4 = *((_QWORD *)this + 21);
  if ( v4 )
    v6 = *(CPropertyBagBase **)(v4 + 8);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = *((unsigned int *)this + 44);
    v8 = *(__int64 (__fastcall **)(CPropertyBagBase *__hidden, unsigned int, struct CExpressionValue *))(*(_QWORD *)v6 + 96LL);
    if ( v8 == CPropertyBagBase::GetProperty )
      Property = CPropertyBagBase::GetProperty(v6, v7, a2);
    else
      Property = v8(v6, v7, a2);
    if ( Property < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1801F15B0, 1u, Property, 0x46Au);
    else
      return 1;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1801F15B0, 1u, 0x80070006, 0x469u);
  }
  return v3;
}
