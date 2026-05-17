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

struct _PEB *__fastcall sub_1800141D4(__int64 a1)
{
  struct _PEB *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  result = *(struct _PEB **)(a1 + 32);
  if ( *(int *)&result->InheritedAddressSpace >= 0 )
  {
    RtlEnterCriticalSection(&unk_18015B220);
    v3 = (_QWORD *)qword_18015B258;
    v4 = (_QWORD *)(a1 + 56);
    if ( *(__int64 **)qword_18015B258 != &qword_18015B250 )
      __fastfail(3u);
    *(_QWORD *)(a1 + 64) = qword_18015B258;
    *v4 = &qword_18015B250;
    *v3 = v4;
    qword_18015B258 = a1 + 56;
    result = (struct _PEB *)RtlLeaveCriticalSection(&unk_18015B220);
    if ( qword_18015B1D0 )
    {
      result = NtCurrentPeb();
      if ( !result->Ldr->ShutdownInProgress )
        return (struct _PEB *)TpPostWork(qword_18015B1D0);
    }
  }
  return result;
}
