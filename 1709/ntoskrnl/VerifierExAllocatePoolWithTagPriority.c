/*
 * XREFs of VerifierExAllocatePoolWithTagPriority @ 0x1407A6410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x1407A837C (VfCheckPoolType.c)
 */

__int64 __fastcall VerifierExAllocatePoolWithTagPriority(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v6; // edi
  int v7; // ebp
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v6 = a3;
  v7 = a1;
  VfCheckPoolType(a1, retaddr, a3);
  return pXdvExAllocatePoolWithTagPriority(v7 | 0x80u, a2, v6, a4, retaddr, (__int64)VeAllocatePoolWithTagPriority);
}
