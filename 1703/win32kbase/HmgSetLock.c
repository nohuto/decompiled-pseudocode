/*
 * XREFs of HmgSetLock @ 0x1C007E994
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F598 (-vCleanupDCs@@YAXK@Z.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0068EFC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HmgSetLock(unsigned int a1)
{
  GdiHandleEntryDirectory **v1; // r14
  __int16 v2; // edi^2
  __int64 v3; // rbp
  unsigned int v4; // esi
  unsigned int v5; // eax
  struct _ENTRY *Entry; // rax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // r8d
  unsigned __int64 v10; // rdx
  signed int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx

  v1 = (GdiHandleEntryDirectory **)gpHandleManager;
  v2 = HIWORD(a1);
  v3 = *((_QWORD *)gpHandleManager + 2);
  v4 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  v5 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v4);
  Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v3, v5, 0);
  v7 = (unsigned int)Entry;
  if ( Entry && *((_WORD *)Entry + 6) == v2 )
  {
    v8 = GdiHandleManager::DecodeIndex(v1, v4);
    v9 = *(_DWORD *)(v3 + 2056);
    v10 = v8;
    if ( v8 < v9 + ((*(unsigned __int16 *)(v3 + 2) + 0xFFFF) << 16) )
    {
      if ( v8 >= v9 )
      {
        v11 = ((v8 - v9) >> 16) + 1;
        if ( (v8 - v9) >> 16 == -2 )
          goto LABEL_12;
      }
      else
      {
        v11 = 0;
      }
      v12 = *(_QWORD *)(v3 + 8LL * v11 + 8);
      if ( v11 )
        v10 = (_DWORD)v10 - (v11 << 16) - v9 + 0x10000;
      if ( (unsigned int)v10 < *(_DWORD *)(v12 + 20) )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
LABEL_13:
        *(_WORD *)(v13 + 12) = 0;
        return v7;
      }
    }
LABEL_12:
    v13 = 0LL;
    goto LABEL_13;
  }
  return 0;
}
