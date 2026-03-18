/*
 * XREFs of xxxDrawDragRectEx @ 0x1C01F64F0
 * Callers:
 *     xxxReleaseCapture @ 0x1C003C3F0 (xxxReleaseCapture.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01F5324 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F56B4 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01F6400 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 * Callees:
 *     _ScreenToClient @ 0x1C0018E14 (_ScreenToClient.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     InitializeDPIINFO @ 0x1C0025848 (InitializeDPIINFO.c)
 *     LockW32Thread @ 0x1C003BB98 (LockW32Thread.c)
 *     zzzSetFMouseMoved @ 0x1C003C3C0 (zzzSetFMouseMoved.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     bSetDevDragRect @ 0x1C00A2540 (bSetDevDragRect.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     _SetSystemTimer @ 0x1C00B21F0 (_SetSystemTimer.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     DetectNewMonitor @ 0x1C01BFD64 (DetectNewMonitor.c)
 *     FindSpb @ 0x1C01E3B40 (FindSpb.c)
 *     FreeSpb @ 0x1C01E3B70 (FreeSpb.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z @ 0x1C01F01BC (-DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01F33A4 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxUpdateThreadsWindows @ 0x1C01F87FC (xxxUpdateThreadsWindows.c)
 *     GreWindowResizeComplete @ 0x1C024EE98 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C024F05C (GreWindowResizeStarted.c)
 *     bMoveDevDragRect @ 0x1C02664B0 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C0266704 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C02668BC (bSetDevPreviewRect.c)
 *     vSetDevDragRectDPI @ 0x1C0266AA8 (vSetDevDragRectDPI.c)
 */

__int64 __fastcall xxxDrawDragRectEx(struct tagRECT **a1, struct tagRECT *a2, int a3, struct tagRECT *a4)
{
  __int64 result; // rax
  unsigned int v9; // r14d
  int v10; // r12d
  signed int v11; // r15d
  unsigned int v12; // esi
  __int64 v13; // rcx
  struct tagRECT *v14; // rax
  BOOL v15; // edx
  int v16; // eax
  struct tagRECT v17; // xmm1
  int v18; // ecx
  struct tagRECT *v19; // rax
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // r10
  __int64 v23; // r10
  __int64 v24; // rcx
  __int64 v25; // r10
  LONG v26; // eax
  bool v27; // sf
  __int64 **Spb; // rax
  __int64 RectRgnIndirect; // rax
  __int64 v30; // rsi
  __int64 v31; // r8
  struct tagRECT *v32; // rdx
  __int64 v33; // r12
  LONG v34; // edx
  __int64 v35; // rcx
  unsigned int v36; // r10d
  __int64 i; // rax
  int v38; // r12d
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r10
  struct tagRECT v46; // xmm0
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // r8
  struct tagRECT *v50; // rdx
  struct tagRECT *v51; // r13
  __int64 v52; // rdx
  __int64 v53; // rcx
  LONG bottom; // eax
  char v55; // di
  __int64 v56; // rcx
  unsigned int MonitorFlagsFromWindow; // eax
  BOOL v58; // [rsp+40h] [rbp-C0h]
  int v59; // [rsp+40h] [rbp-C0h]
  int v60; // [rsp+44h] [rbp-BCh]
  int v61; // [rsp+44h] [rbp-BCh]
  int v62; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v63; // [rsp+4Ch] [rbp-B4h]
  BOOL v64; // [rsp+50h] [rbp-B0h]
  struct tagRECT v65; // [rsp+58h] [rbp-A8h] BYREF
  int v66; // [rsp+68h] [rbp-98h]
  struct tagRECT *v67; // [rsp+70h] [rbp-90h] BYREF
  int v68; // [rsp+78h] [rbp-88h] BYREF
  int v69; // [rsp+7Ch] [rbp-84h]
  _DWORD v70[2]; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v71; // [rsp+88h] [rbp-78h] BYREF
  __int64 v72; // [rsp+98h] [rbp-68h] BYREF
  struct tagRECT *v73; // [rsp+A0h] [rbp-60h]
  __int128 v74; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v75[3]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v76[32]; // [rsp+D8h] [rbp-28h] BYREF
  LONG left; // [rsp+F8h] [rbp-8h] BYREF
  LONG top; // [rsp+FCh] [rbp-4h]
  LONG right; // [rsp+100h] [rbp+0h]
  LONG v80; // [rsp+104h] [rbp+4h]
  __int128 v81; // [rsp+108h] [rbp+8h] BYREF

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v9 = 1;
  v58 = 0;
  if ( *(_QWORD *)(result + 408) )
  {
    result = *(unsigned int *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                             + 52LL);
    if ( (result & 1) != 0 )
      v58 = 1;
  }
  v10 = *((_DWORD *)a1 + 45);
  v11 = a3 & 0xF0000000;
  v12 = a3 & 0xFFFFFFF;
  if ( (v10 & 0x10) == 0 )
  {
    result = (__int64)*a1;
    if ( ((*a1)[4].left & 0x8000000) == 0 )
    {
      if ( a2 )
        *a4 = *a2;
      return result;
    }
  }
  if ( !a2 )
    goto LABEL_13;
  v13 = (__int64)a1[1] - *(_QWORD *)&a2->left;
  if ( !v13 )
    v13 = (__int64)a1[2] - *(_QWORD *)&a2->right;
  if ( v13 )
  {
LABEL_13:
    v14 = a2;
    if ( !a2 )
      v14 = a4;
    v64 = 0;
    v71 = *v14;
    if ( v11 >= 0 && v12 == 3 )
    {
      if ( (v10 & 0x20) != 0 )
        *((_DWORD *)a1 + 45) = v10 & 0xFDFFFFFF;
      v15 = (unsigned int)DetectNewMonitor((struct tagWND **)a1, &v71) && ((*a1)[23].left & 0xF) != 2;
      v16 = v10 ^ *((_DWORD *)a1 + 45);
      v64 = v15;
      *((_DWORD *)a1 + 45) ^= v16 & 0x2000000;
      if ( v15 )
      {
        xxxMS_FlushWigglies();
        zzzSetFMouseMoved();
        if ( a2 )
        {
          v17 = v71;
          *a4 = v71;
          *a2 = v17;
        }
      }
    }
    v18 = *((_DWORD *)a1 + 45);
    if ( (v18 & 0x20) == 0 || (v18 & 0x4000000) != 0 && v12 < 2 )
    {
      if ( a2 )
      {
        left = a2->left;
        top = a2->top;
        right = a2->right;
        bottom = a2->bottom;
      }
      else
      {
        left = a4->left;
        top = a4->top;
        right = a4->right;
        bottom = a4->bottom;
      }
      v80 = bottom;
      *(_QWORD *)&v81 = a1[9];
      DWORD2(v81) = *((_DWORD *)a1 + 20);
      result = *((unsigned int *)a1 + 21);
      HIDWORD(v81) = *((_DWORD *)a1 + 21);
      if ( a2 )
      {
        if ( (v18 & 0x10000000) != 0 )
        {
          InitializeDPIINFO((__int64)v76, (*a1)[23].left, (__int64)a1[24], (__int64)*a1);
          vSetDevDragRectDPI(*(_QWORD *)(gpDispInfo + 32LL), v76);
          *((_DWORD *)a1 + 45) &= ~0x10000000u;
        }
        if ( v11 >= 0 )
        {
          if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 52LL) & 1) == 0 )
          {
            v9 = 0;
          }
          result = bMoveDevDragRect(*(_QWORD *)(gpDispInfo + 32LL), &left, v9);
        }
        else
        {
          LogicalToPhysicalDPIRect(&left, &left, 0LL, 0LL);
          result = bMoveDevPreviewRect(
                     *(_QWORD *)(gpDispInfo + 32LL),
                     &left,
                     v58,
                     *(_QWORD *)&(*a1)->left,
                     *(_QWORD *)(gpsi + 5368LL));
        }
        *a4 = *a2;
      }
      else if ( v12 )
      {
        if ( v12 == 1 && v11 < 0 )
          result = bSetDevPreviewRect(*(HDEV *)(gpDispInfo + 32LL), *(_QWORD *)&(*a1)->left, *(_QWORD *)(gpsi + 5368LL));
      }
      else
      {
        v55 = v58 | 4;
        if ( (v18 & 0x4000000) == 0 )
          v55 = v58;
        if ( v11 >= 0 )
        {
          result = bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL), (__int64)&left, &v81, v55);
        }
        else
        {
          LogicalToPhysicalDPIRect(&left, &left, 0LL, 0LL);
          LogicalToPhysicalDPIRect(&v81, &v81, 0LL, 0LL);
          result = bSetDevPreviewRect(*(HDEV *)(gpDispInfo + 32LL), *(_QWORD *)&(*a1)->left, *(_QWORD *)(gpsi + 5368LL));
        }
      }
      goto LABEL_110;
    }
    v19 = *a1;
    v66 = 0;
    v59 = 0;
    v62 = 0;
    v20 = *(_QWORD *)&v19[1].left;
    v67 = (struct tagRECT *)gptiCurrent;
    if ( v20 != gptiCurrent )
      LockW32Thread(v20, v75);
    *(_DWORD *)(v20 + 440) |= 0x8000u;
    if ( a2 )
      *a4 = *a2;
    v21 = (__int64)*a1;
    v22 = *(_QWORD *)&(*a1)[6].right;
    v65 = *a4;
    if ( v22
      && !(unsigned int)IsTopLevelWindow(v21)
      && (ScreenToClient(v23, &v65), ScreenToClient(v24, &v65.right), (*(_BYTE *)(v25 + 66) & 0x40) != 0) )
    {
      v60 = v65.left;
      v26 = v65.right;
    }
    else
    {
      v60 = v65.right;
      v26 = v65.left;
    }
    v27 = *(char *)(v21 + 56) < 0;
    v63 = v26;
    if ( v27 )
    {
      v74 = *(_OWORD *)(v21 + 128);
      if ( a2 )
      {
        if ( (unsigned int)IntersectRect((int *)&v74, (int *)&v74, &a2->left) )
        {
          Spb = FindSpb((__int64 *)v21);
          FreeSpb((__int64)Spb);
        }
      }
    }
    RectRgnIndirect = GreCreateRectRgnIndirect(&(*a1)[8]);
    v30 = RectRgnIndirect;
    v31 = *(_QWORD *)&(*a1)[13].right;
    if ( v31 )
      GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v31, 1LL);
    v32 = *a1;
    v69 = (*((_DWORD *)a1 + 45) & 0x300) != 0 ? 1049108 : 532;
    v72 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v72;
    v73 = v32;
    if ( v32 )
      ++v32->right;
    v33 = (__int64)*a1;
    v61 = v60 - v63;
    v34 = v65.bottom;
    if ( *(_DWORD *)(v33 + 136) - *(_DWORD *)(v33 + 128) != v61
      || *(_DWORD *)(v33 + 140) - *(_DWORD *)(v33 + 132) != v65.bottom - v65.top )
    {
      if ( (unsigned int)DoesQualifyForResizeOptimization((struct _MOVESIZEDATA *)a1) )
      {
        v59 = 0;
        if ( (unsigned int)IsTopLevelWindow(v33) && *(char *)(v33 + 65) < (char)v36 )
        {
          for ( i = *(_QWORD *)(v33 + 112); i; i = *(_QWORD *)(i + 88) )
          {
            if ( *(char *)(i + 65) < (char)v36 )
            {
              v36 = 1;
              v59 = 1;
              break;
            }
          }
        }
        GreWindowResizeStarted(v35, *(_QWORD *)v33, v36, &v62, &v68);
        v38 = v62;
        if ( v62 )
          SetSystemTimer((__int64)*a1, 65522LL, v68, (int)ResizeTimerFunc, 1);
        v34 = v65.bottom;
        v66 = 1;
        goto LABEL_62;
      }
      v34 = v65.bottom;
    }
    v38 = v62;
LABEL_62:
    xxxSetWindowPos((struct tagWND *)*a1, 0LL, v63, (unsigned int)v65.top, v61, v34 - v65.top, v69);
    if ( (*((_DWORD *)a1 + 45) & 0x20000000) != 0 )
    {
      v43 = ValidateHmonitor(*(_QWORD *)&(*a1)[22].right, v39, v41, v42);
      v44 = (__int64)*a1;
      a1[24] = (struct tagRECT *)v43;
      if ( (unsigned int)IsTopLevelWindow(v44)
        && (*(_DWORD *)(v45 + 368) & 0xF) == 2
        && (*(_DWORD *)(*(_QWORD *)(v45 + 16) + 568LL) & 0x2000000) == 0 )
      {
        if ( a2 )
          *a2 = *(struct tagRECT *)(v45 + 128);
        *a4 = (*a1)[8];
        v46 = (*a1)[8];
        *(struct tagRECT **)((char *)a1 + 276) = *(struct tagRECT **)((char *)a1 + 284);
        *(struct tagRECT *)(a1 + 13) = v46;
        *((_DWORD *)a1 + 69) -= *((_DWORD *)a1 + 26);
        *((_DWORD *)a1 + 70) -= *((_DWORD *)a1 + 27);
      }
      *((_DWORD *)a1 + 45) &= ~0x20000000u;
    }
    ThreadUnlock1(v40, v39);
    if ( *(struct tagRECT ***)(v20 + 592) == a1 )
    {
      v47 = GreCreateRectRgnIndirect(&(*a1)[8]);
      v48 = v47;
      v49 = *(_QWORD *)&(*a1)[13].right;
      if ( v49 )
        GreCombineRgn(v47, v47, v49, 1LL);
      if ( v48 )
      {
        if ( v30 )
          GreCombineRgn(v30, v30, v48, 4LL);
      }
      else if ( v30 )
      {
        GreDeleteObject(v30);
        v30 = 0LL;
      }
      v50 = *(struct tagRECT **)(GetDesktopWindow((__int64)*a1) + 112);
      v72 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v72;
      v73 = v50;
      if ( v50 )
        ++v50->right;
      v51 = v67;
      xxxUpdateThreadsWindows(v67, v50, v30);
      ThreadUnlock1(v53, v52);
      if ( v66 )
      {
        GreWindowResizeComplete(*(_QWORD *)(gpDispInfo + 32LL), *(_QWORD *)&(*a1)->left);
        if ( v38 )
        {
          if ( !v59 )
            FindTimer((__int64)*a1, 65522LL, 2u, 1, 0LL);
        }
      }
      GreDeleteObject(v48);
    }
    else
    {
      v51 = v67;
    }
    result = GreDeleteObject(v30);
    *(_DWORD *)(v20 + 440) &= ~0x8000u;
    if ( (struct tagRECT *)v20 != v51 )
      result = PopAndFreeW32ThreadLock((__int64)v75);
LABEL_110:
    if ( v64 && *((_DWORD *)a1 + 40) == 9 )
    {
      v56 = (__int64)*a1;
      v67 = a1[24];
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(v56);
      PhysicalToLogicalDPIPoint(v70, (char *)a1 + 292, MonitorFlagsFromWindow, &v67);
      *((_DWORD *)a1 + 38) = v71.left - v70[0];
      result = (unsigned int)(v71.top - v70[1]);
      *((_DWORD *)a1 + 39) = result;
    }
  }
  return result;
}
