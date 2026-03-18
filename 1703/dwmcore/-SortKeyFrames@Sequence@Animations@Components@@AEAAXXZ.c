/*
 * XREFs of ?SortKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x1800911A4
 * Callers:
 *     ?Play@Sequence@Animations@Components@@QEAAXXZ @ 0x180090E84 (-Play@Sequence@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Components::Animations::Sequence::SortKeyFrames(void **this)
{
  size_t v2; // rdi

  if ( ((_BYTE)this[33] & 4) != 0 )
  {
    v2 = *((int *)this + 2);
    qsort(*this, v2, 0x18uLL, Components::Animations::Sequence::CompareItems);
    *((_BYTE *)this + 264) &= ~4u;
    *((_DWORD *)this + 61) = 0;
    if ( (int)v2 >= 2 )
      *((_DWORD *)this + 61) = *((_DWORD *)*this + 6 * (int)v2 - 6) - *(_DWORD *)*this;
  }
}
