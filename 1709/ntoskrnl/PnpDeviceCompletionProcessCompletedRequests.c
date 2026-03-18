/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequests @ 0x140527C7C
 * Callers:
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpDeviceCompletionQueueIsEmpty @ 0x1400DF6E8 (PnpDeviceCompletionQueueIsEmpty.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x14012EA1C (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140553144 (PnpDeviceCompletionProcessCompletedRequest.c)
 */

__int64 __fastcall PnpDeviceCompletionProcessCompletedRequests(int a1, int a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  __int64 CompletedRequest; // rax
  int v9; // eax

  *a3 = 0;
  v6 = 0;
  while ( !PnpDeviceCompletionQueueIsEmpty() )
  {
    if ( !dword_140383E4C && (!a2 || !a1 && *a3) )
      break;
    CompletedRequest = PnpDeviceCompletionQueueGetCompletedRequest();
    v9 = PnpDeviceCompletionProcessCompletedRequest(CompletedRequest);
    *a3 = 1;
    if ( v9 == -1073741106 )
      v6 = -1073741106;
  }
  return v6;
}
