/*
 * XREFs of InitFNTCache @ 0x1C000F2D0
 * Callers:
 *     <none>
 * Callees:
 *     ComputeFileviewCheckSum @ 0x1C0008400 (ComputeFileviewCheckSum.c)
 *     bServicingStackModifiedFonts @ 0x1C0008470 (bServicingStackModifiedFonts.c)
 *     bSetFntCacheReg @ 0x1C00084C4 (bSetFntCacheReg.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C0009204 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     QueryFontReg @ 0x1C000F5E4 (QueryFontReg.c)
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C000F690 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     bFntCacheDisabled @ 0x1C000F75C (bFntCacheDisabled.c)
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bMapFileRetainHandle@@YAHPEAGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C0115EBC (-bMapFileRetainHandle@@YAHPEAGPEAU_FILEVIEW@@HPEAH@Z.c)
 *     vGetFontDriverLWT @ 0x1C011BA68 (vGetFontDriverLWT.c)
 *     vGetLastBootTimeStatus @ 0x1C011C0C8 (vGetLastBootTimeStatus.c)
 *     bInitCacheTable @ 0x1C013BE68 (bInitCacheTable.c)
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
  dword_1C032C4C0 = 0;
  if ( (int)GetGreRegKey(
              &ghkeyGreInitialize,
              0xC0000000,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize") < 0
    || (unsigned int)bFntCacheDisabled() )
  {
    goto LABEL_30;
  }
  qword_1C032C4C8 = PALLOCMEM2(0xB8uLL);
  v1 = qword_1C032C4C8;
  if ( !qword_1C032C4C8 )
    goto LABEL_19;
  if ( G_fConsole )
  {
    v17 = bSetFntCacheReg(0, 1);
    v1 = qword_1C032C4C8;
    if ( !v17 )
      goto LABEL_19;
  }
  *(_QWORD *)v1 = 0LL;
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 48) = 0LL;
  *(_QWORD *)(v1 + 56) = 0LL;
  *(_QWORD *)(v1 + 64) = 0LL;
  *(_QWORD *)(v1 + 72) = 0LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_DWORD *)(v1 + 96) = 0;
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
    || !bMapFileRetainHandle(v4, (struct _FILEVIEW *)(qword_1C032C4C8 + 104), 0, v5) )
  {
    v1 = qword_1C032C4C8;
  }
  else
  {
    v1 = qword_1C032C4C8;
    *(_QWORD *)qword_1C032C4C8 = *(_QWORD *)(qword_1C032C4C8 + 112);
  }
  v6 = *(_DWORD **)v1;
  if ( !*(_QWORD *)v1 )
  {
    if ( !G_fConsole )
      goto LABEL_19;
    inited = bInitCacheTable(v3, v0, v24, v23, v22, v21, AnsiCodePage);
    v20 = dword_1C032C4C0;
    if ( inited )
      v20 = 2;
    dword_1C032C4C0 = v20;
LABEL_30:
    v1 = qword_1C032C4C8;
    goto LABEL_19;
  }
  v7 = v24;
  v8 = v23;
  v9 = v22;
  v10 = v21;
  if ( *v6 )
  {
    v11 = *(_DWORD *)(v1 + 128);
    if ( v11 == v6[6] )
    {
      v12 = *(_DWORD **)v1;
      if ( *v12 == (unsigned int)ComputeFileviewCheckSum(v6 + 1, v11 - 4) && *((_QWORD *)v12 + 6) == v10 )
      {
        v1 = qword_1C032C4C8;
        if ( v12[3] == AnsiCodePage )
        {
          v13 = *(_DWORD *)(qword_1C032C4C8 + 12);
          if ( (v13 & 1) == 0
            && (!G_fConsole
             || (v13 & 2) == 0 && *((_QWORD *)v12 + 5) == v9 && v7 == *((_QWORD *)v12 + 7) && v8 == *((_QWORD *)v12 + 8)) )
          {
            dword_1C032C4C0 = 1;
            goto LABEL_19;
          }
        }
      }
      else
      {
        v1 = qword_1C032C4C8;
      }
    }
  }
  if ( G_fConsole )
  {
    v18 = bInitCacheTable(v3, v29, v7, v8, v9, v10, AnsiCodePage);
    v1 = qword_1C032C4C8;
    if ( v18 )
      dword_1C032C4C0 = 2;
  }
LABEL_19:
  v14 = dword_1C032C4C0;
  if ( (dword_1C032C4C0 & 3) != 0 )
  {
    v15 = *(_DWORD **)v1;
    v16 = *(_QWORD *)v1 + ((28LL * *(unsigned int *)(*(_QWORD *)v1 + 16LL) + 323) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v1 + 24) = v16;
    *(_QWORD *)(v1 + 32) = v16 + (unsigned int)v15[9];
    *(_QWORD *)(v1 + 40) = v16 + (unsigned int)v15[7] + (unsigned __int64)(unsigned int)v15[8];
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
