/*
 * XREFs of VerifierExAllocateCacheAwareRundownProtection @ 0x1407C1CC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x1407A837C (VfCheckPoolType.c)
 */

__int64 __fastcall VerifierExAllocateCacheAwareRundownProtection(unsigned int a1, unsigned int a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  VfCheckPoolType(a1, retaddr, a2);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))pXdvExAllocateCacheAwareRundownProtection)(a1, a2);
}
