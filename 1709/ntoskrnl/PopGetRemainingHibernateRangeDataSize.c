/*
 * XREFs of PopGetRemainingHibernateRangeDataSize @ 0x1404334E0
 * Callers:
 *     PopRequestWrite @ 0x140434590 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140435F04 (PopWriteHiberPages.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x1400C1920 (RtlFindNextForwardRunClear.c)
 *     RtlNumberOfClearBits @ 0x1400D4B20 (RtlNumberOfClearBits.c)
 */

__int64 __fastcall PopGetRemainingHibernateRangeDataSize(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
  ULONG v6; // edx
  ULONG NextForwardRunClear; // eax
  ULONG StartingRunIndex; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 104);
  v2 = (_QWORD *)(a1 + 64);
  v4 = 0LL;
  while ( v1 != v2 )
  {
    v5 = v1[4] - v1[3];
    v1 = (_QWORD *)*v1;
    v4 += v5 << 12;
    *(_QWORD *)(a1 + 104) = v1;
  }
  v6 = *(_DWORD *)(a1 + 112);
  do
  {
    NextForwardRunClear = RtlFindNextForwardRunClear(*(PRTL_BITMAP *)(a1 + 96), v6, &StartingRunIndex);
    v6 = NextForwardRunClear + StartingRunIndex;
    v4 += (unsigned __int64)NextForwardRunClear << 12;
  }
  while ( NextForwardRunClear );
  if ( *(_QWORD *)(a1 + 96) == a1 + 32 )
    v4 += (unsigned __int64)RtlNumberOfClearBits((PRTL_BITMAP)(a1 + 48)) << 12;
  return v4;
}
