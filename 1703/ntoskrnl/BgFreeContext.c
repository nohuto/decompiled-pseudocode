/*
 * XREFs of BgFreeContext @ 0x140755034
 * Callers:
 *     BgkResumeFinished @ 0x140409F64 (BgkResumeFinished.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x140140410 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x140755078 (ResFwFreeContext.c)
 */

void BgFreeContext()
{
  PVOID v0; // rbx

  v0 = Address;
  if ( KeGetCurrentIrql() <= 2u && v0 )
  {
    BgpFwAcquireLock();
    if ( (dword_140341A30 & 1) != 0 )
      ResFwFreeContext(v0);
    BgpFwReleaseLock();
  }
}
