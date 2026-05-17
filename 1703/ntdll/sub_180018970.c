/*
 * XREFs of sub_180018970 @ 0x180018970
 * Callers:
 *     sub_1800165B0 @ 0x1800165B0 (sub_1800165B0.c)
 * Callees:
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 *     sub_180019358 @ 0x180019358 (sub_180019358.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 */

void sub_180018970()
{
  __int64 *v0; // rbx
  __int64 v1; // rax

  if ( !byte_18015B260 )
  {
    RtlEnterCriticalSection(&unk_18015B220);
    v0 = (__int64 *)qword_18015B250;
    v1 = *(_QWORD *)qword_18015B250;
    if ( *(__int64 **)(qword_18015B250 + 8) != &qword_18015B250 || *(_QWORD *)(v1 + 8) != qword_18015B250 )
      __fastfail(3u);
    qword_18015B250 = *(_QWORD *)qword_18015B250;
    *(_QWORD *)(v1 + 8) = &qword_18015B250;
    if ( &qword_18015B250 != v0 )
    {
      ++dword_18015B248;
      sub_180019358();
    }
    RtlLeaveCriticalSection(&unk_18015B220);
    if ( &qword_18015B250 != v0 )
      sub_180019170(v0 - 7, 0LL);
  }
}
