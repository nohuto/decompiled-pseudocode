/*
 * XREFs of ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x18003B4C0
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18003C8AC (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180039CA0 (-GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBaseExpression::TryGetTargetValue(CBaseExpression *this, struct CExpressionValue *a2)
{
  char v3; // bl
  __int64 v4; // rcx
  CPropertySet *v6; // rcx
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(CPropertySet *, unsigned int, struct CExpressionValue *); // rax
  int Property; // eax

  v3 = 0;
  v4 = *((_QWORD *)this + 22);
  if ( v4 )
    v6 = *(CPropertySet **)(v4 + 8);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = *((unsigned int *)this + 46);
    v8 = *(__int64 (__fastcall **)(CPropertySet *, unsigned int, struct CExpressionValue *))(*(_QWORD *)v6 + 96LL);
    if ( v8 == CPropertySet::GetProperty )
      Property = CPropertySet::GetProperty(v6, v7, a2);
    else
      Property = v8(v6, v7, a2);
    if ( Property < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023B9C0, 1u, Property, 0x46Du);
    else
      return 1;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023B9C0, 1u, -2147024890, 0x46Cu);
  }
  return v3;
}
