/*
 * XREFs of ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801815B4
 * Callers:
 *     ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@Z @ 0x180181700 (-CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CB54 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180181508 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x180182214 (-StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z.c)
 *     ?ToSeconds@TimeDelta@Animations@Components@@QEBAMXZ @ 0x1801B77A8 (-ToSeconds@TimeDelta@Animations@Components@@QEBAMXZ.c)
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

  v5 = *((_QWORD *)this + 29);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 8);
  if ( *((_DWORD *)this + 56) == 1 )
  {
    v8 = CScrollAnimation::CalculateInContactValue(this, a2, a3, &v16);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x313u);
      return v9;
    }
    CurrentValue = v16;
  }
  else
  {
    CurrentValue = CInteractionTracker::GetCurrentValue(v5, *((_DWORD *)this + 57));
    v16 = CurrentValue;
  }
  if ( *((_DWORD *)this + 56) == 2 )
  {
    if ( (*((_BYTE *)this + 248) & 4) != 0 )
    {
      started = CScrollAnimation::StartInertia(this, CurrentValue, a2, a3, 1);
      v9 = started;
      if ( started < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0x32Cu);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x328u);
      return v9;
    }
  }
  v15[0] = *(_QWORD *)(*((_QWORD *)this + 2) + 520LL) - *((_QWORD *)this + 30);
  Components::Animations::TimeDelta::ToSeconds((Components::Animations::TimeDelta *)v15);
  v13 = (*(__int64 (__fastcall **)(CScrollAnimation *, struct CExpressionValueStack *, unsigned __int64))(*(_QWORD *)this + 264LL))(
          this,
          a2,
          a3);
  v9 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x32Fu);
  else
    return 0;
  return v9;
}
