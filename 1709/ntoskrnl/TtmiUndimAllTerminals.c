/*
 * XREFs of TtmiUndimAllTerminals @ 0x14070EAA0
 * Callers:
 *     TtmNotifySessionDisplayRequiredChange @ 0x14070F684 (TtmNotifySessionDisplayRequiredChange.c)
 * Callees:
 *     TtmiSetPendingOnOffRequest @ 0x14070E7CC (TtmiSetPendingOnOffRequest.c)
 */

__int64 __fastcall TtmiUndimAllTerminals(__int64 a1)
{
  unsigned int *v1; // rdi
  unsigned int *i; // rbx
  __int64 result; // rax

  v1 = (unsigned int *)(a1 + 40);
  for ( i = *(unsigned int **)(a1 + 40); i != v1; i = *(unsigned int **)i )
  {
    if ( i[9] == 2 )
      result = TtmiSetPendingOnOffRequest(a1, i, 1, 8u, 0x54416455u);
  }
  return result;
}
