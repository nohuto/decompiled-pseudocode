/*
 * XREFs of LinkWindow @ 0x1C00614C0
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C0011B6C (xxxCreateDesktopEx.c)
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     ImeSetTopmost @ 0x1C001E790 (ImeSetTopmost.c)
 *     SetWindowGroupBand @ 0x1C001ED20 (SetWindowGroupBand.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     DwmAsyncChildLink @ 0x1C00160A0 (DwmAsyncChildLink.c)
 *     GetLastTopMostWindow @ 0x1C001CA48 (GetLastTopMostWindow.c)
 *     TrackLayeredZorder @ 0x1C0022594 (TrackLayeredZorder.c)
 *     GetBandOrdinal @ 0x1C00619A4 (GetBandOrdinal.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     HWInsertAfter @ 0x1C01A3E50 (HWInsertAfter.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C01ED618 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

void __fastcall LinkWindow(struct tagWND *a1, unsigned __int64 a2, __int64 *a3)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 LastTopMostWindow; // rbx
  __int128 v6; // rdi
  __int64 DesktopWindow; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rdx
  int v17; // r9d
  unsigned __int64 i; // r8
  unsigned __int64 v19; // r8
  unsigned __int64 k; // r8
  unsigned int v21; // eax
  _DWORD *v22; // rcx
  __int64 v23; // rax
  __int128 *v24; // rcx
  __int64 j; // r8
  unsigned __int64 v26; // r8
  char v27; // al
  unsigned __int64 v28; // rcx
  bool v29; // zf
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // r14d
  __int64 v38; // r15
  __int64 v39; // r12
  __int64 v40; // rax
  void *v41; // rdi
  __int64 m; // rdi
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  void *v50; // rax
  int v51; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v52; // [rsp+34h] [rbp-CCh]
  int v53; // [rsp+36h] [rbp-CAh]
  __int64 v54; // [rsp+3Ah] [rbp-C6h]
  __int64 v55; // [rsp+42h] [rbp-BEh]
  __int64 v56; // [rsp+4Ah] [rbp-B6h]
  _TBYTE v57; // [rsp+52h] [rbp-AEh]
  __int64 v58; // [rsp+5Ch] [rbp-A4h]
  __int64 v59; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 v60; // [rsp+6Ch] [rbp-94h]
  int v61; // [rsp+74h] [rbp-8Ch]
  __int128 v62; // [rsp+80h] [rbp-80h]
  __int128 v63; // [rsp+90h] [rbp-70h]
  __int128 v64; // [rsp+A0h] [rbp-60h]
  __int128 v65; // [rsp+B0h] [rbp-50h]
  __int128 v66; // [rsp+C0h] [rbp-40h]
  __int128 v67; // [rsp+D0h] [rbp-30h]
  __int128 v68; // [rsp+E0h] [rbp-20h]
  __int128 v69; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v70; // [rsp+100h] [rbp+0h] BYREF
  __int128 v71; // [rsp+110h] [rbp+10h] BYREF
  __int128 v72; // [rsp+120h] [rbp+20h] BYREF
  __int128 v73; // [rsp+130h] [rbp+30h] BYREF
  __int128 v74; // [rsp+140h] [rbp+40h] BYREF
  __int128 v75; // [rsp+150h] [rbp+50h] BYREF

  LODWORD(v6) = 0;
  v3 = (unsigned __int64 *)(a3 + 14);
  LastTopMostWindow = a2;
  *((_QWORD *)&v6 + 1) = a1;
  if ( (struct tagWND *)a3[14] == a1 )
    return;
  if ( a2 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    DesktopWindow = GetDesktopWindow(a1, a2);
    v8 = GetDesktopWindow(LastTopMostWindow, DesktopWindow);
    if ( v8 != v9 )
    {
      v10 = GetDesktopWindow(*((_QWORD *)&v6 + 1), v9);
      if ( v13 == v10 )
        LastTopMostWindow = GetLastTopMostWindow(v12, v11);
      else
        LastTopMostWindow = 0LL;
    }
  }
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0LL, *((_QWORD *)&v6 + 1), LastTopMostWindow, a3);
  v14 = a3[3];
  v15 = 0LL;
  if ( v14 )
  {
    v16 = *(_QWORD *)(v14 + 8);
    if ( v16 )
      v15 = *(__int64 **)(v16 + 16);
  }
  if ( a3 == v15 )
    LODWORD(v6) = GetBandOrdinal(*(unsigned int *)(*((_QWORD *)&v6 + 1) + 320LL));
  else
    v17 = 0;
  if ( LastTopMostWindow )
  {
    if ( LastTopMostWindow == 1 )
    {
      LastTopMostWindow = *v3;
      if ( *v3 && (*(_BYTE *)(LastTopMostWindow + 60) & 0x20) == 0 )
      {
        for ( i = *(_QWORD *)(LastTopMostWindow + 88); i; i = *(_QWORD *)(i + 88) )
        {
          if ( v17 && (unsigned int)GetBandOrdinal(*(unsigned int *)(i + 320)) < (unsigned int)v6 )
            break;
          if ( (*(_BYTE *)(i + 60) & 0x20) != 0 )
            break;
          LastTopMostWindow = i;
        }
        if ( !v17 || (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow + 320)) >= (unsigned int)v6 )
          goto LABEL_35;
      }
    }
    else
    {
      if ( !v17 )
      {
LABEL_35:
        v23 = *(_QWORD *)(LastTopMostWindow + 88);
        *(_QWORD *)&v6 = LastTopMostWindow + 88;
        if ( v23 )
        {
          *((_QWORD *)&v62 + 1) = *((_QWORD *)&v6 + 1);
          *(_QWORD *)&v62 = v23 + 96;
          v69 = v62;
          HMAssignmentLock(&v69);
          *(_QWORD *)&v63 = *((_QWORD *)&v6 + 1) + 88LL;
          *((_QWORD *)&v63 + 1) = *(_QWORD *)v6;
          v70 = v63;
          HMAssignmentLock(&v70);
        }
        *((_QWORD *)&v64 + 1) = LastTopMostWindow;
        *(_QWORD *)&v64 = *((_QWORD *)&v6 + 1) + 96LL;
        v71 = v64;
        HMAssignmentLock(&v71);
        v65 = v6;
        v24 = &v72;
        v72 = v6;
        goto LABEL_49;
      }
      if ( (unsigned int)v6 <= (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow + 320)) )
      {
        for ( j = *(_QWORD *)(LastTopMostWindow + 88); j; j = *(_QWORD *)(v26 + 88) )
        {
          if ( (unsigned int)GetBandOrdinal(*(unsigned int *)(j + 320)) <= (unsigned int)v6 )
            break;
          LastTopMostWindow = v26;
        }
        goto LABEL_35;
      }
      while ( 1 )
      {
        LastTopMostWindow = *(_QWORD *)(LastTopMostWindow + 96);
        if ( !LastTopMostWindow )
          break;
        if ( (unsigned int)v6 <= (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow + 320)) )
          goto LABEL_35;
      }
    }
  }
  v19 = *v3;
  if ( *v3 )
  {
    if ( v17 && (unsigned int)GetBandOrdinal(*(unsigned int *)(v19 + 320)) > (unsigned int)v6 )
    {
      LastTopMostWindow = v19;
      for ( k = *(_QWORD *)(v19 + 88); k; k = *(_QWORD *)(k + 88) )
      {
        v21 = 0;
        v22 = &gazbidOrder;
        do
        {
          if ( *v22 == *(_DWORD *)(k + 320) )
            break;
          ++v21;
          ++v22;
        }
        while ( v21 < 0x12 );
        if ( v21 <= (unsigned int)v6 )
          break;
        LastTopMostWindow = k;
      }
      goto LABEL_35;
    }
    *((_QWORD *)&v66 + 1) = *((_QWORD *)&v6 + 1);
    *(_QWORD *)&v66 = v19 + 96;
    v73 = v66;
    HMAssignmentLock(&v73);
    *(_QWORD *)&v67 = *((_QWORD *)&v6 + 1) + 88LL;
    *((_QWORD *)&v67 + 1) = *v3;
    v74 = v67;
    HMAssignmentLock(&v74);
  }
  *(_QWORD *)&v68 = v3;
  v24 = &v75;
  *((_QWORD *)&v68 + 1) = *((_QWORD *)&v6 + 1);
  v75 = v68;
LABEL_49:
  HMAssignmentLock(v24);
  *(_DWORD *)(*((_QWORD *)&v6 + 1) + 304LL) |= 8u;
  v27 = 0;
  v28 = *v3;
  while ( v28 )
  {
    v29 = v28 == *((_QWORD *)&v6 + 1);
    v28 = *(_QWORD *)(v28 + 88);
    if ( v29 )
      v27 = 1;
  }
  v30 = *(_DWORD *)(*((_QWORD *)&v6 + 1) + 304LL) ^ ((unsigned __int8)*(_DWORD *)(*((_QWORD *)&v6 + 1) + 304LL) ^ (unsigned __int8)(16 * v27)) & 0x10;
  *(_DWORD *)(*((_QWORD *)&v6 + 1) + 304LL) = v30;
  if ( (v30 & 0x10) != 0
    && (unsigned int)IsWindowDesktopComposed(*((_QWORD *)&v6 + 1))
    && *((_QWORD *)&v6 + 1) != GetDesktopWindow(*((_QWORD *)&v6 + 1), v31) )
  {
    v35 = *(_QWORD *)(*((_QWORD *)&v6 + 1) + 24LL);
    v36 = 0LL;
    if ( v35 )
      v36 = *(_QWORD *)(v35 + 104);
    if ( *((_QWORD *)&v6 + 1) != v36 && a3 != (__int64 *)gTermIO[1] )
    {
      if ( (LastTopMostWindow - 2 <= 0xFFFFFFFFFFFFFFFBuLL || LastTopMostWindow > 1 && LastTopMostWindow + 2 > 1)
        && LastTopMostWindow )
      {
        LastTopMostWindow = *(_QWORD *)LastTopMostWindow;
      }
      v37 = *(_DWORD *)(*((_QWORD *)&v6 + 1) + 320LL);
      v38 = *a3;
      v39 = **((_QWORD **)&v6 + 1);
      v40 = ReferenceDwmApiPort(v35, v32, v33, v34);
      v41 = (void *)v40;
      _InterlockedIncrement64(&g_cDWMWindowUniqueness);
      if ( v40 )
      {
        v53 = 0;
        *(_QWORD *)&v57 = 0LL;
        v54 = 0LL;
        v55 = 0LL;
        v56 = 0LL;
        v52 = 0x8000;
        v51 = 4718624;
        *(_DWORD *)((char *)&v57 + 6) = 1073741842;
        v58 = v39;
        v59 = v38;
        v60 = LastTopMostWindow;
        v61 = v37;
        LpcRequestPort(v40, &v51);
        ObfDereferenceObject(v41);
      }
      for ( m = *(_QWORD *)(*((_QWORD *)&v6 + 1) + 88LL); m; m = *(_QWORD *)(m + 88) )
      {
        v43 = *(_DWORD *)(m + 304);
        if ( (v43 & 0x10) == 0 )
        {
          v44 = *(_QWORD *)(m + 96);
          *(_DWORD *)(m + 304) = v43 | 0x10;
          v45 = HWInsertAfter(v44);
          v50 = (void *)ReferenceDwmApiPort(v47, v46, v48, v49);
          DwmAsyncChildLink(v50, *(_QWORD *)m, *a3, v45, *(_DWORD *)(m + 320));
        }
      }
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)&v6 + 1) + 66LL) & 8) != 0 )
    TrackLayeredZorder(*((struct tagWND **)&v6 + 1));
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(1LL, *((_QWORD *)&v6 + 1), 0LL, 0LL);
}
