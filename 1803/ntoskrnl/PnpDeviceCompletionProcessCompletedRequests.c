/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequests @ 0x1405CE2B8
 * Callers:
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpDeviceCompletionQueueIsEmpty @ 0x140146628 (PnpDeviceCompletionQueueIsEmpty.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x140182530 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1405D39C8 (PnpDeviceCompletionProcessCompletedRequest.c)
 */

__int64 __fastcall PnpDeviceCompletionProcessCompletedRequests(int a1, int a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  void *CompletedRequest; // rax
  int v9; // eax

  *a3 = 0;
  v6 = 0;
  while ( !PnpDeviceCompletionQueueIsEmpty() )
  {
    if ( !dword_1403C72AC && (!a2 || !a1 && *a3) )
      break;
    CompletedRequest = (void *)PnpDeviceCompletionQueueGetCompletedRequest();
    v9 = PnpDeviceCompletionProcessCompletedRequest(CompletedRequest);
    *a3 = 1;
    if ( v9 == -1073741106 )
      v6 = -1073741106;
  }
  return v6;
}
