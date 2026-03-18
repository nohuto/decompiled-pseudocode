/*
 * XREFs of TtmiUndimAllTerminals @ 0x1406D8714
 * Callers:
 *     TtmNotifySessionDisplayRequiredChange @ 0x1406D92FC (TtmNotifySessionDisplayRequiredChange.c)
 * Callees:
 *     TtmiSetPendingOnOffRequest @ 0x1406D8444 (TtmiSetPendingOnOffRequest.c)
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
