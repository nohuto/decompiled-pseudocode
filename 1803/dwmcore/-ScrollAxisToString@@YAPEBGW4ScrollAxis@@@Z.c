/*
 * XREFs of ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x1801BE594
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801BE9A0 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801BF380 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 *     ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x1801C4850 (-AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z.c)
 *     ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z @ 0x1801C4A8C (-AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z.c)
 *     ?StartInContact@CMotion@@IEAAX_N@Z @ 0x1801C4E9C (-StartInContact@CMotion@@IEAAX_N@Z.c)
 *     ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x1801C4F6C (-StartInertia@CMotion@@IEAAXMM_N0@Z.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall ScrollAxisToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return L"X";
  v1 = a1 - 1;
  if ( !v1 )
    return L"Y";
  if ( v1 == 1 )
    return L"Scale";
  return L"Unsupported Axis";
}
