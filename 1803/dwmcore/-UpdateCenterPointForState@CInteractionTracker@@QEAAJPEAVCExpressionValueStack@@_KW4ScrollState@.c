/*
 * XREFs of ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x180197094
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801BF920 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801BFA30 (-CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x180193984 (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 */

__int64 __fastcall CInteractionTracker::UpdateCenterPointForState(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // r15
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  const void *retaddr; // [rsp+48h] [rbp+0h]

  if ( a4 == 1 )
  {
    v8 = 132LL;
  }
  else
  {
    if ( a4 != 2 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v8 = 140LL;
  }
  v9 = a1 + v8;
  v10 = CInteractionTracker::CalculateCenterPointForAxis((float *)a1, a2, a3, a4, 0, (float *)(a1 + v8));
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x12B9u);
  }
  else
  {
    v12 = CInteractionTracker::CalculateCenterPointForAxis((float *)a1, a2, a3, a4, 1u, (float *)(v9 + 4));
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x12BBu);
    }
    else if ( a4 == 1 )
    {
      *(_QWORD *)(a1 + 140) = *(_QWORD *)(a1 + 132);
    }
  }
  return v11;
}
