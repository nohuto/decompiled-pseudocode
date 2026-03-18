/*
 * XREFs of HmgNextOwned @ 0x1C0032D20
 * Callers:
 *     ?vCleanupBrushes@@YAXK@Z @ 0x1C00587A4 (-vCleanupBrushes@@YAXK@Z.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0068EFC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C0077FC8 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0080354 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C0080794 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1C0080814 (-vCleanupLCSPs@@YAXK@Z.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgNextOwned(unsigned int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax

  GreAcquireHmgrSemaphore();
  while ( ++a1 < *(_DWORD *)gpHandleManager )
  {
    v7 = *((_QWORD *)gpHandleManager + 2);
    v8 = *(unsigned int *)(v7 + 2056);
    if ( a1 < (unsigned int)v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
    {
      if ( a1 >= (unsigned int)v8 )
      {
        v6 = ((a1 - (unsigned int)v8) >> 16) + 1;
        if ( (a1 - (unsigned int)v8) >> 16 != -2 )
          goto LABEL_6;
      }
      else
      {
        v6 = 0LL;
LABEL_6:
        v9 = *(_QWORD *)(v7 + 8LL * (int)v6 + 8);
        v10 = a1;
        if ( (_DWORD)v6 )
        {
          v6 = (unsigned int)((_DWORD)v6 << 16);
          v10 = a1 - v6 - v8 + 0x10000;
        }
        v8 = 0LL;
        if ( v10 < *(_DWORD *)(v9 + 20) )
        {
          v6 = (unsigned __int64)v10 >> 8;
          v7 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * v6) + 16LL * (unsigned __int8)v10 + 8);
          if ( v7 )
          {
            v7 = 3LL * v10;
            v8 = *(_QWORD *)v9 + 24LL * v10;
          }
        }
        if ( v8 )
        {
          if ( !a1 )
            break;
          if ( *(_BYTE *)(v8 + 14) )
          {
            v7 = a2 & 0xFFFFFFFD ^ *(_DWORD *)(v8 + 8);
            if ( (v7 & 0xFFFFFFFE) == 0 )
            {
              v7 = (unsigned __int16)a1;
              v6 = (unsigned __int16)a1 | (unsigned __int64)(*(unsigned __int16 *)(v8 + 12) << 16);
              *a3 = v6;
              goto LABEL_17;
            }
          }
        }
      }
    }
  }
  a1 = 0;
LABEL_17:
  GreReleaseHmgrSemaphore(v7, v6, v8);
  return a1;
}
