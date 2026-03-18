/*
 * XREFs of BgLibraryInitialize @ 0x14083B9D0
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140472BF4 (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x1404734E4 (PopRestoreHiberContext.c)
 *     BgkInitialize @ 0x1408E447C (BgkInitialize.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14002E450 (KeGetCurrentIrql.c)
 *     BgpFwLibraryInitialize @ 0x14083B9FC (BgpFwLibraryInitialize.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize();
  else
    return 3221225473LL;
}
