/*
 * XREFs of BgFreeContext @ 0x14083B034
 * Callers:
 *     BgkResumeFinished @ 0x1404767D0 (BgkResumeFinished.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14002E450 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x14083B078 (ResFwFreeContext.c)
 */

void BgFreeContext()
{
  PVOID v0; // rbx

  v0 = Address;
  if ( KeGetCurrentIrql() <= 2u && v0 )
  {
    BgpFwAcquireLock();
    if ( (dword_14039D7F0 & 1) != 0 )
      ResFwFreeContext(v0);
    BgpFwReleaseLock();
  }
}
