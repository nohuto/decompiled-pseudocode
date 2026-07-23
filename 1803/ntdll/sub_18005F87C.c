/*
 * XREFs of sub_18005F87C @ 0x18005F87C
 * Callers:
 *     sub_18005E008 @ 0x18005E008 (sub_18005E008.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

void __fastcall sub_18005F87C(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rbx

  v3 = a1 + 48LL * *a2;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 96));
  if ( (*(_WORD *)(v3 + 154))-- == 1 )
  {
    memset((void *)(v3 + 112), 0, 0x30uLL);
    *(_QWORD *)(v3 + 120) = 0LL;
    *(_QWORD *)(v3 + 128) = 0LL;
    --*(_DWORD *)(a1 + 104);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 96));
}
