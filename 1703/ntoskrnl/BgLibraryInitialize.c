/*
 * XREFs of BgLibraryInitialize @ 0x140756130
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140405BB8 (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x140407064 (PopRestoreHiberContext.c)
 *     BgkInitialize @ 0x14083795C (BgkInitialize.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x140140410 (KeGetCurrentIrql.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize();
  else
    return 3221225473LL;
}
