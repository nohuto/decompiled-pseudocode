/*
 * XREFs of ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x180188D10
 * Callers:
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180188B30 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CInteractionTracker *__fastcall CScrollAnimation::GetInteractionTracker(CScrollAnimation *this)
{
  struct CInteractionTracker *result; // rax

  result = (struct CInteractionTracker *)*((_QWORD *)this + 35);
  if ( result )
    return (struct CInteractionTracker *)*((_QWORD *)result + 1);
  return result;
}
