/*
 * XREFs of VerifierExAllocatePoolWithQuota @ 0x140813230
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithQuota @ 0x1402B8AC0 (ExAllocatePoolWithQuota.c)
 *     VfCheckPoolType @ 0x1408153AC (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 */

PVOID __fastcall VerifierExAllocatePoolWithQuota(__int64 PoolType, SIZE_T NumberOfBytes)
{
  POOL_TYPE v3; // ebx
  PVOID result; // rax
  __int64 v5; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = (int)PoolType;
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, 0LL);
    ++dword_1403AD17C;
    if ( (MmVerifierData & 8) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
        VerifierBugCheckIfAppropriate(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL);
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL);
    }
    v5 = v3 & 0xFFFFFFF7;
    if ( (v3 & 8) == 0 )
      v5 = (unsigned int)v3;
    LODWORD(v5) = v5 | 0x80;
    result = (PVOID)pXdvExAllocatePoolWithTagPriority(
                      v5,
                      NumberOfBytes,
                      1885434455,
                      32,
                      retaddr,
                      (__int64)VeAllocatePoolWithTagPriority);
    if ( !result && (v3 & 8) == 0 )
      RtlRaiseStatus(-1073741670);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(PoolType, retaddr, 0LL);
    return ExAllocatePoolWithQuota(v3, NumberOfBytes);
  }
  return result;
}
