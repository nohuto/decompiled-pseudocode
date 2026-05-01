/*
 * XREFs of ?SetHostedPos@FrameWrapper@@UEAAJPEBUtagRECT@@@Z @ 0x180061B20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@@Z @ 0x180062D20 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FrameWrapper::SetHostedPos(FrameWrapper *this, const struct tagRECT *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  const char *v5; // r9
  __int64 v6; // rdx
  HMONITOR v8; // rsi
  RECT *p_rcMonitor; // rax
  RECT v10; // xmm0
  int v11; // eax
  LONG left; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // [rsp+28h] [rbp-69h] BYREF
  __int64 v20; // [rsp+30h] [rbp-61h] BYREF
  HWND hwnd[2]; // [rsp+38h] [rbp-59h] BYREF
  RECT rc; // [rsp+48h] [rbp-49h] BYREF
  struct tagPOINT Points[2]; // [rsp+58h] [rbp-39h] BYREF
  struct tagRECT v24; // [rsp+68h] [rbp-29h] BYREF
  _DWORD v25[4]; // [rsp+78h] [rbp-19h] BYREF
  struct tagRECT Rect; // [rsp+88h] [rbp-9h] BYREF
  __int128 v27; // [rsp+98h] [rbp+7h] BYREF
  tagMONITORINFO mi; // [rsp+A8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  hwnd[1] = (HWND)-2LL;
  rc = *a2;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 2) + 120LL))(*((_QWORD *)this + 2), v25);
  if ( v3 >= 0 )
  {
    rc.left -= v25[0];
    rc.top -= v25[1];
    rc.right -= v25[2];
    rc.bottom -= v25[3];
    SetLastError(0);
    if ( !GetClientRect(*((HWND *)this + 4), &Rect) )
    {
      v6 = 139LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
               v5);
    }
    if ( !GetWindowRect(*((HWND *)this + 4), &v24) )
    {
      v6 = 142LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
               v5);
    }
    if ( !MapWindowPoints(0LL, *((HWND *)this + 4), (LPPOINT)&v24, 2u) && GetLastError() )
    {
      v6 = 146LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
               v5);
    }
    rc.left += v24.left - Rect.left;
    rc.top += v24.top - Rect.top;
    rc.right += v24.right - Rect.right;
    rc.bottom += v24.bottom - Rect.bottom;
    v8 = MonitorFromRect(&rc, 2u);
    if ( !v8 )
    {
      v3 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
        (const char *)0x8000FFFFLL);
      return (unsigned int)v3;
    }
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v8, &mi) )
    {
      if ( !(unsigned int)GetWindowBand(*((_QWORD *)this + 4), &v19) || (p_rcMonitor = &mi.rcWork, (_DWORD)v19 != 1) )
        p_rcMonitor = &mi.rcMonitor;
      v10 = *p_rcMonitor;
      *(RECT *)&Points[0].x = v10;
      if ( rc.top < v10.top )
      {
        v11 = v10.top - rc.top;
        rc.top = v10.top;
        rc.bottom += v11;
      }
      if ( rc.left >= v10.left )
      {
        if ( rc.right <= Points[1].x )
          goto LABEL_25;
        left = Points[1].x - rc.right + rc.left;
        rc.right = Points[1].x;
      }
      else
      {
        left = v10.left;
        rc.right += v10.left - rc.left;
      }
      rc.left = left;
    }
LABEL_25:
    v3 = (*(__int64 (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), hwnd);
    if ( v3 < 0 )
    {
      v4 = 192LL;
      goto LABEL_3;
    }
    if ( v8 != MonitorFromWindow(hwnd[0], 1u) )
    {
      v3 = (*(__int64 (__fastcall **)(FrameWrapper *, __int128 *))(*(_QWORD *)this + 56LL))(this, &v27);
      if ( v3 < 0 )
      {
        v4 = 197LL;
        goto LABEL_3;
      }
      *(_OWORD *)&Points[0].x = v27;
      if ( !MapWindowPoints(hwnd[0], 0LL, Points, 2u) && GetLastError() )
      {
        v6 = 201LL;
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)v6,
                 (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
                 v5);
      }
      Points[1].x += rc.left - Points[0].x;
      Points[0].x = rc.left;
      Points[1].y += rc.top - Points[0].y;
      Points[0].y = rc.top;
      v19 = 0LL;
      v13 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
              &v19,
              Points);
      v3 = v13;
      if ( v13 < 0 )
      {
        v14 = 210LL;
LABEL_37:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
          (const char *)(unsigned int)v13);
        v15 = v19;
        if ( !v19 )
          return (unsigned int)v3;
        v19 = 0LL;
LABEL_49:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        return (unsigned int)v3;
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2), v19);
      v3 = v13;
      if ( v13 < 0 )
      {
        v14 = 211LL;
        goto LABEL_37;
      }
      v16 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    v20 = 0LL;
    v17 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            &v20,
            &rc);
    v3 = v17;
    if ( v17 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2), v20);
      v3 = v17;
      if ( v17 >= 0 )
      {
        v3 = 0;
        goto LABEL_47;
      }
      v18 = 216LL;
    }
    else
    {
      v18 = 215LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v18,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v17);
LABEL_47:
    v15 = v20;
    if ( !v20 )
      return (unsigned int)v3;
    v20 = 0LL;
    goto LABEL_49;
  }
  v4 = 131LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
