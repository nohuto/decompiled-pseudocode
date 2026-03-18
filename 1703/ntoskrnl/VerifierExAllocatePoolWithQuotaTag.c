/*
 * XREFs of VerifierExAllocatePoolWithQuotaTag @ 0x1407645A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x1407667E0 (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierExAllocatePoolWithQuotaTag(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  int v5; // ebx
  int v6; // edi
  __int64 result; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = a3;
  v5 = a1;
  VfCheckPoolType(a1, retaddr, a3);
  if ( (MmVerifierData & 8) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
      VerifierBugCheckIfAppropriate(0xC4u, 0LL);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0LL);
  }
  if ( (v5 & 8) != 0 )
  {
    v6 = 0;
    v5 &= ~8u;
  }
  else
  {
    v6 = 1;
  }
  result = pXdvExAllocatePoolWithTagPriority(v5 | 0x80u, a2, v4, 32, retaddr, (__int64)VeAllocatePoolWithTagPriority);
  if ( !result && v6 == 1 )
    RtlRaiseStatus(-1073741670);
  return result;
}
