/*
 * XREFs of ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x18002F0B8
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18002E81C (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180031300 (-GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBaseExpression::TryGetTargetValue(CBaseExpression *this, struct CExpressionValue *a2)
{
  char v3; // bl
  __int64 v4; // rcx
  CPropertyBagBase *v6; // rcx
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(CPropertyBagBase *__hidden, unsigned int, struct CExpressionValue *); // rax
  int Property; // eax

  v3 = 0;
  v4 = *((_QWORD *)this + 21);
  if ( v4 )
    v6 = *(CPropertyBagBase **)(v4 + 8);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = *((unsigned int *)this + 44);
    v8 = *(__int64 (__fastcall **)(CPropertyBagBase *__hidden, unsigned int, struct CExpressionValue *))(*(_QWORD *)v6 + 88LL);
    if ( v8 == CPropertyBagBase::GetProperty )
      Property = CPropertyBagBase::GetProperty(v6, v7, a2);
    else
      Property = v8(v6, v7, a2);
    if ( Property < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801D5BA0, 1u, Property, 0x3DBu);
    else
      return 1;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801D5BA0, 1u, -2147024890, 0x3DAu);
  }
  return v3;
}
