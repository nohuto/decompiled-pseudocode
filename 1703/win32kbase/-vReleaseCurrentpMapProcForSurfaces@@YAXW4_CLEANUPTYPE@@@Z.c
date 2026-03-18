/*
 * XREFs of ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C0090C98
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0068EFC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C00331B0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall vReleaseCurrentpMapProcForSurfaces(__int64 a1)
{
  unsigned int NextEntryIndex; // esi
  GdiHandleManager *v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // r9
  unsigned __int64 v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rbx
  __int64 CurrentProcessWin32Process; // rax
  struct _ENTRY *v11; // [rsp+38h] [rbp+10h] BYREF

  if ( (_DWORD)a1 == 2 )
  {
    NextEntryIndex = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        NextEntryIndex = GdiHandleManager::GetNextEntryIndex((GdiHandleManager *)a1, NextEntryIndex, &v11);
        if ( !NextEntryIndex )
          return;
        if ( *((_BYTE *)v11 + 14) == 5 )
        {
          v2 = gpHandleManager;
          v3 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, NextEntryIndex);
          v4 = *((_QWORD *)v2 + 2);
          v5 = v3;
          v6 = *(_DWORD *)(v4 + 2056);
          a1 = v6 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16);
          if ( v3 < (unsigned int)a1 )
            break;
        }
      }
      if ( v3 < v6 )
        break;
      a1 = ((v3 - v6) >> 16) + 1;
      if ( (v3 - v6) >> 16 != -2 )
      {
LABEL_13:
        v7 = *(_QWORD *)(v4 + 8LL * (int)a1 + 8);
        if ( (_DWORD)a1 )
        {
          a1 = (unsigned int)((_DWORD)a1 << 16);
          v5 = (_DWORD)v5 - (_DWORD)a1 - v6 + 0x10000;
        }
        if ( (unsigned int)v5 >= *(_DWORD *)(v7 + 20) )
        {
          v8 = 0LL;
        }
        else
        {
          a1 = 2LL * (unsigned __int8)v5;
          v8 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v7 + 24) + 8 * (v5 >> 8)) + 16LL * (unsigned __int8)v5 + 8);
        }
        if ( v8 && v8[32] )
        {
          v9 = v8[34];
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
          if ( v9 == CurrentProcessWin32Process )
          {
            v8[34] = 0LL;
            v8[33] = 0LL;
          }
        }
      }
    }
    a1 = 0LL;
    goto LABEL_13;
  }
}
