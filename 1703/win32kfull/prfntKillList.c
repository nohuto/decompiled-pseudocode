/*
 * XREFs of prfntKillList @ 0x1C0103FFC
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C002A52C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C002A6D4 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0032694 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00326B4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C00326D4 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C008F5E0 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C008F678 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 */

__int64 __fastcall prfntKillList(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct PDEV *v5; // rbx
  struct RFONT *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rdx
  struct RFONT *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rdx
  int v15; // ecx
  __int64 v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h] BYREF
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+78h] [rbp+38h] BYREF
  struct PDEV *v20; // [rsp+80h] [rbp+40h] BYREF
  __int64 v21; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0LL;
  v21 = 0LL;
  v18 = ghsemDriverMgmt;
  GreAcquireSemaphore(ghsemDriverMgmt);
  v17 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  GreAcquireHmgrSemaphore(v4, v3);
  v5 = gppdevList;
  if ( gppdevList )
  {
    do
    {
      if ( (*((_DWORD *)v5 + 8) & 1) != 0 )
      {
        v20 = v5;
        v7 = PDEVOBJ::prfntActive((PDEVOBJ *)&v20);
        while ( v7 )
        {
          v8 = *a1;
          v9 = (__int64)v7;
          v7 = (struct RFONT *)*((_QWORD *)v7 + 63);
          v19 = v9;
          if ( *(_QWORD *)(v9 + 120) == v8 && !*(_DWORD *)(v9 + 492) )
          {
            v16 = *(_QWORD *)(v8 + 72);
            RFONTOBJ::vRemove((__int64)&v19, &v16, 0);
            *(_QWORD *)(*a1 + 72) = v16;
            if ( (*((_DWORD *)v5 + 8) & 0x800000) != 0 )
              v10 = (_QWORD *)(*((_QWORD *)v5 + 442) + 1528LL);
            else
              v10 = (_QWORD *)((char *)v5 + 1528);
            RFONTOBJ::vRemove((__int64)&v19, v10, 1);
            RFONTOBJ::vInsert(&v19, &v21, 1);
          }
          v19 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
        }
        v11 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v20);
        while ( v11 )
        {
          v12 = *a1;
          v13 = (__int64)v11;
          v11 = (struct RFONT *)*((_QWORD *)v11 + 63);
          v19 = v13;
          if ( *(_QWORD *)(v13 + 120) == v12 )
          {
            v16 = *(_QWORD *)(v12 + 72);
            RFONTOBJ::vRemove((__int64)&v19, &v16, 0);
            *(_QWORD *)(*a1 + 72) = v16;
            if ( (*((_DWORD *)v5 + 8) & 0x800000) != 0 )
              v14 = (_QWORD *)(*((_QWORD *)v5 + 442) + 1536LL);
            else
              v14 = (_QWORD *)((char *)v5 + 1536);
            RFONTOBJ::vRemove((__int64)&v19, v14, 1);
            RFONTOBJ::vInsert(&v19, &v21, 1);
            v15 = PDEVOBJ::cInactive((PDEVOBJ *)&v20) - 1;
            if ( (*((_DWORD *)v5 + 8) & 0x800000) != 0 )
              *(_DWORD *)(*((_QWORD *)v5 + 442) + 1544LL) = v15;
            else
              *((_DWORD *)v5 + 386) = v15;
          }
          v19 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
        }
      }
      v5 = *(struct PDEV **)v5;
    }
    while ( v5 );
    v2 = v21;
  }
  GreReleaseHmgrSemaphore();
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  SEMOBJ::vUnlock((SEMOBJ *)&v18);
  return v2;
}
