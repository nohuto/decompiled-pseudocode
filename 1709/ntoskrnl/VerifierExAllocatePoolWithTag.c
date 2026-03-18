/*
 * XREFs of VerifierExAllocatePoolWithTag @ 0x1407A63A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x1407A837C (VfCheckPoolType.c)
 */

__int64 __fastcall VerifierExAllocatePoolWithTag(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  int v5; // esi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = a3;
  v5 = a1;
  VfCheckPoolType(a1, retaddr, a3);
  return pXdvExAllocatePoolWithTagPriority(v5 | 0x80u, a2, v4, 32, retaddr, (__int64)VeAllocatePoolWithTagPriority);
}
