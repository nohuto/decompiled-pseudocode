/*
 * XREFs of BgMarkHiberPhase @ 0x140755380
 * Callers:
 *     BgkResumePrepare @ 0x14040CFC0 (BgkResumePrepare.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 *     BgpFwMarkHiberPhase @ 0x1407553B8 (BgpFwMarkHiberPhase.c)
 */

__int64 BgMarkHiberPhase()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( (dword_140341A30 & 1) != 0 )
    v0 = BgpFwMarkHiberPhase();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
