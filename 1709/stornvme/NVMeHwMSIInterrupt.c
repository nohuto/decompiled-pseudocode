/*
 * XREFs of NVMeHwMSIInterrupt @ 0x1C0002840
 * Callers:
 *     <none>
 * Callees:
 *     RequestPendingCompletion @ 0x1C0001088 (RequestPendingCompletion.c)
 *     ProcessCompletionQueues @ 0x1C0011818 (ProcessCompletionQueues.c)
 */

bool __fastcall NVMeHwMSIInterrupt(__int64 a1, unsigned __int16 a2)
{
  bool v4; // si

  if ( *(_WORD *)(a1 + 200) == 1 )
    a2 = -1;
  v4 = RequestPendingCompletion(a1, a2);
  if ( v4 )
    ProcessCompletionQueues(a1, a2, 0LL);
  else
    ++*(_QWORD *)(a1 + 3264);
  return v4;
}
