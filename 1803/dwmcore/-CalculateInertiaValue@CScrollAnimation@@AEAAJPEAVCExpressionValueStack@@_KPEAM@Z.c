/*
 * XREFs of ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801BDDE0
 * Callers:
 *     ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@Z @ 0x1801BDF2C (-CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801943B8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ToSeconds@TimeDelta@@QEBAMXZ @ 0x18019D98C (-ToSeconds@TimeDelta@@QEBAMXZ.c)
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801BDD34 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x1801BE6E4 (-StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInertiaValue(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float *a4)
{
  __int64 v5; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  float CurrentValue; // xmm0_4
  int v11; // eax
  int started; // eax
  int v13; // eax
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  float v16; // [rsp+60h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 37);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 8);
  if ( *((_DWORD *)this + 72) == 1 )
  {
    v8 = CScrollAnimation::CalculateInContactValue(this, a2, a3, &v16);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x30Eu);
      return v9;
    }
    CurrentValue = v16;
  }
  else
  {
    CurrentValue = CInteractionTracker::GetCurrentValue(v5, *((_DWORD *)this + 73));
    v16 = CurrentValue;
  }
  if ( *((_DWORD *)this + 72) == 2 )
  {
    if ( (*((_BYTE *)this + 312) & 4) != 0 )
    {
      started = CScrollAnimation::StartInertia(this, CurrentValue, a2, a3, 1);
      v9 = started;
      if ( started < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x327u);
        return v9;
      }
    }
  }
  else
  {
    v11 = CScrollAnimation::StartInertia(this, CurrentValue, a2, a3, 0);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x323u);
      return v9;
    }
  }
  v15[0] = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL) - *((_QWORD *)this + 38);
  TimeDelta::ToSeconds((TimeDelta *)v15);
  v13 = (*(__int64 (__fastcall **)(CScrollAnimation *, struct CExpressionValueStack *, unsigned __int64))(*(_QWORD *)this + 320LL))(
          this,
          a2,
          a3);
  v9 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x32Au);
  else
    return 0;
  return v9;
}
