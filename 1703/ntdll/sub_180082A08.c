/*
 * XREFs of sub_180082A08 @ 0x180082A08
 * Callers:
 *     sub_180011C88 @ 0x180011C88 (sub_180011C88.c)
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_180017B34 @ 0x180017B34 (sub_180017B34.c)
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 *     TpReleasePool @ 0x1800827E0 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180082B14 @ 0x180082B14 (sub_180082B14.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

__int64 __fastcall sub_180082A08(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // r8
  unsigned __int64 **v4; // rdx

  v2 = a1[7];
  if ( v2 )
  {
    ZwClose(v2);
    a1[7] = 0LL;
  }
  sub_180082B14(a1 + 15);
  sub_180082B14(a1 + 30);
  ZwClose(a1[8]);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, a1[2]);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, a1[5]);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, a1[6]);
  RtlAcquireSRWLockExclusive(&qword_18015C360);
  v3 = a1[48];
  v4 = (unsigned __int64 **)a1[49];
  if ( *(unsigned __int64 **)(v3 + 8) != a1 + 48 || *v4 != a1 + 48 )
    __fastfail(3u);
  *v4 = (unsigned __int64 *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  RtlReleaseSRWLockExclusive(&qword_18015C360);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, (unsigned __int64)a1);
}
