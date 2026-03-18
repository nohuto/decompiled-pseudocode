/*
 * XREFs of BgGetContext @ 0x1407D2E90
 * Callers:
 *     BgkResumePrepare @ 0x14042A5F4 (BgkResumePrepare.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400E2700 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14013B974 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14013B9B8 (BgpFwAcquireLock.c)
 *     ResFwGetContext @ 0x1407D3B2C (ResFwGetContext.c)
 */

__int64 BgGetContext()
{
  __int64 v1; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( KeGetCurrentIrql() > 2u )
    return 0LL;
  v1 = 0LL;
  v2 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_14035A1B0 & 1) != 0 )
  {
    ResFwGetContext(&v2);
    v1 = v2;
  }
  BgpFwReleaseLock();
  return v1;
}
