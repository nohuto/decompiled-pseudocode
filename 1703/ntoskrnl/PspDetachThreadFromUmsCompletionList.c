/*
 * XREFs of PspDetachThreadFromUmsCompletionList @ 0x1402393C0
 * Callers:
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspDetachThreadFromUmsCompletionList(struct _KTHREAD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = a1;
  if ( !a1 )
    CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->Header.Reserved1 >= 0x80u )
    return KeUnInitializeUmsThread();
  else
    return 3221225659LL;
}
