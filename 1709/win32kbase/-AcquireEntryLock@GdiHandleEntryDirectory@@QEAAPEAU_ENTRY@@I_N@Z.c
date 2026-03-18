/*
 * XREFs of ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E710
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004B990 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C004E570 (-ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C00A9D9C (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 * Callees:
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C004E630 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E8D0 (-AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

struct _ENTRY *__fastcall GdiHandleEntryDirectory::AcquireEntryLock(
        GdiHandleEntryDirectory *this,
        unsigned int a2,
        bool a3)
{
  struct GdiHandleEntryTable *v5; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(this, a2, &v5, &v6) )
    return GdiHandleEntryTable::AcquireEntryLock(v5, v6, a3);
  else
    return 0LL;
}
