/*
 * XREFs of ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00406F0
 * Callers:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00405F0 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     vCleanupPrivateFonts @ 0x1C00B0DF0 (vCleanupPrivateFonts.c)
 *     PFTOBJ_bUnloadWorkhorseWrap @ 0x1C024BE30 (PFTOBJ_bUnloadWorkhorseWrap.c)
 *     GreRemoveFontMemResourceEx @ 0x1C026A55C (GreRemoveFontMemResourceEx.c)
 *     GreRemoveFontResourceW @ 0x1C026A618 (GreRemoveFontResourceW.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x1C028877C (-bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0038E48 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x1C0038FC8 (-bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C0041A18 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     bKillPFFOBJ @ 0x1C0041A4C (bKillPFFOBJ.c)
 *     prfntKillList @ 0x1C0041A78 (prfntKillList.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00AF968 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     vKillRFONTList @ 0x1C024BCC0 (vKillRFONTList.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02944AC (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall PFTOBJ::bUnloadWorkhorse(PFTOBJ *this, struct PFF *a2, struct PFF **a3, int a4)
{
  struct PFF *v4; // rsi
  unsigned int v5; // edi
  int v10; // eax
  struct tagPvtData *v11; // r8
  int v13; // r12d
  int v14; // r12d
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD v18[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v19[32]; // [rsp+50h] [rbp-20h] BYREF
  struct PFF **v20; // [rsp+A8h] [rbp+38h] BYREF

  v4 = 0LL;
  v5 = 0;
  if ( !a2 )
    goto LABEL_6;
  v10 = *((_DWORD *)a2 + 13);
  v11 = 0LL;
  v18[0] = a2;
  if ( (v10 & 1) != 0 )
  {
    v5 = 1;
    if ( *((_DWORD *)a2 + 14) || *((_DWORD *)a2 + 15) || *((_QWORD *)a2 + 20) || *((_DWORD *)a2 + 16) )
      goto LABEL_6;
    v4 = a2;
  }
  else
  {
    if ( *(struct PFT **const *)this == gpPFTPrivate )
    {
      v11 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v18);
      if ( !v11 )
        goto LABEL_6;
    }
    LODWORD(v20) = 0;
    v5 = 1;
    if ( (unsigned int)PFFOBJ::bDeleteLoadRef((PFFOBJ *)v18, a4, v11, (int *)&v20) )
    {
      PFFOBJ::vRemoveHash((PFFOBJ *)v18);
      v13 = *((_DWORD *)a2 + 13);
      if ( !*((_DWORD *)a2 + 16) )
        v4 = a2;
      v20 = a3;
      v14 = v13 & 0x200;
      if ( !a3 )
      {
        PUBLIC_PFTOBJ::pPFFGet(
          this,
          *((unsigned __int16 **)a2 + 3),
          *((_DWORD *)a2 + 8),
          *((_DWORD *)a2 + 9),
          *((struct tagDESIGNVECTOR **)a2 + 5),
          *((_DWORD *)a2 + 12),
          &v20,
          0);
        a3 = v20;
      }
      if ( *a3 == a2 )
        *a3 = (struct PFF *)*((_QWORD *)a2 + 1);
      v15 = *((_QWORD *)a2 + 1);
      if ( v15 )
        *(_QWORD *)(v15 + 16) = *((_QWORD *)a2 + 2);
      v16 = *((_QWORD *)a2 + 2);
      if ( v16 )
        *(_QWORD *)(v16 + 8) = *((_QWORD *)a2 + 1);
      v17 = *(_QWORD *)this;
      if ( !v14 )
        ++*(_DWORD *)(v17 + 32);
      --*(_DWORD *)(v17 + 28);
    }
    else
    {
      if ( *(struct PFT **const *)this != gpPFTPrivate || !(_DWORD)v20 )
        goto LABEL_6;
      v5 = 0;
    }
  }
  if ( !v4 )
  {
LABEL_6:
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
    return v5;
  }
  v18[0] = v4;
  if ( prfntKillList(v18) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
    vKillRFONTList((PFFOBJ *)v18);
  }
  else if ( (unsigned int)bKillPFFOBJ(v18, v19) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
    vCleanupFontFile((struct PFFCLEANUP *)v19);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  return 1;
}
