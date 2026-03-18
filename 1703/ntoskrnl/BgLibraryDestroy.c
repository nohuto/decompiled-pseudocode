/*
 * XREFs of BgLibraryDestroy @ 0x140759D10
 * Callers:
 *     BgkDestroy @ 0x140758A14 (BgkDestroy.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x140140410 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDestroy @ 0x140758A70 (BgpFwLibraryDestroy.c)
 */

__int64 BgLibraryDestroy()
{
  __int16 v1; // bx
  unsigned int v2; // edi

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  v1 = dword_140341A30;
  if ( (dword_140341A30 & 1) == 0 )
  {
    v2 = 0;
LABEL_6:
    BgpFwReleaseLock();
    return v2;
  }
  qword_140341B80 = 0LL;
  xmmword_140341B90 = 0LL;
  v2 = BgpFwLibraryDestroy();
  if ( (v1 & 0xC00) != 0xC00 )
    goto LABEL_6;
  return v2;
}
