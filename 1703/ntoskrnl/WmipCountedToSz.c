/*
 * XREFs of WmipCountedToSz @ 0x140580CC4
 * Callers:
 *     WmipPrepareWnodeSI @ 0x140580A10 (WmipPrepareWnodeSI.c)
 *     WmipAddDataSource @ 0x1405A03B8 (WmipAddDataSource.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall WmipCountedToSz(unsigned __int16 *a1)
{
  unsigned __int64 v2; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v4; // rbx

  v2 = *a1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2 + 2, 0x70696D57u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, a1 + 1, (unsigned int)v2);
    v4[v2 >> 1] = 0;
  }
  return v4;
}
