/*
 * XREFs of ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C0040898
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C00BEE38 (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0038E48 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vKill@PFFOBJ@@QEAAXXZ @ 0x1C0038F80 (-vKill@PFFOBJ@@QEAAXXZ.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C0041A18 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     bKillPFFOBJ @ 0x1C0041A4C (bKillPFFOBJ.c)
 *     prfntKillList @ 0x1C0041A78 (prfntKillList.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vKillRFONTList @ 0x1C024BCC0 (vKillRFONTList.c)
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
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // r14
  char *v21; // rdi
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v24 = ghsemPublicPFT;
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
    SEMOBJ::vUnlock((SEMOBJ *)&v24);
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
        v23[0] = v16;
        PFFOBJ::vKill((PFFOBJ *)v23);
        if ( *i == v11 )
          *i = *(_QWORD *)(v11 + 8);
        v12 = *(_QWORD *)(v11 + 8);
        if ( v12 )
          *(_QWORD *)(v12 + 16) = *(_QWORD *)(v11 + 16);
        v13 = *(_QWORD *)(v11 + 16);
        if ( v13 )
          *(_QWORD *)(v13 + 8) = *(_QWORD *)(v11 + 8);
        *(_QWORD *)v7 = v11;
        PFFOBJ::vRemoveHash((PFFOBJ *)v23);
        v14 = *(_QWORD *)this;
        if ( !v10 )
          ++*(_DWORD *)(v14 + 32);
        --*(_DWORD *)(v14 + 28);
        v15 = prfntKillList(v23);
        *((_QWORD *)v7 + 1) = v15;
        if ( !v15 )
          *((_DWORD *)v7 + 10) = bKillPFFOBJ(v23, v7 + 16);
        v7 += 48;
        v16 = v9;
      }
      while ( v9 );
    }
    v6 = *(_QWORD *)this;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  v18 = (unsigned __int128)((v7 - v5) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v19 = 0LL;
  v20 = (v7 - v5) / 48;
  if ( (_DWORD)v20 )
  {
    v21 = v5 + 8;
    do
    {
      v18 = *(_QWORD *)v21;
      if ( *(_QWORD *)v21 )
      {
        v23[0] = *((_QWORD *)v21 - 1);
        vKillRFONTList((PFFOBJ *)v23);
      }
      else if ( *((_DWORD *)v21 + 8) )
      {
        vCleanupFontFile((struct PFFCLEANUP *)&v5[48 * v19 + 16]);
      }
      v19 = (unsigned int)(v19 + 1);
      v21 += 48;
    }
    while ( (unsigned int)v19 < (unsigned int)v20 );
  }
  if ( v2 )
    Win32FreePool(v5, v18, v17);
  return v3;
}
