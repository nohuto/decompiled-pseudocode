/*
 * XREFs of ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x180181950
 * Callers:
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180181770 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CInteractionTracker *__fastcall CScrollAnimation::GetInteractionTracker(CScrollAnimation *this)
{
  struct CInteractionTracker *result; // rax

  result = (struct CInteractionTracker *)*((_QWORD *)this + 29);
  if ( result )
    return (struct CInteractionTracker *)*((_QWORD *)result + 1);
  return result;
}
