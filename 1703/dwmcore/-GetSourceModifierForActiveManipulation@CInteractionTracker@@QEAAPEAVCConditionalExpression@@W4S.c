/*
 * XREFs of ?GetSourceModifierForActiveManipulation@CInteractionTracker@@QEAAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180181A6C
 * Callers:
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801813C0 (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?GetMaxStackCount@CScrollAnimation@@UEBAIXZ @ 0x180181970 (-GetMaxStackCount@CScrollAnimation@@UEBAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker::GetSourceModifierForActiveManipulation(__int64 a1, int a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rcx
  int v4; // edx

  v2 = *(_QWORD **)(a1 + 512);
  v3 = 0LL;
  if ( v2 )
  {
    if ( a2 )
    {
      v4 = a2 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
          return v2[57];
      }
      else
      {
        return v2[56];
      }
    }
    else
    {
      return v2[55];
    }
  }
  return v3;
}
