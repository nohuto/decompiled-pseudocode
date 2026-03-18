/*
 * XREFs of ?CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x18018A380
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016B958 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x18016F094 (-UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x18016F248 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::CalculateInertiaValueWorker(
        CInteractionTrackerScaleAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float a4,
        float *a5)
{
  __int64 v5; // rdi
  float CurrentValue; // xmm6_4
  _DWORD *v10; // rcx
  double (__fastcall **v11)(char *, struct CExpressionValueStack *, __int64); // r11
  double v12; // xmm0_8
  signed int updated; // eax
  unsigned int v14; // ebx

  v5 = *((_QWORD *)this + 35);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 8);
  CurrentValue = CInteractionTracker::GetCurrentValue(v5, 2);
  CInteractionTracker::ValueFromBoundary((_DWORD *)v5, 2LL, 2);
  CInteractionTracker::ValueFromBoundary(v10, 1LL, 2);
  v12 = (*v11)((char *)this + 392, a2, a3);
  if ( *(float *)&v12 == CurrentValue
    || (updated = CInteractionTracker::UpdateCenterPointForState(v5, (__int64)a2, a3, 2u), v14 = updated, updated >= 0) )
  {
    v14 = 0;
    *a5 = *(float *)&v12;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x122u);
  }
  return v14;
}
