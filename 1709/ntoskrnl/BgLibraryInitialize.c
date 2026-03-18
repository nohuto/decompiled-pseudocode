/*
 * XREFs of BgLibraryInitialize @ 0x1407D088C
 * Callers:
 *     PopRestoreHiberContext @ 0x140434AE0 (PopRestoreHiberContext.c)
 *     PopInvokeSystemStateHandler @ 0x140439AE4 (PopInvokeSystemStateHandler.c)
 *     BgkInitialize @ 0x14086FB18 (BgkInitialize.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400E2700 (KeGetCurrentIrql.c)
 *     BgpFwLibraryInitialize @ 0x1407D01A4 (BgpFwLibraryInitialize.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, unsigned int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize(a1, a2);
  else
    return 3221225473LL;
}
