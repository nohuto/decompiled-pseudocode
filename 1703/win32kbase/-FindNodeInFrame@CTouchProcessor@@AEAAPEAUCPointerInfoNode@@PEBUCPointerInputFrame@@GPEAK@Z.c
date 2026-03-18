/*
 * XREFs of ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C011E568
 * Callers:
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C011B61C (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C011E704 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C0127618 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 * Callees:
 *     <none>
 */

struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeInFrame(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int16 a3,
        unsigned int *a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // eax
  __int64 i; // rcx

  v4 = *((_DWORD *)a2 + 12);
  v5 = 0;
  for ( i = *((_QWORD *)a2 + 12); v5 < v4; ++v5 )
  {
    if ( *(_WORD *)(i + 252) == a3 )
      break;
    i += 608LL;
  }
  if ( v5 == v4 )
    return 0LL;
  if ( a4 )
    *a4 = v5;
  return (struct CPointerInfoNode *)i;
}
