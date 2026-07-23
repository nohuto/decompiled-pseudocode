/*
 * XREFs of sub_1800141D4 @ 0x1800141D4
 * Callers:
 *     sub_180039C44 @ 0x180039C44 (sub_180039C44.c)
 *     sub_1800417FC @ 0x1800417FC (sub_1800417FC.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     sub_180050570 @ 0x180050570 (sub_180050570.c)
 * Callees:
 *     TpPostWork @ 0x180016B90 (TpPostWork.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 */

void __fastcall sub_1800141D4(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  if ( **(int **)(a1 + 32) >= 0 )
  {
    RtlEnterCriticalSection(&stru_18015B220);
    v2 = (_QWORD *)qword_18015B258;
    v3 = (_QWORD *)(a1 + 56);
    if ( *(__int64 **)qword_18015B258 != &qword_18015B250 )
      __fastfail(3u);
    *(_QWORD *)(a1 + 64) = qword_18015B258;
    *v3 = &qword_18015B250;
    *v2 = v3;
    qword_18015B258 = a1 + 56;
    RtlLeaveCriticalSection(&stru_18015B220);
    if ( Work )
    {
      if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
        TpPostWork(Work);
    }
  }
}
