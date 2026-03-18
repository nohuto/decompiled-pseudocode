/*
 * XREFs of NormalizationList__InsertTail @ 0x14029409C
 * Callers:
 *     RtlpGetNormalization @ 0x14078B538 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NormalizationList__InsertTail(__int64 a1)
{
  _QWORD *result; // rax

  result = off_1403999B8;
  if ( *off_1403999B8 != (_UNKNOWN *)&NormalizationListHead )
    __fastfail(3u);
  *(_QWORD *)a1 = &NormalizationListHead;
  *(_QWORD *)(a1 + 8) = result;
  *result = a1;
  off_1403999B8 = (_UNKNOWN **)a1;
  return result;
}
