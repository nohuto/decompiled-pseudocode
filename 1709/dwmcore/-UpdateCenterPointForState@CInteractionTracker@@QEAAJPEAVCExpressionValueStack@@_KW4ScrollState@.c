/*
 * XREFs of ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x18016F094
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x18018A280 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x18018A380 (-CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x18016B014 (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 */

__int64 __fastcall CInteractionTracker::UpdateCenterPointForState(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // r15
  signed int v10; // eax
  unsigned int v11; // ebx
  signed int v12; // eax
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
  v9 = v8 + a1;
  v10 = CInteractionTracker::CalculateCenterPointForAxis(a1, a2, a3, a4, 0, (_DWORD *)(v8 + a1));
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x1454u);
  }
  else
  {
    v12 = CInteractionTracker::CalculateCenterPointForAxis(a1, a2, a3, a4, 1u, (_DWORD *)(v9 + 4));
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x1456u);
    }
    else if ( a4 == 1 )
    {
      *(_QWORD *)(a1 + 140) = *(_QWORD *)(a1 + 132);
    }
  }
  return v11;
}
