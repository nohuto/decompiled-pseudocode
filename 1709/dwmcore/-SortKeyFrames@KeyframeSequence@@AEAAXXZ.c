/*
 * XREFs of ?SortKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800A74DC
 * Callers:
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x1800A6C8C (-Play@KeyframeSequence@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyframeSequence::SortKeyFrames(void **this)
{
  unsigned int v2; // eax

  if ( (*((_BYTE *)this + 132) & 4) != 0 )
  {
    qsort(this[12], *((unsigned int *)this + 26), 0x18uLL, KeyframeSequence::CompareKeyframes);
    *((_BYTE *)this + 132) &= ~4u;
    *((_DWORD *)this + 28) = 0;
    v2 = *((_DWORD *)this + 26);
    if ( v2 >= 2 )
      *((_DWORD *)this + 28) = *((_DWORD *)this[12] + 6 * v2 - 6) - *(_DWORD *)this[12];
  }
}
