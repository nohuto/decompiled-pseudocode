/*
 * XREFs of ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x18016BF60
 * Callers:
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x18016BFF4 (-InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z.c)
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180188770 (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?GetMaxStackCount@CScrollAnimation@@UEBAIXZ @ 0x180188D30 (-GetMaxStackCount@CScrollAnimation@@UEBAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulation::GetSourceModifierConditionalAnimation(_QWORD *a1, int a2)
{
  int v2; // edx

  if ( !a2 )
    return a1[56];
  v2 = a2 - 1;
  if ( !v2 )
    return a1[57];
  if ( v2 == 1 )
    return a1[58];
  return 0LL;
}
