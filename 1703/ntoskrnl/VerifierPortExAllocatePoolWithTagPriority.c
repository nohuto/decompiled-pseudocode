/*
 * XREFs of VerifierPortExAllocatePoolWithTagPriority @ 0x140780130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierPortExAllocatePoolWithTagPriority(__int64 a1)
{
  LODWORD(a1) = a1 | 0x80;
  return ((__int64 (__fastcall *)(__int64))pXdvExAllocatePoolWithTagPriority)(a1);
}
