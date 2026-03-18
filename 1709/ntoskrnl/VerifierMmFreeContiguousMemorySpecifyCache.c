/*
 * XREFs of VerifierMmFreeContiguousMemorySpecifyCache @ 0x1407C4290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViTargetFreeContiguousMemory @ 0x1407B70C4 (ViTargetFreeContiguousMemory.c)
 */

__int64 __fastcall VerifierMmFreeContiguousMemorySpecifyCache(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_140362010 )
    ViTargetFreeContiguousMemory(retaddr, a1);
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD))pXdvMmFreeContiguousMemorySpecifyCache)(a1, a2, a3);
}
