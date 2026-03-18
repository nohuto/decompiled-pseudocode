/*
 * XREFs of VerifierMmFreeContiguousMemorySpecifyCache @ 0x140781F00
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetFreeContiguousMemory @ 0x140775304 (ViTargetFreeContiguousMemory.c)
 */

__int64 __fastcall VerifierMmFreeContiguousMemorySpecifyCache(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_140348590 )
    ViTargetFreeContiguousMemory(retaddr, a1);
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD))pXdvMmFreeContiguousMemorySpecifyCache)(a1, a2, a3);
}
