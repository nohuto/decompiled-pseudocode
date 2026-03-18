/*
 * XREFs of VerifierMmFreeContiguousMemory @ 0x140781EC0
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetFreeContiguousMemory @ 0x140775304 (ViTargetFreeContiguousMemory.c)
 */

__int64 __fastcall VerifierMmFreeContiguousMemory(__int64 a1)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_140348590 )
    ViTargetFreeContiguousMemory(retaddr, a1);
  return ((__int64 (__fastcall *)(__int64))pXdvMmFreeContiguousMemory)(a1);
}
