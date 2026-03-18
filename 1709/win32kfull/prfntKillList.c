/*
 * XREFs of prfntKillList @ 0x1C0041A78
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00406F0 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C0040898 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00354E0 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0035590 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C003D7B8 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C003D7D8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C003D7F8 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

unsigned __int64 __fastcall prfntKillList(__int64 *a1)
{
  unsigned __int64 v2; // rdi
  struct PDEV *v3; // rbx
  __int64 v5; // rdx
  struct RFONT *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rcx
  struct RFONT *v9; // rax
  struct PDEV *v10; // rdx
  __int64 v11; // rdx
  struct RFONT *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  struct RFONT *v15; // rax
  struct PDEV *v16; // rdx
  int v17; // ecx
  unsigned __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  struct RFONT *v21; // [rsp+78h] [rbp+38h] BYREF
  struct PDEV *v22; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0LL;
  v23 = 0LL;
  v20 = ghsemDriverMgmt;
  GreAcquireSemaphore(ghsemDriverMgmt);
  v19 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  GreAcquireHmgrSemaphore();
  v3 = gppdevList;
  if ( gppdevList )
  {
    do
    {
      if ( (*((_DWORD *)v3 + 8) & 1) != 0 )
      {
        v22 = v3;
        v6 = PDEVOBJ::prfntActive((PDEVOBJ *)&v22);
        while ( v6 )
        {
          v8 = *a1;
          v9 = v6;
          v6 = (struct RFONT *)*((_QWORD *)v6 + 63);
          v21 = v9;
          if ( *((_QWORD *)v9 + 15) == v8 && !*((_DWORD *)v9 + 123) )
          {
            v18 = *(_QWORD *)(v8 + 72);
            RFONTOBJ::vRemove((__int64)&v21, &v18, 0);
            *(_QWORD *)(*a1 + 72) = v18;
            if ( (*((_DWORD *)v3 + 8) & 0x800000) != 0 )
              v10 = (struct PDEV *)*((_QWORD *)v3 + 442);
            else
              v10 = v3;
            RFONTOBJ::vRemove((__int64)&v21, (unsigned __int64 *)v10 + 191, 1);
            RFONTOBJ::vInsert(&v21, &v23, 1);
          }
          v21 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21, v5, v7);
        }
        v12 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v22);
        while ( v12 )
        {
          v14 = *a1;
          v15 = v12;
          v12 = (struct RFONT *)*((_QWORD *)v12 + 63);
          v21 = v15;
          if ( *((_QWORD *)v15 + 15) == v14 )
          {
            v18 = *(_QWORD *)(v14 + 72);
            RFONTOBJ::vRemove((__int64)&v21, &v18, 0);
            *(_QWORD *)(*a1 + 72) = v18;
            if ( (*((_DWORD *)v3 + 8) & 0x800000) != 0 )
              v16 = (struct PDEV *)*((_QWORD *)v3 + 442);
            else
              v16 = v3;
            RFONTOBJ::vRemove((__int64)&v21, (unsigned __int64 *)v16 + 192, 1);
            RFONTOBJ::vInsert(&v21, &v23, 1);
            v17 = PDEVOBJ::cInactive((PDEVOBJ *)&v22) - 1;
            if ( (*((_DWORD *)v3 + 8) & 0x800000) != 0 )
              *(_DWORD *)(*((_QWORD *)v3 + 442) + 1544LL) = v17;
            else
              *((_DWORD *)v3 + 386) = v17;
          }
          v21 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21, v11, v13);
        }
      }
      v3 = *(struct PDEV **)v3;
    }
    while ( v3 );
    v2 = v23;
  }
  GreReleaseHmgrSemaphore();
  SEMOBJ::vUnlock((SEMOBJ *)&v19);
  SEMOBJ::vUnlock((SEMOBJ *)&v20);
  return v2;
}
