/*
 * XREFs of ?GetTargetObjectHandle@CBaseExpression@@QEBAIXZ @ 0x180158474
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800A1DF0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800A2E74 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18016D2E4 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseExpression::GetTargetObjectHandle(CBaseExpression *this)
{
  __int64 v1; // rcx
  _DWORD *i; // rcx

  v1 = *((_QWORD *)this + 33);
  if ( (*(_DWORD *)(v1 + 4) & 0x20000000) == 0 )
    return 0LL;
  for ( i = (_DWORD *)(v1 + 12); (*i & 0x7F000000) != 0x3000000; i = (_DWORD *)((char *)i + (*i & 0xFFFFFF) + 4) )
    ;
  return (unsigned int)i[1];
}
