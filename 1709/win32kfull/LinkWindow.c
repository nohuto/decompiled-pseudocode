/*
 * XREFs of LinkWindow @ 0x1C0064B10
 * Callers:
 *     ImeSetTopmost @ 0x1C00568B8 (ImeSetTopmost.c)
 *     SetWindowGroupBand @ 0x1C0056C00 (SetWindowGroupBand.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     xxxCreateDesktopEx @ 0x1C00D9EA0 (xxxCreateDesktopEx.c)
 * Callees:
 *     HWInsertAfter @ 0x1C000C850 (HWInsertAfter.c)
 *     DwmAsyncChildLink @ 0x1C0045688 (DwmAsyncChildLink.c)
 *     GetLastTopMostWindow @ 0x1C0058904 (GetLastTopMostWindow.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     GetBandOrdinal @ 0x1C0065324 (GetBandOrdinal.c)
 *     TrackLayeredZorder @ 0x1C0090DAC (TrackLayeredZorder.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C01F7AA4 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

void __fastcall LinkWindow(struct tagWND *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 LastTopMostWindow; // r14
  __int128 v5; // rdi
  unsigned int BandOrdinal; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // r9d
  unsigned __int64 v11; // r8
  __int128 *v12; // rcx
  __int64 j; // r8
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  char v16; // cl
  __int64 m; // rax
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // r15
  void *v24; // rbx
  __int64 n; // rdi
  int v26; // eax
  __int64 DesktopWindow; // rax
  __int64 v28; // rdx
  unsigned __int64 i; // r8
  unsigned __int64 k; // r8
  unsigned int v31; // ecx
  _DWORD *v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rbx
  __int64 v35; // rcx
  void *v36; // rax
  __int128 v37; // [rsp+30h] [rbp-D0h]
  __int128 v38; // [rsp+40h] [rbp-C0h]
  __int128 v39; // [rsp+50h] [rbp-B0h]
  __int128 v40; // [rsp+60h] [rbp-A0h]
  __int128 v41; // [rsp+70h] [rbp-90h]
  __int128 v42; // [rsp+80h] [rbp-80h]
  _DWORD v43[20]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v44; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v45; // [rsp+100h] [rbp+0h] BYREF
  __int128 v46; // [rsp+110h] [rbp+10h] BYREF
  __int128 v47; // [rsp+120h] [rbp+20h] BYREF
  __int128 v48; // [rsp+130h] [rbp+30h] BYREF
  __int128 v49; // [rsp+140h] [rbp+40h] BYREF
  __int128 v50; // [rsp+150h] [rbp+50h] BYREF

  *(_QWORD *)&v5 = a3 + 112;
  LastTopMostWindow = a2;
  *((_QWORD *)&v5 + 1) = a1;
  BandOrdinal = 0;
  if ( *(struct tagWND **)(a3 + 112) == a1 )
    return;
  if ( a2 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    GetDesktopWindow(a1);
    DesktopWindow = GetDesktopWindow(LastTopMostWindow);
    if ( DesktopWindow != v28 )
    {
      if ( a3 == GetDesktopWindow(*((_QWORD *)&v5 + 1)) )
        LastTopMostWindow = GetLastTopMostWindow(*((__int64 *)&v5 + 1));
      else
        LastTopMostWindow = 0LL;
    }
  }
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0LL, *((_QWORD *)&v5 + 1), LastTopMostWindow, a3);
  v7 = *(_QWORD *)(a3 + 24);
  v8 = 0LL;
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 8);
    if ( v9 )
      v8 = *(_QWORD *)(v9 + 16);
  }
  if ( a3 == v8 )
    BandOrdinal = GetBandOrdinal(*(unsigned int *)(*((_QWORD *)&v5 + 1) + 320LL));
  else
    v10 = 0;
  if ( LastTopMostWindow )
  {
    if ( LastTopMostWindow == 1 )
    {
      LastTopMostWindow = *(_QWORD *)v5;
      if ( *(_QWORD *)v5 && (*(_BYTE *)(LastTopMostWindow + 60) & 0x20) == 0 )
      {
        for ( i = *(_QWORD *)(LastTopMostWindow + 88); i; i = *(_QWORD *)(i + 88) )
        {
          if ( v10 && (unsigned int)GetBandOrdinal(*(unsigned int *)(i + 320)) < BandOrdinal )
            break;
          if ( (*(_BYTE *)(i + 60) & 0x20) != 0 )
            break;
          LastTopMostWindow = i;
        }
        if ( !v10 || (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow + 320)) >= BandOrdinal )
          goto LABEL_20;
      }
    }
    else
    {
      if ( !v10 )
      {
LABEL_20:
        v15 = *(_QWORD *)(LastTopMostWindow + 88);
        if ( v15 )
        {
          *((_QWORD *)&v37 + 1) = *((_QWORD *)&v5 + 1);
          *(_QWORD *)&v37 = v15 + 96;
          v44 = v37;
          HMAssignmentLock(&v44);
          *(_QWORD *)&v38 = *((_QWORD *)&v5 + 1) + 88LL;
          *((_QWORD *)&v38 + 1) = *(_QWORD *)(LastTopMostWindow + 88);
          v45 = v38;
          HMAssignmentLock(&v45);
        }
        *((_QWORD *)&v39 + 1) = LastTopMostWindow;
        *(_QWORD *)&v39 = *((_QWORD *)&v5 + 1) + 96LL;
        v46 = v39;
        HMAssignmentLock(&v46);
        *(_QWORD *)&v40 = LastTopMostWindow + 88;
        v12 = &v47;
        *((_QWORD *)&v40 + 1) = *((_QWORD *)&v5 + 1);
        v47 = v40;
        goto LABEL_23;
      }
      if ( BandOrdinal <= (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow + 320)) )
      {
        for ( j = *(_QWORD *)(LastTopMostWindow + 88); j; j = *(_QWORD *)(v14 + 88) )
        {
          if ( (unsigned int)GetBandOrdinal(*(unsigned int *)(j + 320)) <= BandOrdinal )
            break;
          LastTopMostWindow = v14;
        }
        goto LABEL_20;
      }
      while ( 1 )
      {
        LastTopMostWindow = *(_QWORD *)(LastTopMostWindow + 96);
        if ( !LastTopMostWindow )
          break;
        if ( BandOrdinal <= (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow + 320)) )
          goto LABEL_20;
      }
    }
  }
  v11 = *(_QWORD *)v5;
  if ( *(_QWORD *)v5 )
  {
    if ( v10 && (unsigned int)GetBandOrdinal(*(unsigned int *)(v11 + 320)) > BandOrdinal )
    {
      LastTopMostWindow = v11;
      for ( k = *(_QWORD *)(v11 + 88); k; k = *(_QWORD *)(k + 88) )
      {
        v31 = 0;
        v32 = &gazbidOrder;
        do
        {
          if ( *v32 == *(_DWORD *)(k + 320) )
            break;
          ++v31;
          ++v32;
        }
        while ( v31 < 0x12 );
        if ( v31 <= BandOrdinal )
          break;
        LastTopMostWindow = k;
      }
      goto LABEL_20;
    }
    *((_QWORD *)&v41 + 1) = *((_QWORD *)&v5 + 1);
    *(_QWORD *)&v41 = v11 + 96;
    v48 = v41;
    HMAssignmentLock(&v48);
    *(_QWORD *)&v42 = *((_QWORD *)&v5 + 1) + 88LL;
    *((_QWORD *)&v42 + 1) = *(_QWORD *)v5;
    v49 = v42;
    HMAssignmentLock(&v49);
  }
  v12 = &v50;
  v50 = v5;
LABEL_23:
  HMAssignmentLock(v12);
  *(_DWORD *)(*((_QWORD *)&v5 + 1) + 304LL) |= 8u;
  v16 = 0;
  for ( m = *(_QWORD *)v5; m; m = *(_QWORD *)(m + 88) )
  {
    if ( m == *((_QWORD *)&v5 + 1) )
      v16 = 1;
  }
  v18 = *(_DWORD *)(*((_QWORD *)&v5 + 1) + 304LL) ^ ((unsigned __int8)*(_DWORD *)(*((_QWORD *)&v5 + 1) + 304LL) ^ (unsigned __int8)(16 * v16)) & 0x10;
  *(_DWORD *)(*((_QWORD *)&v5 + 1) + 304LL) = v18;
  if ( (v18 & 0x10) != 0
    && (unsigned int)IsWindowDesktopComposed(*((_QWORD *)&v5 + 1))
    && *((_QWORD *)&v5 + 1) != GetDesktopWindow(*((_QWORD *)&v5 + 1)) )
  {
    v19 = *(_QWORD *)(*((_QWORD *)&v5 + 1) + 24LL);
    v20 = 0LL;
    if ( v19 )
      v20 = *(_QWORD *)(v19 + 104);
    if ( *((_QWORD *)&v5 + 1) != v20 && a3 != gTermIO[1] )
    {
      if ( (LastTopMostWindow < 2 || LastTopMostWindow >= 0xFFFFFFFFFFFFFFFEuLL)
        && (LastTopMostWindow <= 1 || LastTopMostWindow + 2 <= 1) )
      {
        v21 = LastTopMostWindow;
      }
      else
      {
        v21 = *(_QWORD *)LastTopMostWindow;
      }
      LODWORD(v5) = *(_DWORD *)(*((_QWORD *)&v5 + 1) + 320LL);
      v22 = *(_QWORD *)a3;
      v23 = **((_QWORD **)&v5 + 1);
      v24 = (void *)ReferenceDwmApiPort(v19);
      _InterlockedIncrement64(&g_cDWMWindowUniqueness);
      if ( v24 )
      {
        memset(v43, 0, 0x48uLL);
        v43[0] = 4718624;
        LOWORD(v43[1]) = 0x8000;
        v43[10] = 1073741842;
        *(_QWORD *)&v43[11] = v23;
        *(_QWORD *)&v43[13] = v22;
        *(_QWORD *)&v43[15] = v21;
        v43[17] = v5;
        LpcRequestPort(v24, v43);
        ObfDereferenceObject(v24);
      }
      for ( n = *(_QWORD *)(*((_QWORD *)&v5 + 1) + 88LL); n; n = *(_QWORD *)(n + 88) )
      {
        v26 = *(_DWORD *)(n + 304);
        if ( (v26 & 0x10) == 0 )
        {
          v33 = *(_QWORD *)(n + 96);
          *(_DWORD *)(n + 304) = v26 | 0x10;
          v34 = HWInsertAfter(v33);
          v36 = (void *)ReferenceDwmApiPort(v35);
          DwmAsyncChildLink(v36, *(_QWORD *)n, *(_QWORD *)a3, v34, *(_DWORD *)(n + 320));
        }
      }
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)&v5 + 1) + 66LL) & 8) != 0 )
    TrackLayeredZorder(*((struct tagWND **)&v5 + 1));
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(1LL, *((_QWORD *)&v5 + 1), 0LL, 0LL);
}
