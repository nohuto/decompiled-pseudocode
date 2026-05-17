/*
 * XREFs of RtlReleasePath @ 0x18006F830
 * Callers:
 *     sub_18003076C @ 0x18003076C (sub_18003076C.c)
 *     sub_1800324E0 @ 0x1800324E0 (sub_1800324E0.c)
 *     sub_18003AB88 @ 0x18003AB88 (sub_18003AB88.c)
 *     LdrLoadDll @ 0x18003AED0 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x18003BF00 (LdrGetDllHandleEx.c)
 *     sub_18004C234 @ 0x18004C234 (sub_18004C234.c)
 *     sub_18006EEF8 @ 0x18006EEF8 (sub_18006EEF8.c)
 *     sub_18006F0A0 @ 0x18006F0A0 (sub_18006F0A0.c)
 *     sub_1800874C4 @ 0x1800874C4 (sub_1800874C4.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800D6F80 @ 0x1800D6F80 (sub_1800D6F80.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlReleasePath(__int64 a1)
{
  unsigned __int64 v1; // rbx
  signed __int64 result; // rax

  v1 = a1 - 112;
  RtlAcquireSRWLockExclusive(&qword_18015C3A0);
  if ( (*(_QWORD *)(v1 + 80))-- != 1LL )
    v1 = 0LL;
  result = RtlReleaseSRWLockExclusive(&qword_18015C3A0);
  if ( v1 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  return result;
}
