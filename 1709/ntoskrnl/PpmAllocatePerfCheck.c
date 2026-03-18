/*
 * XREFs of PpmAllocatePerfCheck @ 0x1405B5AE4
 * Callers:
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmAllocatePerfCheck(__int64 a1)
{
  unsigned int v1; // ebx
  PVOID PoolWithTag; // rax
  PVOID v4; // rsi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 24168) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x118uLL, 0x704D5050u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x118uLL);
      *(_QWORD *)(a1 + 24168) = v4;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
