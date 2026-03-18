/*
 * XREFs of KeDetachProcess @ 0x140038E40
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x1400B1E40 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess(&CurrentThread->600, 0LL);
}
