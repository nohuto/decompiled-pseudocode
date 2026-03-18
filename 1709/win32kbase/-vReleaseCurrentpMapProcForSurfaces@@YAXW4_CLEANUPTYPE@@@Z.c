/*
 * XREFs of ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C0099CDC
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007B8E0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C004E4E0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall vReleaseCurrentpMapProcForSurfaces(__int64 a1)
{
  unsigned int NextEntryIndex; // esi
  GdiHandleManager *v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // r9
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // cl
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  struct _ENTRY *v12; // [rsp+38h] [rbp+10h] BYREF

  if ( (_DWORD)a1 == 2 )
  {
    NextEntryIndex = 0;
    while ( 1 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex((GdiHandleManager *)a1, NextEntryIndex, &v12);
      if ( !NextEntryIndex )
        break;
      if ( *((_BYTE *)v12 + 14) == 5 )
      {
        v2 = gpHandleManager;
        v3 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, NextEntryIndex);
        v4 = *((_QWORD *)v2 + 2);
        v5 = v3;
        v6 = *(unsigned int *)(v4 + 2056);
        a1 = (unsigned int)v6 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16);
        if ( v3 < (unsigned int)a1 )
        {
          if ( v3 >= (unsigned int)v6 )
            a1 = ((v3 - (unsigned int)v6) >> 16) + 1;
          else
            a1 = 0LL;
          v7 = *(_QWORD *)(v4 + 8LL * (unsigned int)a1 + 8);
          if ( (_DWORD)a1 )
            v5 = ((1 - (_DWORD)a1) << 16) - (_DWORD)v6 + v3;
          if ( (unsigned int)v5 >= *(_DWORD *)(v7 + 20) )
          {
            v9 = 0LL;
          }
          else
          {
            v8 = v5;
            v5 >>= 8;
            a1 = 2LL * v8;
            v9 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v7 + 24) + 8 * v5) + 8 * a1 + 8);
          }
          if ( v9 && v9[32] )
          {
            v10 = v9[34];
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, v5, v6);
            if ( v10 == CurrentProcessWin32Process )
            {
              v9[34] = 0LL;
              v9[33] = 0LL;
            }
          }
        }
      }
    }
  }
}
