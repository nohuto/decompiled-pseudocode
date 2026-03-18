/*
 * XREFs of VerifierExAllocatePool @ 0x1408130C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool @ 0x1400D1810 (ExAllocatePool.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x1408153AC (VfCheckPoolType.c)
 *     ViTargetIncrementCounter @ 0x14082234C (ViTargetIncrementCounter.c)
 */

PVOID __fastcall VerifierExAllocatePool(__int64 PoolType, SIZE_T NumberOfBytes)
{
  POOL_TYPE v3; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = (int)PoolType;
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, 0LL);
    ++dword_1403AD17C;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(retaddr, 156LL);
    return (PVOID)pXdvExAllocatePoolWithTagPriority(
                    v3 | 0x80u,
                    NumberOfBytes,
                    1885434455,
                    32,
                    retaddr,
                    (__int64)VeAllocatePoolWithTagPriority);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(PoolType, retaddr, 0LL);
    return ExAllocatePool(v3, NumberOfBytes);
  }
}
