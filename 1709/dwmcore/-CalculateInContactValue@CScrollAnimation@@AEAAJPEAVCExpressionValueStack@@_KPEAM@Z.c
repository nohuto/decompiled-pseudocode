/*
 * XREFs of ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801888C8
 * Callers:
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180188974 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@Z @ 0x180188AC0 (-CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180188770 (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x1801891C0 (-StartInContact@CScrollAnimation@@AEAAXXZ.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInContactValue(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float *a4)
{
  signed int v7; // eax
  unsigned int v8; // ebx
  signed int v9; // eax
  float v11; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 68) != 1 )
    CScrollAnimation::StartInContact(this);
  v7 = CScrollAnimation::CalculateInContactDelta(this, a2, a3, &v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x2D0u);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(CScrollAnimation *, struct CExpressionValueStack *, __int64))(*(_QWORD *)this + 312LL))(
           this,
           a2,
           a3);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x2D2u);
    else
      return 0;
  }
  return v8;
}
