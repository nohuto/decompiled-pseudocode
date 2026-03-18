/*
 * XREFs of ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C00336B0
 * Callers:
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0031288 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 * Callees:
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0033470 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryTable@@QEAAXI_N@Z @ 0x1C0033874 (-ReleaseLockAndEntry@GdiHandleEntryTable@@QEAAXI_N@Z.c)
 */

void __fastcall GdiHandleEntryDirectory::ReleaseLockAndEntry(GdiHandleEntryDirectory *this, unsigned int a2, bool a3)
{
  GdiHandleEntryTable *v5; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(this, a2, &v5, &v6) )
  {
    GdiHandleEntryTable::ReleaseLockAndEntry(v5, v6, a3);
    *(_BYTE *)this = 0;
  }
}
