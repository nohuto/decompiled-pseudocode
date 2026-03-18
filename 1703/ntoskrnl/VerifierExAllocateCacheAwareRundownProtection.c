/*
 * XREFs of VerifierExAllocateCacheAwareRundownProtection @ 0x14077FCD0
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x1407667E0 (VfCheckPoolType.c)
 */

__int64 __fastcall VerifierExAllocateCacheAwareRundownProtection(unsigned int a1, unsigned int a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  VfCheckPoolType(a1, retaddr, a2);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))pXdvExAllocateCacheAwareRundownProtection)(a1, a2);
}
