/*
 * XREFs of xxxDrawDragRectEx @ 0x1C01DD710
 * Callers:
 *     xxxReleaseCapture @ 0x1C0046780 (xxxReleaseCapture.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01DC5F0 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DC988 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01DD620 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     _SetSystemTimer @ 0x1C0086E20 (_SetSystemTimer.c)
 *     InitializeDPIINFO @ 0x1C0092178 (InitializeDPIINFO.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _ScreenToClient @ 0x1C00C8AF0 (_ScreenToClient.c)
 *     LockW32Thread @ 0x1C00CDBB0 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     bSetDevDragRect @ 0x1C00E35F0 (bSetDevDragRect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     DetectNewMonitor @ 0x1C01C3688 (DetectNewMonitor.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z @ 0x1C01D7ED0 (-DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01DAD00 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxUpdateThreadsWindows @ 0x1C01DF9A4 (xxxUpdateThreadsWindows.c)
 *     FindSpb @ 0x1C01EFB5C (FindSpb.c)
 *     FreeSpb @ 0x1C01EFB8C (FreeSpb.c)
 *     GreWindowResizeComplete @ 0x1C0250914 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C0250AF0 (GreWindowResizeStarted.c)
 *     bMoveDevDragRect @ 0x1C02656C0 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C026598C (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0265B44 (bSetDevPreviewRect.c)
 *     vSetDevDragRectDPI @ 0x1C0265D38 (vSetDevDragRectDPI.c)
 */

__int64 __fastcall xxxDrawDragRectEx(struct _MOVESIZEDATA *a1, LONG *a2, __int64 a3, LONG *a4)
{
  unsigned int v6; // esi
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // r12
  int v13; // r14d
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edx
  unsigned int v17; // esi
  __int64 v18; // rcx
  struct tagRECT *v19; // rax
  struct tagRECT v20; // xmm0
  BOOL v21; // eax
  int v22; // r14d
  struct tagRECT v23; // xmm1
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // r10
  __int64 v31; // rcx
  __int64 v32; // r10
  int v33; // ecx
  __int64 Spb; // rsi
  __int64 v35; // r9
  __int64 RectRgnIndirect; // rax
  __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // rsi
  __int64 v40; // r8
  __int64 v41; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v43; // r14
  int v44; // edx
  int v45; // ecx
  __int64 v46; // rcx
  unsigned int v47; // r10d
  __int64 i; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r9
  __int128 v54; // xmm0
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // r8
  __int64 v58; // r14
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // r14
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v67; // edx
  LONG v68; // eax
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  int v72; // esi
  __int64 v73; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  unsigned int v75; // [rsp+40h] [rbp-C0h]
  int v76; // [rsp+40h] [rbp-C0h]
  int v77; // [rsp+44h] [rbp-BCh] BYREF
  BOOL v78; // [rsp+48h] [rbp-B8h]
  int v79; // [rsp+4Ch] [rbp-B4h]
  __int128 v80; // [rsp+50h] [rbp-B0h] BYREF
  int v81; // [rsp+60h] [rbp-A0h]
  int v82; // [rsp+64h] [rbp-9Ch]
  int v83; // [rsp+68h] [rbp-98h] BYREF
  __int64 v84; // [rsp+70h] [rbp-90h]
  _DWORD v85[2]; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v86; // [rsp+80h] [rbp-80h] BYREF
  __int64 v87; // [rsp+90h] [rbp-70h] BYREF
  __int64 v88; // [rsp+98h] [rbp-68h] BYREF
  __int64 v89; // [rsp+A0h] [rbp-60h]
  __int128 v90; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v91[3]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v92[32]; // [rsp+D8h] [rbp-28h] BYREF
  struct _RECTL v93; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v94; // [rsp+108h] [rbp+8h] BYREF

  v6 = a3;
  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, (__int64)a4);
  v12 = 0;
  if ( *(_QWORD *)(result + 432) )
  {
    result = *(unsigned int *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v9,
                                                           v10,
                                                           v11)
                                                       + 432)
                                           + 8LL)
                             + 52LL);
    if ( (result & 1) != 0 )
      v12 = 1;
  }
  v13 = *((_DWORD *)a1 + 49);
  v14 = v6;
  v75 = v6;
  v15 = v6;
  v79 = v6;
  v16 = v6;
  v17 = v6 & 0xFFFFFFF;
  if ( (v13 & 0x10) != 0 || (result = *((_QWORD *)a1 + 2), (*(_BYTE *)(result + 67) & 8) != 0) )
  {
    if ( !a2 )
      goto LABEL_13;
    v18 = *((_QWORD *)a1 + 3) - *(_QWORD *)a2;
    if ( !v18 )
      v18 = *((_QWORD *)a1 + 4) - *((_QWORD *)a2 + 1);
    if ( v18 )
    {
LABEL_13:
      v19 = (struct tagRECT *)a2;
      if ( !a2 )
        v19 = (struct tagRECT *)a4;
      v20 = *v19;
      v78 = 0;
      v86 = v20;
      if ( v16 >= 0 && v17 == 3 )
      {
        if ( (v13 & 0x20) != 0 )
          *((_DWORD *)a1 + 49) = v13 & 0xFDFFFFFF;
        v21 = (unsigned int)DetectNewMonitor((struct tagWND **)a1, &v86)
           && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 368LL) & 0xF) != 2;
        v22 = (*((_DWORD *)a1 + 49) ^ v13) & 0x2000000;
        v78 = v21;
        *((_DWORD *)a1 + 49) ^= v22;
        if ( v21 )
        {
          xxxMS_FlushWigglies();
          GenerateMouseMove(0LL);
          v14 = v75;
          v15 = v75;
          if ( a2 )
          {
            v23 = v86;
            *(struct tagRECT *)a4 = v86;
            *(struct tagRECT *)a2 = v23;
          }
        }
        else
        {
          v14 = v75;
          v15 = v75;
        }
      }
      v24 = *((_DWORD *)a1 + 49);
      v25 = 0x4000000LL;
      if ( (v24 & 0x20) == 0 || (v24 & 0x4000000) != 0 && v17 < 2 )
      {
        if ( a2 )
        {
          v93.left = *a2;
          v93.top = a2[1];
          v93.right = a2[2];
          v68 = a2[3];
        }
        else
        {
          v93.left = *a4;
          v93.top = a4[1];
          v93.right = a4[2];
          v68 = a4[3];
        }
        v93.bottom = v68;
        *(_QWORD *)&v94 = *((_QWORD *)a1 + 11);
        DWORD2(v94) = *((_DWORD *)a1 + 24);
        result = *((unsigned int *)a1 + 25);
        HIDWORD(v94) = *((_DWORD *)a1 + 25);
        if ( a2 )
        {
          if ( (v24 & 0x10000000) != 0 )
          {
            InitializeDPIINFO(
              (__int64)v92,
              *(_DWORD *)(*((_QWORD *)a1 + 2) + 368LL),
              *((_QWORD *)a1 + 26),
              *((_QWORD *)a1 + 2));
            vSetDevDragRectDPI(*(_QWORD *)(gpDispInfo + 32LL), v92);
            *((_DWORD *)a1 + 49) &= ~0x10000000u;
          }
          if ( v79 >= 0 )
          {
            if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v14, v15) + 432) )
              W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v69, v70, v71);
            result = bMoveDevDragRect(*(HDEV *)(gpDispInfo + 32LL));
          }
          else
          {
            LogicalToPhysicalDPIRect(&v93, &v93, 0LL, 0LL);
            result = bMoveDevPreviewRect(*(HDEV *)(gpDispInfo + 32LL), &v93, *(_QWORD *)(gpsi + 4944LL));
          }
          *(_OWORD *)a4 = *(_OWORD *)a2;
        }
        else if ( v17 )
        {
          if ( v17 == 1 && (int)v14 < 0 )
            result = bSetDevPreviewRect(*(HDEV *)(gpDispInfo + 32LL), **((_QWORD **)a1 + 2), *(_QWORD *)(gpsi + 4944LL));
        }
        else
        {
          v72 = v12 | 4;
          v73 = v24 & 0x4000000;
          if ( !(_DWORD)v73 )
            LOBYTE(v72) = v12;
          if ( (int)v15 >= 0 )
          {
            result = bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL), (__int64)&v93, &v94, v72);
          }
          else
          {
            CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v73, 0x4000000LL, v14, v15);
            LogicalToPhysicalDPIRect(&v93, &v93, CurrentThreadDpiAwarenessContext, 0LL);
            LogicalToPhysicalDPIRect(&v94, &v94, CurrentThreadDpiAwarenessContext, 0LL);
            result = bSetDevPreviewRect(*(HDEV *)(gpDispInfo + 32LL), **((_QWORD **)a1 + 2), *(_QWORD *)(gpsi + 4944LL));
          }
        }
      }
      else
      {
        v26 = *((_QWORD *)a1 + 2);
        v82 = 0;
        v76 = 0;
        v77 = 0;
        v27 = *(_QWORD *)(v26 + 16);
        v84 = gptiCurrent;
        if ( v27 != gptiCurrent )
          LockW32Thread(v27, v91, v14, v15);
        *(_DWORD *)(v27 + 464) |= 0x8000u;
        if ( a2 )
          *(_OWORD *)a4 = *(_OWORD *)a2;
        v28 = *((_QWORD *)a1 + 2);
        v29 = *(_QWORD *)(v28 + 104);
        v80 = *(_OWORD *)a4;
        if ( v29 )
        {
          if ( !(unsigned int)IsTopLevelWindow(v28) )
          {
            ScreenToClient(v30, &v80);
            ScreenToClient(v31, (_DWORD *)&v80 + 2);
            if ( (*(_BYTE *)(v32 + 66) & 0x40) != 0 )
            {
              v33 = v80;
              LODWORD(v80) = DWORD2(v80);
              DWORD2(v80) = v33;
            }
          }
        }
        if ( *(char *)(v28 + 56) < 0 )
        {
          Spb = FindSpb(v28);
          v90 = *(_OWORD *)(v35 + 128);
          if ( a2 )
          {
            if ( (unsigned int)IntersectRect(&v90, (int *)&v90, a2) )
              FreeSpb(Spb);
          }
        }
        RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 2) + 128LL);
        v39 = RectRgnIndirect;
        v40 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 216LL);
        if ( v40 )
          GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v40, 1LL);
        v41 = *((_QWORD *)a1 + 2);
        v79 = (*((_DWORD *)a1 + 49) & 0x300) != 0 ? 1049108 : 532;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v40, v38);
        v88 = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = &v88;
        v89 = v41;
        if ( v41 )
          _InterlockedAdd((volatile signed __int32 *)(v41 + 8), 1u);
        v43 = *((_QWORD *)a1 + 2);
        v44 = HIDWORD(v80);
        v45 = *(_DWORD *)(v43 + 136) - *(_DWORD *)(v43 + 128);
        v81 = DWORD2(v80) - v80;
        if ( v45 != DWORD2(v80) - (_DWORD)v80
          || *(_DWORD *)(v43 + 140) - *(_DWORD *)(v43 + 132) != HIDWORD(v80) - DWORD1(v80) )
        {
          if ( (unsigned int)DoesQualifyForResizeOptimization(a1) )
          {
            v76 = 0;
            if ( (unsigned int)IsTopLevelWindow(v43) && *(char *)(v43 + 65) < (char)v47 )
            {
              for ( i = *(_QWORD *)(v43 + 112); i; i = *(_QWORD *)(i + 88) )
              {
                if ( *(char *)(i + 65) < (char)v47 )
                {
                  v47 = 1;
                  v76 = 1;
                  break;
                }
              }
            }
            if ( (unsigned int)GreWindowResizeStarted(v46, *(_QWORD *)v43, v47, &v77, &v83) && v77 )
              SetSystemTimer(*((_QWORD *)a1 + 2), 65522, v83, (int)ResizeTimerFunc, 1);
            v82 = 1;
          }
          v44 = HIDWORD(v80);
        }
        xxxSetWindowPos(*((struct tagWND **)a1 + 2), 0LL, (unsigned int)v80, DWORD1(v80), v81, v44 - DWORD1(v80), v79);
        if ( (*((_DWORD *)a1 + 49) & 0x20000000) != 0 )
        {
          v51 = ValidateHmonitor(*(_QWORD *)(*((_QWORD *)a1 + 2) + 360LL));
          v52 = *((_QWORD *)a1 + 2);
          *((_QWORD *)a1 + 26) = v51;
          if ( (unsigned int)IsTopLevelWindow(v52)
            && (*(_DWORD *)(v53 + 368) & 0xF) == 2
            && (*(_DWORD *)(*(_QWORD *)(v53 + 16) + 624LL) & 0x2000000) == 0 )
          {
            if ( a2 )
              *(_OWORD *)a2 = *(_OWORD *)(v53 + 128);
            *(_OWORD *)a4 = *(_OWORD *)(*((_QWORD *)a1 + 2) + 128LL);
            v54 = *(_OWORD *)(*((_QWORD *)a1 + 2) + 128LL);
            *(_QWORD *)((char *)a1 + 292) = *(_QWORD *)((char *)a1 + 300);
            *(_OWORD *)((char *)a1 + 120) = v54;
            *((_DWORD *)a1 + 73) -= *((_DWORD *)a1 + 30);
            *((_DWORD *)a1 + 74) -= *((_DWORD *)a1 + 31);
          }
          *((_DWORD *)a1 + 49) &= ~0x20000000u;
        }
        ThreadUnlock1(v50, v49);
        if ( *(struct _MOVESIZEDATA **)(v27 + 648) == a1 )
        {
          v55 = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 2) + 128LL);
          v56 = v55;
          v57 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 216LL);
          if ( v57 )
            GreCombineRgn(v55, v55, v57, 1LL);
          if ( v56 )
          {
            if ( v39 )
              GreCombineRgn(v39, v39, v56, 4LL);
          }
          else if ( v39 )
          {
            GreDeleteObject(v39);
            v39 = 0LL;
          }
          v58 = *(_QWORD *)(GetDesktopWindow(*((_QWORD *)a1 + 2)) + 112);
          v62 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59, v60, v61);
          v88 = *(_QWORD *)(v62 + 392);
          *(_QWORD *)(v62 + 392) = &v88;
          v89 = v58;
          if ( v58 )
            _InterlockedAdd((volatile signed __int32 *)(v58 + 8), 1u);
          v63 = v58;
          v64 = v84;
          xxxUpdateThreadsWindows(v84, v63, v39);
          ThreadUnlock1(v66, v65);
          if ( v82 )
          {
            GreWindowResizeComplete(*(_QWORD *)(gpDispInfo + 32LL), **((_QWORD **)a1 + 2));
            if ( v77 )
            {
              if ( !v76 )
                FindTimer(*((_QWORD *)a1 + 2), 65522LL, 2u, 1, 0LL);
            }
          }
          GreDeleteObject(v56);
        }
        else
        {
          v64 = v84;
        }
        result = GreDeleteObject(v39);
        *(_DWORD *)(v27 + 464) &= ~0x8000u;
        if ( v27 != v64 )
          result = PopAndFreeW32ThreadLock((__int64)v91, v67);
      }
      if ( v78 && *((_DWORD *)a1 + 44) == 9 )
      {
        v87 = *((_QWORD *)a1 + 26);
        PhysicalToLogicalDPIPoint(v85, (char *)a1 + 308, *(unsigned int *)(*((_QWORD *)a1 + 2) + 368LL), &v87);
        *((_DWORD *)a1 + 42) = v86.left - v85[0];
        result = (unsigned int)(v86.top - v85[1]);
        *((_DWORD *)a1 + 43) = result;
      }
    }
  }
  else if ( a2 )
  {
    *(_OWORD *)a4 = *(_OWORD *)a2;
  }
  return result;
}
