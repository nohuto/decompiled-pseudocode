/*
 * XREFs of MultiUserCleanupDCs @ 0x1C008C0D0
 * Callers:
 *     DrvCleanupAndDestroyMDEV @ 0x1C008BEA8 (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C004E4E0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0061AE0 (-vCleanupDCs@@YAXK@Z.c)
 */

void MultiUserCleanupDCs()
{
  unsigned int v0; // esi
  int v1; // ebp
  GdiHandleManager *v2; // rcx
  unsigned int v3; // edi
  unsigned int NextEntryIndex; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  GdiHandleManager *v8; // rbx
  unsigned int v9; // eax
  struct _ENTRY *Entry; // rax
  int v11; // edx
  __int64 CurrentProcessWin32Process; // rax
  int v13; // edx
  int v14; // r8d
  struct _ENTRY *v15; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v1 = 0;
  v3 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  if ( gpHandleManager )
  {
    while ( 1 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v2, v0, &v15);
      v0 = NextEntryIndex;
      if ( !NextEntryIndex )
        break;
      v8 = gpHandleManager;
      v9 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, NextEntryIndex);
      Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v8 + 2), v9, 0);
      v15 = Entry;
      if ( *((_BYTE *)Entry + 14) == 1 )
      {
        v11 = *((_DWORD *)Entry + 2);
        v2 = (GdiHandleManager *)(v11 & 0xFFFFFFFE);
        if ( (_DWORD)v2 != v3 )
        {
          *((_DWORD *)Entry + 2) = v3 | v11 & 1;
          ++v1;
        }
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5, v7);
    if ( CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) += v1;
    vCleanupDCs(v3, v13, v14);
  }
}
