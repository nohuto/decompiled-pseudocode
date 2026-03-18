/*
 * XREFs of KeDetachProcess @ 0x140126F10
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x1400BF4A0 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess((struct _KTHREAD *)&CurrentThread->600, 0);
}
