/*
 * XREFs of ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180188974
 * Callers:
 *     ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@Z @ 0x180188AC0 (-CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016B958 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ToSeconds@TimeDelta@@QEBAMXZ @ 0x180174684 (-ToSeconds@TimeDelta@@QEBAMXZ.c)
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801888C8 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x18018929C (-StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInertiaValue(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float *a4)
{
  __int64 v5; // rcx
  signed int v8; // eax
  unsigned int v9; // ebx
  float CurrentValue; // xmm0_4
  signed int v11; // eax
  signed int started; // eax
  signed int v13; // eax
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  float v16; // [rsp+60h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 35);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 8);
  if ( *((_DWORD *)this + 68) == 1 )
  {
    v8 = CScrollAnimation::CalculateInContactValue(this, a2, a3, &v16);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x30Du);
      return v9;
    }
    CurrentValue = v16;
  }
  else
  {
    CurrentValue = CInteractionTracker::GetCurrentValue(v5, *((_DWORD *)this + 69));
    v16 = CurrentValue;
  }
  if ( *((_DWORD *)this + 68) == 2 )
  {
    if ( (*((_BYTE *)this + 296) & 4) != 0 )
    {
      started = CScrollAnimation::StartInertia(this, CurrentValue, a2, a3, 1);
      v9 = started;
      if ( started < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, started, 0x326u);
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
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x322u);
      return v9;
    }
  }
  v15[0] = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL) - *((_QWORD *)this + 36);
  TimeDelta::ToSeconds((TimeDelta *)v15);
  v13 = (*(__int64 (__fastcall **)(CScrollAnimation *, struct CExpressionValueStack *, unsigned __int64))(*(_QWORD *)this + 320LL))(
          this,
          a2,
          a3);
  v9 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x329u);
  else
    return 0;
  return v9;
}
