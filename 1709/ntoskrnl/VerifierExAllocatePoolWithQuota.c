/*
 * XREFs of VerifierExAllocatePoolWithQuota @ 0x1407A61A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x1407A837C (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierExAllocatePoolWithQuota(__int64 a1, __int64 a2)
{
  int v3; // ebx
  int v4; // edi
  __int64 result; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = a1;
  VfCheckPoolType(a1, retaddr, 0LL);
  ++dword_14036A0DC;
  if ( (MmVerifierData & 8) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
      VerifierBugCheckIfAppropriate(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL);
  }
  if ( (v3 & 8) != 0 )
  {
    v4 = 0;
    v3 &= ~8u;
  }
  else
  {
    v4 = 1;
  }
  result = pXdvExAllocatePoolWithTagPriority(
             v3 | 0x80u,
             a2,
             1885434455,
             32,
             retaddr,
             (__int64)VeAllocatePoolWithTagPriority);
  if ( !result && v4 == 1 )
    RtlRaiseStatus(-1073741670);
  return result;
}
