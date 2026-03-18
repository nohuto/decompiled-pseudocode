/*
 * XREFs of HmgNextOwned @ 0x1C004DEA0
 * Callers:
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C001EB10 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C001F3A4 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?vCleanupBrushes@@YAXK@Z @ 0x1C0062D00 (-vCleanupBrushes@@YAXK@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C006EC4C (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007B8E0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1C0085738 (-vCleanupLCSPs@@YAXK@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgNextOwned(int a1, int a2, unsigned __int64 *a3)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  GdiHandleManager *v9; // r14
  unsigned int v10; // esi
  unsigned int v11; // r9d
  unsigned int v12; // eax
  __int64 v13; // rdi
  unsigned int v15; // eax
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // r9

  v5 = a1;
  GreAcquireHmgrSemaphore(a1, a2, (int)a3);
  v9 = gpHandleManager;
  v10 = *(_DWORD *)gpHandleManager;
  while ( ++v5 < v10 )
  {
    v7 = *((_QWORD *)v9 + 2);
    v11 = *(_DWORD *)(v7 + 2056);
    if ( v5 < v11 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
    {
      if ( v5 >= v11 )
        v6 = ((v5 - v11) >> 16) + 1;
      else
        v6 = 0LL;
      v8 = *(_QWORD *)(v7 + 8LL * (unsigned int)v6 + 8);
      if ( (_DWORD)v6 )
        v12 = v5 + ((1 - (_DWORD)v6) << 16) - v11;
      else
        v12 = v5;
      v13 = 0LL;
      if ( v12 < *(_DWORD *)(v8 + 20) )
      {
        v6 = (unsigned __int64)v12 >> 8;
        v7 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8 * v6) + 16LL * (unsigned __int8)v12 + 8);
        if ( v7 )
        {
          LODWORD(v7) = 3 * v12;
          v13 = *(_QWORD *)v8 + 24LL * v12;
        }
      }
      if ( v13 )
      {
        if ( !v5 )
          break;
        if ( *(_BYTE *)(v13 + 14) )
        {
          LODWORD(v7) = a2 & 0xFFFFFFFD ^ *(_DWORD *)(v13 + 8);
          if ( (v7 & 0xFFFFFFFE) == 0 )
          {
            if ( (*(_BYTE *)(v13 + 15) & 0x40) == 0 )
              goto LABEL_16;
            v15 = GdiHandleManager::DecodeIndex(gpHandleManager, v5);
            v16 = *((_QWORD *)v9 + 2);
            v17 = v15;
            LODWORD(v8) = *(_DWORD *)(v16 + 2056);
            if ( v15 >= (unsigned int)v8 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
              goto LABEL_16;
            if ( v15 >= (unsigned int)v8 )
              LODWORD(v7) = ((v15 - (unsigned int)v8) >> 16) + 1;
            else
              LODWORD(v7) = 0;
            v18 = *(_QWORD *)(v16 + 8LL * (unsigned int)v7 + 8);
            if ( (_DWORD)v7 )
              v17 = ((1 - (_DWORD)v7) << 16) - (_DWORD)v8 + v15;
            if ( (unsigned int)v17 >= *(_DWORD *)(v18 + 20) )
            {
              v6 = 0LL;
            }
            else
            {
              LODWORD(v7) = 2 * (unsigned __int8)v17;
              v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
            }
            if ( !v6 || *(_WORD *)(v6 + 12) && *(struct _KTHREAD **)(v6 + 16) == KeGetCurrentThread() )
            {
LABEL_16:
              LODWORD(v7) = (unsigned __int16)v5;
              v6 = (unsigned __int16)v5 | (unsigned __int64)(*(unsigned __int16 *)(v13 + 12) << 16);
              *a3 = v6;
              goto LABEL_18;
            }
          }
        }
      }
    }
  }
  v5 = 0;
LABEL_18:
  GreReleaseHmgrSemaphore(v7, v6, v8);
  return v5;
}
