/*
 * XREFs of VerifierMmProbeAndLockPages @ 0x140782440
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1407751DC (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x140775D48 (VfFaultsInjectResourceFailure.c)
 */

unsigned __int64 __fastcall VerifierMmProbeAndLockPages(ULONG_PTR a1, char a2, unsigned int a3)
{
  unsigned __int8 CurrentIrql; // cl
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // dx
  __int64 v9; // rdx
  unsigned __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x70uLL, CurrentIrql, a1, a2);
  v7 = 2071;
  if ( (unsigned int)VfVerifyMode < 3 )
    v7 = 2067;
  v8 = *(_WORD *)(a1 + 10);
  if ( (v8 & v7) != 0 && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xB0uLL, a1, (__int16)v8, (__int16)v8 & (unsigned __int64)v7);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) == 1 )
    RtlRaiseStatus(-1073741663);
  LOBYTE(v9) = a2;
  result = ((__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD))pXdvMmProbeAndLockPages)(a1, v9, a3);
  if ( (MmVerifierData & 0x1000) != 0 )
    return ViTargetAddToCounter(retaddr, 152LL, 0xA0u, *(unsigned int *)(a1 + 40));
  return result;
}
