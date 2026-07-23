/*
 * XREFs of sub_180042660 @ 0x180042660
 * Callers:
 *     sub_180028360 @ 0x180028360 (sub_180028360.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_1800426E8 @ 0x1800426E8 (sub_1800426E8.c)
 *     sub_1800428F4 @ 0x1800428F4 (sub_1800428F4.c)
 */

void __fastcall sub_180042660(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WORK a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rax

  if ( !byte_18015C280 )
  {
    RtlEnterCriticalSection(&stru_18015C240);
    v3 = (__int64 *)qword_18015C270;
    v4 = *(_QWORD *)qword_18015C270;
    if ( *(__int64 **)(qword_18015C270 + 8) != &qword_18015C270 || *(_QWORD *)(v4 + 8) != qword_18015C270 )
      __fastfail(3u);
    qword_18015C270 = *(_QWORD *)qword_18015C270;
    *(_QWORD *)(v4 + 8) = &qword_18015C270;
    if ( &qword_18015C270 != v3 )
    {
      ++dword_18015C268;
      sub_1800428F4();
    }
    RtlLeaveCriticalSection(&stru_18015C240);
    if ( &qword_18015C270 != v3 )
      sub_1800426E8(v3 - 8, 0LL);
  }
}
