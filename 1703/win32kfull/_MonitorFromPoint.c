/*
 * XREFs of _MonitorFromPoint @ 0x1C0020750
 * Callers:
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     zzzInternalSetCursorPos @ 0x1C00BBC30 (zzzInternalSetCursorPos.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00BBE1C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C019C500 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01B6C7C (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01C01F0 (GetDPITransformationMonitor.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C01D69B0 (NtUserCalculatePopupWindowPosition.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01D8F20 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01EFED0 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     xxxInitializeMoveSizeData @ 0x1C01F76A4 (xxxInitializeMoveSizeData.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C020D3F8 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetDPIMonitorRect @ 0x1C0020B94 (GetDPIMonitorRect.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 */

__int64 __fastcall MonitorFromPoint(__int64 a1, unsigned int a2)
{
  __int64 v3; // r15
  unsigned int v6; // esi
  __int64 i; // rdi
  __int64 DPIMonitorRect; // rax
  unsigned int v9; // ebp
  _DWORD *v10; // rax
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // r8d
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rbp
  _DWORD *v19; // r8
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // edx
  int v24; // r9d
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  int v27; // [rsp+44h] [rbp+Ch]

  v27 = HIDWORD(a1);
  v3 = 0LL;
  if ( *(_DWORD *)*gpDispInfo == 1 && (a2 & 3) != 0 )
    return *(_QWORD *)(GetDispInfo() + 88);
  v6 = a2 & 3;
  if ( v6 <= 1 )
  {
    for ( i = *(_QWORD *)(gpDispInfo + 96LL); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        DPIMonitorRect = GetDPIMonitorRect(i, a2);
        if ( (unsigned int)PtInRect(DPIMonitorRect, a1) )
          return i;
      }
    }
    if ( (a2 & 3) != 0 )
      return *(_QWORD *)(GetDispInfo() + 88);
    return 0LL;
  }
  if ( v6 != 2 )
    return 0LL;
  if ( (unsigned int)(a1 + 0x8000) > 0xFFFF || (unsigned int)(HIDWORD(a1) + 0x8000) > 0xFFFF )
  {
    v18 = -1LL;
    for ( i = *(_QWORD *)(gpDispInfo + 96LL); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v19 = (_DWORD *)GetDPIMonitorRect(i, a2);
        if ( (int)a1 >= *v19 )
        {
          v21 = v19[2];
          v20 = (int)a1 >= v21 ? a1 - v21 + 1 : 0;
        }
        else
        {
          v20 = *v19 - a1;
        }
        if ( v20 < v18 )
        {
          v22 = v19[1];
          if ( v27 >= v22 )
          {
            v24 = v19[3];
            if ( v27 >= v24 )
            {
              v23 = v27 - v24 + 1;
            }
            else
            {
              if ( !v20 )
                return i;
              v23 = 0;
            }
          }
          else
          {
            v23 = v22 - v27;
          }
          v25 = v20 * (__int64)v20;
          if ( v25 < v18 && v23 + v25 < v18 )
          {
            v26 = v23 * (__int64)v23 + v25;
            if ( v26 < v18 )
            {
              v18 = v26;
              v3 = i;
            }
          }
        }
      }
    }
  }
  else
  {
    v9 = -1;
    for ( i = *(_QWORD *)(gpDispInfo + 96LL); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v10 = (_DWORD *)GetDPIMonitorRect(i, a2);
        if ( (int)a1 >= *v10 )
        {
          v12 = v10[2];
          v11 = (int)a1 >= v12 ? a1 - v12 + 1 : 0;
        }
        else
        {
          v11 = *v10 - a1;
        }
        if ( v11 < v9 )
        {
          v13 = v10[1];
          if ( v27 >= v13 )
          {
            v15 = v10[3];
            if ( v27 >= v15 )
            {
              v14 = v27 - v15 + 1;
            }
            else
            {
              if ( !v11 )
                return i;
              v14 = 0;
            }
          }
          else
          {
            v14 = v13 - v27;
          }
          v16 = v11 * v11;
          if ( v16 < v9 && v16 + v14 < v9 )
          {
            v17 = v14 * v14 + v16;
            if ( v17 < v9 )
            {
              v9 = v17;
              v3 = i;
            }
          }
        }
      }
    }
  }
  return v3;
}
