/*
 * XREFs of _MonitorFromPoint @ 0x1C0055A30
 * Callers:
 *     zzzInternalSetCursorPos @ 0x1C0051D98 (zzzInternalSetCursorPos.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00555DC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C013B98C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01BBFD8 (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01C3AC0 (GetDPITransformationMonitor.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01D7CE8 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     xxxInitializeMoveSizeData @ 0x1C01DE8F8 (xxxInitializeMoveSizeData.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C01E3140 (NtUserCalculatePopupWindowPosition.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01E5870 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     GetMonitorRectForDpi @ 0x1C005EF84 (GetMonitorRectForDpi.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromPoint(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 DispInfo; // r14
  unsigned __int16 v11; // r15
  __int64 i; // rdi
  unsigned int v13; // ebp
  unsigned int v14; // ecx
  int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rbp
  int v19; // eax
  int v20; // edx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  __int128 v23; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v24[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v25[16]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v26[16]; // [rsp+50h] [rbp-48h] BYREF
  int v27; // [rsp+A4h] [rbp+Ch]

  v27 = HIDWORD(a1);
  v4 = 0LL;
  DispInfo = GetDispInfo();
  if ( **(_DWORD **)DispInfo == 1 && a2 )
    return *(_QWORD *)(GetDispInfo() + 88);
  if ( a3 )
  {
    v11 = (a3 >> 8) & 0x1FF;
  }
  else
  {
    v11 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v8, v7) >> 8) & 0x1FF;
    if ( v11
      && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432)
       || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432) + 8LL) + 52LL) & 1) == 0) )
    {
      v11 = 0;
    }
  }
  if ( a2 <= 1 )
  {
    for ( i = *(_QWORD *)(DispInfo + 96); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v23 = *(_OWORD *)GetMonitorRectForDpi(v26, i, v11);
        if ( (unsigned int)PtInRect(&v23, a1) )
          return i;
      }
    }
    if ( a2 )
      return *(_QWORD *)(GetDispInfo() + 88);
    return 0LL;
  }
  if ( a2 != 2 )
    return 0LL;
  if ( (unsigned int)(a1 + 0x8000) > 0xFFFF || (unsigned int)(v27 + 0x8000) > 0xFFFF )
  {
    i = *(_QWORD *)(DispInfo + 96);
    v18 = -1LL;
    while ( i )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v23 = *(_OWORD *)GetMonitorRectForDpi(v25, i, v11);
        if ( (int)a1 >= (int)v23 )
          v19 = (int)a1 >= SDWORD2(v23) ? a1 - DWORD2(v23) + 1 : 0;
        else
          v19 = v23 - a1;
        if ( v19 < v18 )
        {
          if ( v27 >= SDWORD1(v23) )
          {
            if ( v27 >= SHIDWORD(v23) )
            {
              v20 = v27 - HIDWORD(v23) + 1;
            }
            else
            {
              if ( !v19 )
                return i;
              v20 = 0;
            }
          }
          else
          {
            v20 = DWORD1(v23) - v27;
          }
          v21 = v19 * (__int64)v19;
          if ( v21 < v18 && v20 + v21 < v18 )
          {
            v22 = v20 * (__int64)v20 + v21;
            if ( v22 < v18 )
            {
              v18 = v22;
              v4 = i;
            }
          }
        }
      }
      i = *(_QWORD *)(i + 56);
    }
  }
  else
  {
    i = *(_QWORD *)(DispInfo + 96);
    v13 = -1;
    while ( i )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v23 = *(_OWORD *)GetMonitorRectForDpi(v24, i, v11);
        if ( (int)a1 >= (int)v23 )
          v14 = (int)a1 >= SDWORD2(v23) ? a1 - DWORD2(v23) + 1 : 0;
        else
          v14 = v23 - a1;
        if ( v14 < v13 )
        {
          if ( v27 >= SDWORD1(v23) )
          {
            if ( v27 >= SHIDWORD(v23) )
            {
              v15 = v27 - HIDWORD(v23) + 1;
            }
            else
            {
              if ( !v14 )
                return i;
              v15 = 0;
            }
          }
          else
          {
            v15 = DWORD1(v23) - v27;
          }
          v16 = v14 * v14;
          if ( v16 < v13 && v16 + v15 < v13 )
          {
            v17 = v15 * v15 + v16;
            if ( v17 < v13 )
            {
              v13 = v17;
              v4 = i;
            }
          }
        }
      }
      i = *(_QWORD *)(i + 56);
    }
  }
  return v4;
}
