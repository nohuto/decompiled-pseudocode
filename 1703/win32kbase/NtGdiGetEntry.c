/*
 * XREFs of NtGdiGetEntry @ 0x1C008D090
 * Callers:
 *     <none>
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall NtGdiGetEntry(unsigned int a1, unsigned __int64 a2)
{
  GdiHandleManager *v3; // rbx
  unsigned int v4; // eax
  struct _ENTRY *Entry; // r8

  v3 = gpHandleManager;
  v4 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, a1);
  Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v3 + 2), v4, 0);
  if ( !Entry )
    return 3221225473LL;
  if ( a2 + 24 > (unsigned __int64)W32UserProbeAddress || a2 + 24 <= a2 )
    *(_BYTE *)W32UserProbeAddress = 0;
  *(_OWORD *)a2 = *(_OWORD *)Entry;
  *(_QWORD *)(a2 + 16) = *((_QWORD *)Entry + 2);
  return 0LL;
}
