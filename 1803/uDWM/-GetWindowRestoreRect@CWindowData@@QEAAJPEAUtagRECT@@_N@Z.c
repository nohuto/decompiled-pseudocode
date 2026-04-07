/*
 * XREFs of ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180084EB4
 * Callers:
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x1800772BC (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180081A94 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x1800869FC (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x18002CA64 (-GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18004B342 (floor_0.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 */

__int64 __fastcall CWindowData::GetWindowRestoreRect(CWindowData *this, struct tagRECT *a2, char a3)
{
  unsigned int v3; // edi
  CWindowList *v7; // rcx
  signed int LastError; // eax
  int v9; // eax
  LONG bottom; // ebx
  double v11; // xmm0_8
  int v12; // ebx
  int v13; // eax
  double v14; // xmm0_8
  HMONITOR v15; // rbx
  RECT rcWork; // xmm0
  __int64 v17; // rcx
  HMONITOR v18; // rax
  unsigned int v20; // [rsp+20h] [rbp-49h]
  int v21; // [rsp+30h] [rbp-39h] BYREF
  int v22; // [rsp+34h] [rbp-35h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+38h] [rbp-31h] BYREF
  struct tagMONITORINFO mi; // [rsp+68h] [rbp-1h] BYREF

  v3 = 0;
  if ( (*((_DWORD *)this + 25) & 0x20000000) == 0 )
  {
    *a2 = *((struct tagRECT *)this + 3);
    return v3;
  }
  wndpl.length = 44;
  memset_0(&wndpl.flags, 0, 0x28uLL);
  SetLastError(0);
  if ( GetWindowPlacement(*((HWND *)this + 5), &wndpl) )
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 76) - 1.0)) & _xmm) >= 0.0000011920929 )
    {
      CWindowList::GetPhysicalPtFromLogical(v7, this, &wndpl.rcNormalPosition, &v21, &v22);
      v9 = 0;
      bottom = wndpl.rcNormalPosition.bottom;
      if ( wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left >= 0 )
        v9 = wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left;
      v11 = floor_0((float)((float)v9 * *((float *)this + 76)) + 0.5);
      v12 = bottom - wndpl.rcNormalPosition.top;
      wndpl.rcNormalPosition.left = v21 + (int)v11;
      v13 = 0;
      if ( v12 >= 0 )
        v13 = v12;
      v14 = floor_0((float)((float)v13 * *((float *)this + 76)) + 0.5);
      wndpl.rcNormalPosition.right = v22 + (int)v14;
    }
    SetLastError(0);
    v15 = MonitorFromRect(&wndpl.rcNormalPosition, 1u);
    if ( v15 )
    {
      if ( (wndpl.flags & 2) != 0 )
      {
        mi.cbSize = 40;
        SetLastError(0);
        if ( !GetMonitorInfoW(v15, &mi) )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          v20 = 7529;
          goto LABEL_7;
        }
        rcWork = mi.rcWork;
      }
      else
      {
        *a2 = wndpl.rcNormalPosition;
        if ( !a3 )
          return v3;
        v17 = *((_QWORD *)this + 53);
        if ( !v17 )
          return v3;
        v18 = MonitorFromRect((LPCRECT)(*(_QWORD *)(v17 + 32) + 48LL), 0);
        if ( !v18 || v18 != v15 )
          return v3;
        rcWork = *(RECT *)(*(_QWORD *)(*((_QWORD *)this + 53) + 32LL) + 48LL);
      }
      *a2 = rcWork;
      return v3;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v20 = 7523;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v20 = 7496;
  }
LABEL_7:
  if ( LastError >= 0 )
    LastError = -2003304445;
  v3 = LastError;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LastError, v20);
  return v3;
}
