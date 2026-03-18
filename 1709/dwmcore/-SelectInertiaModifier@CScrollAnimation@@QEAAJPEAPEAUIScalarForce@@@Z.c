/*
 * XREFs of ?SelectInertiaModifier@CScrollAnimation@@QEAAJPEAPEAUIScalarForce@@@Z @ 0x180189184
 * Callers:
 *     ?StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x18018929C (-StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z.c)
 * Callees:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18016D2E4 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 */

__int64 __fastcall CScrollAnimation::SelectInertiaModifier(CScrollAnimation *this, struct IScalarForce **a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 35);
  v4 = 0LL;
  if ( v2 )
    v4 = *(_QWORD *)(v2 + 8);
  return CInteractionTracker::SelectInertiaModifierForAxis(
           v4,
           *((_DWORD *)this + 69),
           *((struct CExpressionValueStack **)this + 39),
           *((_QWORD *)this + 40),
           a2);
}
