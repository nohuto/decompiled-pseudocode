/*
 * XREFs of BgLibraryDestroy @ 0x1407D2EDC
 * Callers:
 *     BgkDestroy @ 0x1407D0D0C (BgkDestroy.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400E2700 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14013B974 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14013B9B8 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDestroy @ 0x1407D0C28 (BgpFwLibraryDestroy.c)
 */

__int64 BgLibraryDestroy()
{
  __int16 v1; // bx
  unsigned int v2; // edi

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  v1 = dword_14035A1B0;
  v2 = 0;
  if ( (dword_14035A1B0 & 1) == 0
    || (qword_14035A300 = 0LL, xmmword_14035A310 = 0LL, v2 = BgpFwLibraryDestroy(), (v1 & 0xC00) != 0xC00) )
  {
    BgpFwReleaseLock();
  }
  return v2;
}
