/*
 * XREFs of ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C00C406C
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C006127C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C002BD90 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall MultiUserGreCleanupHmgRemoveAllLocks(GdiHandleManager *a1)
{
  char v1; // bp
  unsigned int NextEntryIndex; // esi
  struct _ENTRY *v3; // rdi
  unsigned __int8 v4; // al
  GdiHandleManager *v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rdx
  char v12; // al
  struct _ENTRY *v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = (char)a1;
  NextEntryIndex = 0;
  while ( 1 )
  {
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex(a1, NextEntryIndex, &v13);
    if ( !NextEntryIndex )
      break;
    v3 = v13;
    if ( v1 )
    {
      if ( v1 == *((_BYTE *)v13 + 14) )
      {
LABEL_8:
        v5 = gpHandleManager;
        v6 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, NextEntryIndex);
        v7 = *((_QWORD *)v5 + 2);
        v8 = v6;
        v9 = *(_DWORD *)(v7 + 2056);
        a1 = (GdiHandleManager *)(v9 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16));
        if ( v6 >= (unsigned int)a1 )
          goto LABEL_16;
        if ( v6 >= v9 )
          a1 = (GdiHandleManager *)(((v6 - v9) >> 16) + 1);
        else
          a1 = 0LL;
        v10 = *(_QWORD *)(v7 + 8LL * (unsigned int)a1 + 8);
        if ( (_DWORD)a1 )
          v8 = v6 + ((1 - (_DWORD)a1) << 16) - v9;
        if ( (unsigned int)v8 >= *(_DWORD *)(v10 + 20) )
        {
LABEL_16:
          v11 = 0LL;
        }
        else
        {
          a1 = (GdiHandleManager *)(2LL * (unsigned __int8)v8);
          v11 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * (v8 >> 8)) + 16LL * (unsigned __int8)v8 + 8);
        }
        *(_DWORD *)(v11 + 8) = 0;
        *(_WORD *)(v11 + 12) = 0;
        *(_QWORD *)(v11 + 16) = 0LL;
        *((_DWORD *)v3 + 2) &= ~1u;
        *((_BYTE *)v3 + 15) &= ~1u;
        v12 = *((_BYTE *)v3 + 15);
        if ( (v12 & 0x20) != 0 )
        {
          *((_QWORD *)v3 + 2) = 0LL;
          v12 = *((_BYTE *)v3 + 15);
        }
        *((_BYTE *)v3 + 15) = v12 & 0xDF;
      }
    }
    else
    {
      v4 = *((_BYTE *)v13 + 14);
      if ( v4 && v4 <= 0x1Eu )
        goto LABEL_8;
    }
  }
}
