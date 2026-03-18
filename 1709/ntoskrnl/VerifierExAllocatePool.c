/*
 * XREFs of VerifierExAllocatePool @ 0x1407A6110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x1407A837C (VfCheckPoolType.c)
 *     ViTargetIncrementCounter @ 0x1407B71D8 (ViTargetIncrementCounter.c)
 */

__int64 __fastcall VerifierExAllocatePool(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = a1;
  VfCheckPoolType(a1, retaddr, 0LL);
  ++dword_14036A0DC;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 140LL);
  return pXdvExAllocatePoolWithTagPriority(
           v3 | 0x80u,
           a2,
           1885434455,
           32,
           retaddr,
           (__int64)VeAllocatePoolWithTagPriority);
}
