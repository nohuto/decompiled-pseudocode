/*
 * XREFs of WmipCountedToSz @ 0x14051F3A0
 * Callers:
 *     WmipPrepareWnodeSI @ 0x14051F40C (WmipPrepareWnodeSI.c)
 *     WmipAddDataSource @ 0x140545304 (WmipAddDataSource.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall WmipCountedToSz(unsigned __int16 *a1)
{
  unsigned __int64 v1; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v4; // rbx

  v1 = *a1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v1 + 2, 0x70696D57u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, a1 + 1, (unsigned int)v1);
    v4[v1 >> 1] = 0;
  }
  return v4;
}
