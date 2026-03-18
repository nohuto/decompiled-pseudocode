/*
 * XREFs of _MonitorFromRect @ 0x1C005D960
 * Callers:
 *     xxxSetWindowPlacement @ 0x1C004A88C (xxxSetWindowPlacement.c)
 *     _GetWindowPlacement @ 0x1C004B5A0 (_GetWindowPlacement.c)
 *     CkptUpdate @ 0x1C004B97C (CkptUpdate.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C005D868 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     xxxCheckFullScreen @ 0x1C005F0B8 (xxxCheckFullScreen.c)
 *     GetNewMonitor @ 0x1C00644F0 (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     CitGetWindowInfo @ 0x1C01090E0 (CitGetWindowInfo.c)
 *     CreateSpb @ 0x1C0125804 (CreateSpb.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C013FDAC (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01AAB10 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     DetectNewMonitor @ 0x1C01C3688 (DetectNewMonitor.c)
 *     xxxSetInternalWindowPos @ 0x1C01D2EAC (xxxSetInternalWindowPos.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01DA1B4 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020518C (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _MonitorFromPoint @ 0x1C0055A30 (_MonitorFromPoint.c)
 *     GetScreenRectForDpi @ 0x1C005D54C (GetScreenRectForDpi.c)
 *     GetMonitorRectForDpi @ 0x1C005EF84 (GetMonitorRectForDpi.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromRect(struct tagRECT *a1, unsigned int a2, unsigned int a3)
{
  int v3; // r14d
  __int64 v5; // r13
  __int64 DispInfo; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int16 v12; // r15
  __int128 *ScreenRectForDpi; // rax
  __int128 v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  unsigned int v18; // esi
  __int64 v19; // rdi
  unsigned int v20; // esi
  __int128 v21; // xmm0
  LONG right; // eax
  int v23; // ecx
  unsigned int v24; // ecx
  LONG bottom; // eax
  int v26; // edx
  LONG top; // eax
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  __int64 v30; // rdi
  unsigned __int64 v31; // rsi
  __int128 *MonitorRectForDpi; // rax
  LONG v33; // ecx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rcx
  LONG v37; // eax
  int v38; // edx
  LONG v39; // eax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  __int128 v42; // [rsp+20h] [rbp-49h] BYREF
  __int128 v43; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v44[16]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v45[16]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v46[16]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v47; // [rsp+70h] [rbp+7h] BYREF
  __int64 v48; // [rsp+78h] [rbp+Fh]

  v3 = 0;
  v5 = 0LL;
  DispInfo = GetDispInfo();
  if ( **(_DWORD **)DispInfo == 1 && a2 )
    return *(_QWORD *)(GetDispInfo() + 88);
  if ( IsRectEmptyInl(a1) )
    return MonitorFromPoint(*(_QWORD *)&a1->left, a2, a3);
  if ( a3 )
  {
    v12 = (a3 >> 8) & 0x1FF;
  }
  else
  {
    v12 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v11, v10) >> 8) & 0x1FF;
    if ( v12
      && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432)
       || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432) + 8LL) + 52LL) & 1) == 0) )
    {
      v12 = 0;
    }
  }
  ScreenRectForDpi = GetScreenRectForDpi(&v43, v12);
  v14 = *ScreenRectForDpi;
  v15 = *(_QWORD *)ScreenRectForDpi;
  v42 = v14;
  if ( a1->left <= (int)v15 && a1->top <= SHIDWORD(v15) && a1->right >= SDWORD2(v42) && a1->bottom >= SHIDWORD(v42) )
    return *(_QWORD *)(GetDispInfo() + 88);
  v16 = *(_QWORD *)(DispInfo + 96);
  if ( v16 )
  {
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v16 + 40) + 24LL) & 1) != 0 )
      {
        v42 = *(_OWORD *)GetMonitorRectForDpi(v44, v16, v12);
        if ( (unsigned int)IntersectRect(&v47, a1, &v42) )
        {
          v17 = v47 - *(_QWORD *)&a1->left;
          if ( v47 == *(_QWORD *)&a1->left )
            v17 = v48 - *(_QWORD *)&a1->right;
          if ( !v17 )
            return v16;
          if ( ((int)v48 - (int)v47) * (HIDWORD(v48) - HIDWORD(v47)) > v3 )
          {
            v3 = (v48 - v47) * (HIDWORD(v48) - HIDWORD(v47));
            v5 = v16;
          }
        }
      }
      v16 = *(_QWORD *)(v16 + 56);
    }
    while ( v16 );
    if ( v3 > 0 )
      return v5;
  }
  if ( a2 )
  {
    v18 = a2 - 1;
    if ( !v18 )
      return *(_QWORD *)(GetDispInfo() + 88);
    if ( v18 == 1 )
    {
      if ( (unsigned int)(a1->left + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->top + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->right + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->bottom + 0x8000) <= 0xFFFF )
      {
        v19 = *(_QWORD *)(DispInfo + 96);
        v20 = -1;
        while ( 1 )
        {
          if ( !v19 )
            return v5;
          if ( (*(_DWORD *)(*(_QWORD *)(v19 + 40) + 24LL) & 1) != 0 )
            break;
LABEL_55:
          v19 = *(_QWORD *)(v19 + 56);
        }
        v21 = *(_OWORD *)GetMonitorRectForDpi(v45, v19, v12);
        right = a1->right;
        v42 = v21;
        if ( right > (int)v21 )
        {
          if ( a1->left < SDWORD2(v21) )
          {
            v24 = 0;
            goto LABEL_45;
          }
          v23 = a1->left - DWORD2(v21);
        }
        else
        {
          v23 = v21 - right;
        }
        v24 = v23 + 1;
LABEL_45:
        if ( v24 < v20 )
        {
          bottom = a1->bottom;
          if ( bottom > SDWORD1(v21) )
          {
            top = a1->top;
            if ( top >= SHIDWORD(v21) )
              v26 = top - HIDWORD(v21) + 1;
            else
              v26 = 0;
          }
          else
          {
            v26 = DWORD1(v21) - bottom + 1;
          }
          v28 = v24 * v24;
          if ( v28 < v20 && v28 + v26 < v20 )
          {
            v29 = v26 * v26 + v28;
            if ( v29 < v20 )
            {
              v20 = v29;
              v5 = v19;
            }
          }
        }
        goto LABEL_55;
      }
      v30 = *(_QWORD *)(DispInfo + 96);
      v31 = -1LL;
      while ( 1 )
      {
        if ( !v30 )
          return v5;
        if ( (*(_DWORD *)(*(_QWORD *)(v30 + 40) + 24LL) & 1) != 0 )
          break;
LABEL_76:
        v30 = *(_QWORD *)(v30 + 56);
      }
      MonitorRectForDpi = (__int128 *)GetMonitorRectForDpi(v46, v30, v12);
      v33 = a1->right;
      v42 = *MonitorRectForDpi;
      if ( v33 > (int)v42 )
      {
        if ( a1->left < SDWORD2(v42) )
        {
          v35 = 0;
LABEL_66:
          v36 = v35;
          if ( v35 < v31 )
          {
            v37 = a1->bottom;
            if ( v37 > SDWORD1(v42) )
            {
              v39 = a1->top;
              v38 = v39 >= SHIDWORD(v42) ? v39 - HIDWORD(v42) + 1 : 0;
            }
            else
            {
              v38 = DWORD1(v42) - v37 + 1;
            }
            v40 = v36 * v36;
            if ( v40 < v31 && v38 + v40 < v31 )
            {
              v41 = v38 * (__int64)v38 + v40;
              if ( v41 < v31 )
              {
                v31 = v41;
                v5 = v30;
              }
            }
          }
          goto LABEL_76;
        }
        v34 = a1->left - DWORD2(v42);
      }
      else
      {
        v34 = v42 - v33;
      }
      v35 = v34 + 1;
      goto LABEL_66;
    }
  }
  return 0LL;
}
