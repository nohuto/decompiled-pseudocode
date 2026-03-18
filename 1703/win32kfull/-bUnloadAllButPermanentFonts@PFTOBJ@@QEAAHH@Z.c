/*
 * XREFs of ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C002A6D4
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C0008634 (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C002C614 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vKill@PFFOBJ@@QEAAXXZ @ 0x1C002C74C (-vKill@PFFOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     prfntKillList @ 0x1C0103FFC (prfntKillList.c)
 *     bKillPFFOBJ @ 0x1C010B5E8 (bKillPFFOBJ.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C010C850 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     vKillRFONTList @ 0x1C024A3B8 (vKillRFONTList.c)
 */

__int64 __fastcall PFTOBJ::bUnloadAllButPermanentFonts(PFTOBJ *this)
{
  int v2; // r13d
  unsigned int v3; // ebx
  unsigned int v4; // edx
  char *v5; // rsi
  __int64 v6; // rcx
  char *v7; // r14
  __int64 *i; // rdi
  __int64 v9; // r12
  int v10; // ebp
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rbp
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r14
  char *v20; // rdi
  _QWORD v22[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v23 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v3 = 1;
  v4 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  if ( !v4 )
    goto LABEL_30;
  if ( v4 > 0x40 )
  {
    v5 = (char *)PALLOCMEM2(48 * v4);
    if ( v5 )
    {
      v2 = 1;
      goto LABEL_5;
    }
    v3 = 0;
LABEL_30:
    SEMOBJ::vUnlock((SEMOBJ *)&v23);
    return v3;
  }
  v5 = (char *)&gFntVict;
LABEL_5:
  v6 = *(_QWORD *)this;
  v7 = v5;
  for ( i = (__int64 *)(*(_QWORD *)this + 40LL);
        (unsigned __int64)i < v6 + 8 * (unsigned __int64)*(unsigned int *)(v6 + 24) + 40;
        ++i )
  {
    v16 = *i;
    if ( *i )
    {
      do
      {
        v9 = *(_QWORD *)(v16 + 8);
        v10 = *(_DWORD *)(v16 + 52) & 0x200;
        *(_DWORD *)(v16 + 56) = 0;
        *(_DWORD *)(v16 + 60) = 0;
        v22[0] = v16;
        PFFOBJ::vKill((PFFOBJ *)v22);
        if ( *i == v11 )
          *i = *(_QWORD *)(v11 + 8);
        v12 = *(_QWORD *)(v11 + 8);
        if ( v12 )
          *(_QWORD *)(v12 + 16) = *(_QWORD *)(v11 + 16);
        v13 = *(_QWORD *)(v11 + 16);
        if ( v13 )
          *(_QWORD *)(v13 + 8) = *(_QWORD *)(v11 + 8);
        *(_QWORD *)v7 = v11;
        PFFOBJ::vRemoveHash((PFFOBJ *)v22);
        v14 = *(_QWORD *)this;
        if ( !v10 )
          ++*(_DWORD *)(v14 + 32);
        --*(_DWORD *)(v14 + 28);
        v15 = prfntKillList(v22);
        *((_QWORD *)v7 + 1) = v15;
        if ( !v15 )
          *((_DWORD *)v7 + 10) = bKillPFFOBJ(v22, v7 + 16);
        v7 += 48;
        v16 = v9;
      }
      while ( v9 );
    }
    v6 = *(_QWORD *)this;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v23);
  v17 = 0LL;
  v18 = (__int64)((unsigned __int128)((v7 - v5) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v19 = (v18 >> 63) + v18;
  if ( (_DWORD)v19 )
  {
    v20 = v5 + 8;
    do
    {
      if ( *(_QWORD *)v20 )
      {
        v22[0] = *((_QWORD *)v20 - 1);
        vKillRFONTList((PFFOBJ *)v22);
      }
      else if ( *((_DWORD *)v20 + 8) )
      {
        vCleanupFontFile((struct PFFCLEANUP *)&v5[48 * v17 + 16]);
      }
      v17 = (unsigned int)(v17 + 1);
      v20 += 48;
    }
    while ( (unsigned int)v17 < (unsigned int)v19 );
  }
  if ( v2 )
    Win32FreePool(v5);
  return v3;
}
