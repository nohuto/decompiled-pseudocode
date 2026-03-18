/*
 * XREFs of MultiUserCleanupDCs @ 0x1C0088B3C
 * Callers:
 *     DrvCleanupAndDestroyMDEV @ 0x1C007B17C (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F598 (-vCleanupDCs@@YAXK@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C00331B0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void MultiUserCleanupDCs()
{
  unsigned int CurrentProcessId; // eax
  GdiHandleManager *v1; // rcx
  GdiHandleEntryDirectory **v2; // rsi
  unsigned int v3; // edi
  int v4; // ebp
  unsigned int v5; // ebx
  unsigned int NextEntryIndex; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  struct _ENTRY *Entry; // rax
  int v10; // edx
  __int64 CurrentProcessWin32Process; // rax
  struct _ENTRY *v12; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v2 = (GdiHandleEntryDirectory **)gpHandleManager;
  v3 = 0;
  v4 = 0;
  v5 = CurrentProcessId & 0xFFFFFFFC;
  if ( gpHandleManager )
  {
    while ( 1 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v1, v3, &v12);
      v3 = NextEntryIndex;
      if ( !NextEntryIndex )
        break;
      v8 = GdiHandleManager::DecodeIndex(v2, NextEntryIndex);
      Entry = GdiHandleEntryDirectory::GetEntry(v2[2], v8, 0);
      v12 = Entry;
      if ( *((_BYTE *)Entry + 14) == 1 )
      {
        v10 = *((_DWORD *)Entry + 2);
        v1 = (GdiHandleManager *)(v10 & 0xFFFFFFFE);
        if ( (_DWORD)v1 != v5 )
        {
          *((_DWORD *)Entry + 2) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)v10) & 1;
          ++v4;
          v2 = (GdiHandleEntryDirectory **)gpHandleManager;
        }
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) += v4;
    vCleanupDCs(v5);
  }
}
