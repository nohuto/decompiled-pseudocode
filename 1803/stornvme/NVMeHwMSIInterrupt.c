/*
 * XREFs of NVMeHwMSIInterrupt @ 0x1C00027B0
 * Callers:
 *     <none>
 * Callees:
 *     RequestPendingCompletion @ 0x1C000108C (RequestPendingCompletion.c)
 *     ProcessCompletionQueues @ 0x1C0011D00 (ProcessCompletionQueues.c)
 */

bool __fastcall NVMeHwMSIInterrupt(__int64 a1, unsigned __int16 a2)
{
  bool v4; // si

  if ( *(_WORD *)(a1 + 208) == 1 )
    a2 = -1;
  v4 = RequestPendingCompletion(a1, a2);
  if ( v4 )
    ProcessCompletionQueues(a1, a2, 0LL);
  else
    ++*(_QWORD *)(a1 + 3312);
  return v4;
}
