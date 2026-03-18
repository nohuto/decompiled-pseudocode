/*
 * XREFs of VerifierMmFreeNonCachedMemory @ 0x140781F60
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetFreeContiguousMemory @ 0x140775304 (ViTargetFreeContiguousMemory.c)
 */

__int64 __fastcall VerifierMmFreeNonCachedMemory(__int64 a1, __int64 a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_140348590 )
    ViTargetFreeContiguousMemory(retaddr, a1);
  return ((__int64 (__fastcall *)(__int64, __int64))pXdvMmFreeNonCachedMemory)(a1, a2);
}
