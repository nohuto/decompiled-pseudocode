/*
 * XREFs of BgLibraryDestroy @ 0x14083F8BC
 * Callers:
 *     BgkDestroy @ 0x14083DC74 (BgkDestroy.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14002E450 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 *     BgpFwLibraryDestroy @ 0x14083CFC4 (BgpFwLibraryDestroy.c)
 */

__int64 BgLibraryDestroy()
{
  __int16 v1; // bx
  unsigned int v2; // edi

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  v1 = dword_14039D7F0;
  v2 = 0;
  if ( (dword_14039D7F0 & 1) == 0
    || (qword_14039D950 = 0LL, xmmword_14039D960 = 0LL, v2 = BgpFwLibraryDestroy(), (v1 & 0xC00) != 0xC00) )
  {
    BgpFwReleaseLock();
  }
  return v2;
}
