/*
 * XREFs of Callback @ 0x180018970
 * Callers:
 *     sub_1800165B0 @ 0x1800165B0 (sub_1800165B0.c)
 * Callees:
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 *     sub_180019358 @ 0x180019358 (sub_180019358.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 */

void __fastcall Callback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WORK a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rax

  if ( !byte_18015B260 )
  {
    RtlEnterCriticalSection(&stru_18015B220);
    v3 = (__int64 *)qword_18015B250;
    v4 = *(_QWORD *)qword_18015B250;
    if ( *(__int64 **)(qword_18015B250 + 8) != &qword_18015B250 || *(_QWORD *)(v4 + 8) != qword_18015B250 )
      __fastfail(3u);
    qword_18015B250 = *(_QWORD *)qword_18015B250;
    *(_QWORD *)(v4 + 8) = &qword_18015B250;
    if ( &qword_18015B250 != v3 )
    {
      ++dword_18015B248;
      sub_180019358();
    }
    RtlLeaveCriticalSection(&stru_18015B220);
    if ( &qword_18015B250 != v3 )
      sub_180019170(v3 - 7, 0LL);
  }
}
