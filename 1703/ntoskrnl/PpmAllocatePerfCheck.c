/*
 * XREFs of PpmAllocatePerfCheck @ 0x1405BFEF4
 * Callers:
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405BFD98 (PpmCheckInitProcessors.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmAllocatePerfCheck(__int64 a1)
{
  unsigned int v1; // ebx
  PVOID PoolWithTag; // rax
  PVOID v4; // rsi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 24296) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x118uLL, 0x704D5050u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x118uLL);
      *(_QWORD *)(a1 + 24296) = v4;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
