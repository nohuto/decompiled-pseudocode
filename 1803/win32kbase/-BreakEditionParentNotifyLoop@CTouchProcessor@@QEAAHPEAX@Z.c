/*
 * XREFs of ?BreakEditionParentNotifyLoop@CTouchProcessor@@QEAAHPEAX@Z @ 0x1C010D5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C0117888 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::BreakEditionParentNotifyLoop(CTouchProcessor *this, CPointerInfoNode *a2)
{
  CPointerInfoNode *v2; // rcx
  __int64 result; // rax

  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) )
    return 1LL;
  result = CPointerInfoNode::IsTargetSetForRetrieval(v2, gptiCurrent);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
