/*
 * XREFs of HmgValidHandle @ 0x1C007FB90
 * Callers:
 *     UserValidateCopyRgn @ 0x1C007FB20 (UserValidateCopyRgn.c)
 *     GreValidateServerHandle @ 0x1C007FB80 (GreValidateServerHandle.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HmgValidHandle(unsigned int a1, char a2)
{
  GdiHandleManager *v2; // rbx
  __int16 v4; // edi^2
  unsigned int v5; // eax
  struct _ENTRY *Entry; // rax
  int v7; // r8d

  v2 = gpHandleManager;
  v4 = HIWORD(a1);
  v5 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)gpHandleManager,
         (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v2 + 2), v5, 0);
  if ( Entry && *((_BYTE *)Entry + 14) == a2 && *((_WORD *)Entry + 6) == v4 )
    return (unsigned int)(v7 + 1);
  else
    return 0LL;
}
