/*
 * XREFs of ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C011B61C
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C011BE70 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C011E568 (-FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C0122A50 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::CanCoalesceIgnoreNode(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        enum CPointerCoalesce *a4)
{
  struct CPointerInfoNode *NodeInFrame; // rax
  _DWORD *v6; // r11
  _DWORD *v8; // r11

  NodeInFrame = CTouchProcessor::FindNodeInFrame(this, a2, *((_WORD *)a3 + 126), 0LL);
  if ( !NodeInFrame )
  {
    *v6 = 3;
    return 0LL;
  }
  if ( (*(_DWORD *)NodeInFrame & 0x2000) == 0 && !(unsigned int)CPointerInfoNode::IsFullyReleased(a3) )
  {
    *v8 = 20;
    return 0LL;
  }
  return 1LL;
}
