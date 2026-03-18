/*
 * XREFs of CmpAllocateLayerInfoForKcb @ 0x1406FAA00
 * Callers:
 *     CmpCreateLayerLink @ 0x1406FAD44 (CmpCreateLayerLink.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpAllocateLayerInfoForKcb(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rsi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 184) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x696C4D43u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x30uLL);
      v4[2] = a1;
      v4[5] = v4 + 4;
      v4[4] = v4 + 4;
      *(_QWORD *)(a1 + 184) = v4;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
