/*
 * XREFs of _MonitorFromRect @ 0x1C00209D0
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0015690 (xxxCheckFullScreen.c)
 *     _GetWindowPlacement @ 0x1C001CFF0 (_GetWindowPlacement.c)
 *     CkptUpdate @ 0x1C001D51C (CkptUpdate.c)
 *     _MonitorFromWindow @ 0x1C00208D4 (_MonitorFromWindow.c)
 *     GetNewMonitor @ 0x1C0060BF0 (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     xxxSetWindowPlacement @ 0x1C0101008 (xxxSetWindowPlacement.c)
 *     CitGetWindowInfo @ 0x1C0101740 (CitGetWindowInfo.c)
 *     CreateSpb @ 0x1C011C530 (CreateSpb.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01A3358 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     DetectNewMonitor @ 0x1C01BFD64 (DetectNewMonitor.c)
 *     CreateFade @ 0x1C01C1A90 (CreateFade.c)
 *     xxxSetInternalWindowPos @ 0x1C01D2BBC (xxxSetInternalWindowPos.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01F27EC (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0203704 (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0020750 (_MonitorFromPoint.c)
 *     GetDPIMonitorRect @ 0x1C0020B94 (GetDPIMonitorRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromRect(int *a1, unsigned int a2)
{
  __int64 v2; // r14
  __int64 v5; // rdi
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rdi
  __int64 DPIMonitorRect; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 ThreadWin32Thread; // rax
  unsigned int v26; // esi
  __int64 j; // rdi
  int *v28; // rax
  int v29; // edx
  int v30; // ecx
  unsigned int v31; // ecx
  int v32; // r8d
  int v33; // edx
  int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned __int64 v37; // rsi
  __int64 i; // rdi
  int *v39; // r8
  int v40; // eax
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // rdx
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  __int64 v49; // [rsp+20h] [rbp-48h] BYREF
  __int64 v50; // [rsp+28h] [rbp-40h]

  v2 = 0LL;
  v5 = *gpDispInfo;
  if ( *(_DWORD *)*gpDispInfo == 1 && (a2 & 3) != 0 )
    return *(_QWORD *)(GetDispInfo() + 88);
  if ( *a1 >= a1[2] || a1[1] >= a1[3] )
    return MonitorFromPoint(*(_QWORD *)a1, a2);
  if ( (a2 & 0x20) != 0 )
    goto LABEL_7;
  if ( (a2 & 0x40) != 0 )
    goto LABEL_35;
  if ( (a2 & 0x80u) != 0 )
  {
    v7 = 56LL;
    goto LABEL_8;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(gpDispInfo) & 0xF) == 0 )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v12, v14, v15) + 408) )
    {
      v13 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v16, v17, v18) + 408) + 8LL);
      if ( (*(_DWORD *)(v13 + 52) & 1) != 0 )
      {
LABEL_35:
        v7 = 40LL;
        goto LABEL_8;
      }
    }
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v13) & 0xF) != 1
    || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v19, v20, v21) + 408)
    || (ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v22, v23, v24),
        v7 = 56LL,
        (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 408) + 8LL) + 52LL) & 1) == 0) )
  {
LABEL_7:
    v7 = 24LL;
  }
LABEL_8:
  if ( *a1 <= *(_DWORD *)(v7 + v5)
    && a1[1] <= *(_DWORD *)(v7 + v5 + 4)
    && a1[2] >= *(_DWORD *)(v7 + v5 + 8)
    && a1[3] >= *(_DWORD *)(v7 + v5 + 12) )
  {
    return *(_QWORD *)(GetDispInfo() + 88);
  }
  v8 = 0;
  v9 = *(_QWORD *)(gpDispInfo + 96LL);
  if ( v9 )
  {
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 24LL) & 1) != 0 )
      {
        DPIMonitorRect = GetDPIMonitorRect(v9, a2);
        if ( (unsigned int)IntersectRect(&v49, a1, DPIMonitorRect) )
        {
          v11 = v49 - *(_QWORD *)a1;
          if ( v49 == *(_QWORD *)a1 )
            v11 = v50 - *((_QWORD *)a1 + 1);
          if ( !v11 )
            return v9;
          if ( (a2 & 0x10) == 0 && ((int)v50 - (int)v49) * (HIDWORD(v50) - HIDWORD(v49)) > v8 )
          {
            v8 = (v50 - v49) * (HIDWORD(v50) - HIDWORD(v49));
            v2 = v9;
          }
        }
      }
      v9 = *(_QWORD *)(v9 + 56);
    }
    while ( v9 );
    if ( v8 > 0 )
      return v2;
  }
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 3) == 1 )
      return *(_QWORD *)(GetDispInfo() + 88);
    if ( (a2 & 3) == 2 )
    {
      if ( (unsigned int)(*a1 + 0x8000) > 0xFFFF
        || (unsigned int)(a1[1] + 0x8000) > 0xFFFF
        || (unsigned int)(a1[2] + 0x8000) > 0xFFFF
        || (unsigned int)(a1[3] + 0x8000) > 0xFFFF )
      {
        v37 = -1LL;
        for ( i = *(_QWORD *)(gpDispInfo + 96LL); i; i = *(_QWORD *)(i + 56) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
          {
            v39 = (int *)GetDPIMonitorRect(i, a2);
            v40 = a1[2];
            v41 = *v39;
            if ( v40 <= *v39 || (v41 = *a1, v40 = v39[2], *a1 >= v40) )
              v42 = v41 - v40 + 1;
            else
              v42 = 0;
            v43 = v42;
            if ( v42 < v37 )
            {
              v44 = a1[3];
              v45 = v39[1];
              if ( v44 <= v45 || (v45 = a1[1], v44 = v39[3], v45 >= v44) )
                v46 = v45 - v44 + 1;
              else
                v46 = 0;
              v47 = v43 * v43;
              if ( v47 < v37 && v46 + v47 < v37 )
              {
                v48 = v46 * (__int64)v46 + v47;
                if ( v48 < v37 )
                {
                  v37 = v48;
                  v2 = i;
                }
              }
            }
          }
        }
      }
      else
      {
        v26 = -1;
        for ( j = *(_QWORD *)(gpDispInfo + 96LL); j; j = *(_QWORD *)(j + 56) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(j + 40) + 24LL) & 1) != 0 )
          {
            v28 = (int *)GetDPIMonitorRect(j, a2);
            v29 = a1[2];
            v30 = *v28;
            if ( v29 <= *v28 || (v30 = *a1, v29 = v28[2], *a1 >= v29) )
              v31 = v30 - v29 + 1;
            else
              v31 = 0;
            if ( v31 < v26 )
            {
              v32 = a1[3];
              v33 = v28[1];
              if ( v32 <= v33 || (v33 = a1[1], v32 = v28[3], v33 >= v32) )
                v34 = v33 - v32 + 1;
              else
                v34 = 0;
              v35 = v31 * v31;
              if ( v35 < v26 && v35 + v34 < v26 )
              {
                v36 = v34 * v34 + v35;
                if ( v36 < v26 )
                {
                  v26 = v36;
                  v2 = j;
                }
              }
            }
          }
        }
      }
      return v2;
    }
  }
  return 0LL;
}
