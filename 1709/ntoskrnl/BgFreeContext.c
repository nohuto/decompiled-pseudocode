/*
 * XREFs of BgFreeContext @ 0x1407D2E4C
 * Callers:
 *     BgkResumeFinished @ 0x14042A5B8 (BgkResumeFinished.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400E2700 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14013B974 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14013B9B8 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x1407D3A5C (ResFwFreeContext.c)
 */

void BgFreeContext()
{
  PVOID v0; // rbx

  v0 = Address;
  if ( KeGetCurrentIrql() <= 2u && v0 )
  {
    BgpFwAcquireLock();
    if ( (dword_14035A1B0 & 1) != 0 )
      ResFwFreeContext(v0);
    BgpFwReleaseLock();
  }
}
