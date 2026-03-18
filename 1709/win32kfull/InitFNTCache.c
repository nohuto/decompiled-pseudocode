/*
 * XREFs of InitFNTCache @ 0x1C00C0ED0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     vGetLastBootTimeStatus @ 0x1C00BF1E8 (vGetLastBootTimeStatus.c)
 *     bServicingStackModifiedFonts @ 0x1C00BF23C (bServicingStackModifiedFonts.c)
 *     bSetFntCacheReg @ 0x1C00BF290 (bSetFntCacheReg.c)
 *     QueryFontReg @ 0x1C00C11CC (QueryFontReg.c)
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00C1278 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     bFntCacheDisabled @ 0x1C00C12E0 (bFntCacheDisabled.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00C1AB0 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     ComputeFileviewCheckSum @ 0x1C00C1D10 (ComputeFileviewCheckSum.c)
 *     ?bMapFileRetainHandle@@YAHPEAGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00C1D80 (-bMapFileRetainHandle@@YAHPEAGPEAU_FILEVIEW@@HPEAH@Z.c)
 *     vGetFontDriverLWT @ 0x1C00C1E60 (vGetFontDriverLWT.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     bInitCacheTable @ 0x1C0142C64 (bInitCacheTable.c)
 */

void InitFNTCache()
{
  int v0; // ebx
  __int64 v1; // r9
  int FontReg; // eax
  int v3; // r12d
  unsigned __int16 *v4; // rcx
  int *v5; // r9
  _DWORD *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rbx
  int v11; // edx
  _DWORD *v12; // r15
  int v13; // ecx
  char v14; // r10
  _DWORD *v15; // r8
  unsigned __int64 v16; // rdx
  BOOL v17; // eax
  int v18; // eax
  int inited; // eax
  int v20; // ecx
  __int64 v21; // [rsp+40h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h]
  __int64 v24; // [rsp+58h] [rbp-20h]
  _QWORD v25[3]; // [rsp+60h] [rbp-18h] BYREF
  USHORT AnsiCodePage; // [rsp+C0h] [rbp+48h] BYREF
  USHORT OemCodePage; // [rsp+C8h] [rbp+50h] BYREF
  int v28; // [rsp+D0h] [rbp+58h]
  int v29; // [rsp+D8h] [rbp+60h]

  v0 = 0;
  v24 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v25[0] = ghsemFntCache;
  v21 = 0LL;
  v28 = 0;
  v29 = 0;
  GreAcquireSemaphore(ghsemFntCache);
  dword_1C0327740 = 0;
  if ( (int)GetGreRegKey(
              &ghkeyGreInitialize,
              0xC0000000,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize") < 0
    || (unsigned int)bFntCacheDisabled() )
  {
    goto LABEL_30;
  }
  qword_1C0327748 = (__int64)PALLOCMEM2(0x88uLL, 1128682580LL, 1);
  v1 = qword_1C0327748;
  if ( !qword_1C0327748 )
    goto LABEL_19;
  if ( G_fConsole )
  {
    v17 = bSetFntCacheReg(0, 1);
    v1 = qword_1C0327748;
    if ( !v17 )
      goto LABEL_19;
  }
  *(_QWORD *)v1 = 0LL;
  *(_DWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 48) = 0;
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  vGetLastBootTimeStatus();
  vGetFontDriverLWT(&v22, &v21);
  FontReg = QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Fonts");
  v3 = v28;
  if ( FontReg )
  {
    v3 = v28 + 40;
    QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Type 1 Installer\\Type 1 Fonts");
    v0 = v29;
  }
  if ( (unsigned int)bServicingStackModifiedFonts()
    || !bMapFileRetainHandle(v4, (struct _FILEVIEW *)(qword_1C0327748 + 56), 0, v5) )
  {
    v1 = qword_1C0327748;
  }
  else
  {
    v1 = qword_1C0327748;
    *(_QWORD *)qword_1C0327748 = *(_QWORD *)(qword_1C0327748 + 64);
  }
  v6 = *(_DWORD **)v1;
  if ( !*(_QWORD *)v1 )
  {
    if ( !G_fConsole )
      goto LABEL_19;
    inited = bInitCacheTable(v3, v0, v24, v23, v22, v21, AnsiCodePage);
    v20 = dword_1C0327740;
    if ( inited )
      v20 = 2;
    dword_1C0327740 = v20;
LABEL_30:
    v1 = qword_1C0327748;
    goto LABEL_19;
  }
  v7 = v24;
  v8 = v23;
  v9 = v22;
  v10 = v21;
  if ( *v6 )
  {
    v11 = *(_DWORD *)(v1 + 80);
    if ( v11 == v6[6] )
    {
      v12 = *(_DWORD **)v1;
      if ( *v12 == (unsigned int)ComputeFileviewCheckSum(v6 + 1, (unsigned int)(v11 - 4)) && *((_QWORD *)v12 + 6) == v10 )
      {
        v1 = qword_1C0327748;
        if ( v12[3] == AnsiCodePage )
        {
          v13 = *(_DWORD *)(qword_1C0327748 + 12);
          if ( (v13 & 1) == 0
            && (!G_fConsole
             || (v13 & 2) == 0 && *((_QWORD *)v12 + 5) == v9 && v7 == *((_QWORD *)v12 + 7) && v8 == *((_QWORD *)v12 + 8)) )
          {
            dword_1C0327740 = 1;
            goto LABEL_19;
          }
        }
      }
      else
      {
        v1 = qword_1C0327748;
      }
    }
  }
  if ( G_fConsole )
  {
    v18 = bInitCacheTable(v3, v29, v7, v8, v9, v10, AnsiCodePage);
    v1 = qword_1C0327748;
    if ( v18 )
      dword_1C0327740 = 2;
  }
LABEL_19:
  v14 = dword_1C0327740;
  if ( (dword_1C0327740 & 3) != 0 )
  {
    v15 = *(_DWORD **)v1;
    v16 = *(_QWORD *)v1 + ((28LL * *(unsigned int *)(*(_QWORD *)v1 + 16LL) + 323) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v1 + 24) = v16;
    *(_QWORD *)(v1 + 32) = v16 + (unsigned int)v15[9];
    *(_QWORD *)(v1 + 40) = v16 + (unsigned int)v15[8] + (unsigned int)v15[7];
    *(_DWORD *)(v1 + 8) = v15[5];
    if ( (v14 & 1) != 0 )
      bSetFntCacheReg(0, 0);
    else
      *(_DWORD *)(v1 + 16) = 0;
  }
  else
  {
    vCleanUpFntCacheInternal();
  }
  SEMOBJ::vUnlock((SEMOBJ *)v25);
}
