/*
 * XREFs of KeDetachProcess @ 0x1400CE890
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x14000A340 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess((__int64 *)&CurrentThread->600, 0);
}
