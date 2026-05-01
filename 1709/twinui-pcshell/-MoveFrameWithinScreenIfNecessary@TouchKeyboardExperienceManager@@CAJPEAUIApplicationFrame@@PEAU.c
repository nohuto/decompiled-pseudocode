/*
 * XREFs of ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@@Z @ 0x18019B620
 * Callers:
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x18019B4E0 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@@Z @ 0x18006499C (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(
        struct IApplicationFrame *a1,
        struct IApplicationFrameWrapper *a2)
{
  __int64 v3; // rdx
  unsigned int v4; // ebx
  __int64 v6; // rdx
  const char *v7; // r9
  LONG right; // edx
  LONG left; // eax
  LONG bottom; // edx
  LONG top; // eax
  HMONITOR v12; // rbx
  BOOL MonitorInfoW; // eax
  LONG v14; // ecx
  LONG v15; // r8d
  LONG v16; // edx
  LONG v17; // r10d
  char v18; // al
  int v19; // r9d
  int v20; // r8d
  LONG v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  __int64 v25; // rdx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // [rsp+28h] [rbp-29h] BYREF
  RECT v29; // [rsp+38h] [rbp-19h] BYREF
  HWND hWnd[2]; // [rsp+48h] [rbp-9h] BYREF
  RECT rc; // [rsp+58h] [rbp+7h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp+17h] BYREF
  struct tagMONITORINFO mi; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  hWnd[1] = (HWND)-2LL;
  if ( !a1 )
  {
    v3 = 798LL;
LABEL_3:
    v4 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v4);
    return v4;
  }
  if ( !a2 )
  {
    v3 = 799LL;
    goto LABEL_3;
  }
  hWnd[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a1 + 24LL))(a1, hWnd);
  if ( (v4 & 0x80000000) != 0 )
  {
    v6 = 802LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v4);
    return v4;
  }
  *(_QWORD *)&Rect.left = 0LL;
  *(_QWORD *)&Rect.right = 0LL;
  if ( !GetWindowRect(hWnd[0], &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x324,
             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v7);
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  right = Rect.right;
  left = Rect.right;
  if ( Rect.left < Rect.right )
    left = Rect.left;
  rc.left = left;
  if ( Rect.left > Rect.right )
    right = Rect.left;
  rc.right = right;
  bottom = Rect.bottom;
  top = Rect.bottom;
  if ( Rect.top < Rect.bottom )
    top = Rect.top;
  rc.top = top;
  if ( Rect.top > Rect.bottom )
    bottom = Rect.top;
  rc.bottom = bottom;
  v12 = MonitorFromRect(&rc, 2u);
  if ( !v12 )
  {
    v4 = -2147418113;
    v3 = 814LL;
    goto LABEL_4;
  }
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  MonitorInfoW = GetMonitorInfoW(v12, &mi);
  v4 = !MonitorInfoW ? 0x80004005 : 0;
  if ( !MonitorInfoW )
  {
    v6 = 817LL;
    goto LABEL_10;
  }
  v14 = mi.rcMonitor.right;
  v15 = mi.rcMonitor.right;
  if ( mi.rcMonitor.left < mi.rcMonitor.right )
    v15 = mi.rcMonitor.left;
  if ( mi.rcMonitor.left > mi.rcMonitor.right )
    v14 = mi.rcMonitor.left;
  v16 = mi.rcMonitor.bottom;
  v17 = mi.rcMonitor.bottom;
  if ( mi.rcMonitor.top < mi.rcMonitor.bottom )
    v17 = mi.rcMonitor.top;
  if ( mi.rcMonitor.top > mi.rcMonitor.bottom )
    v16 = mi.rcMonitor.top;
  v18 = 0;
  v29 = rc;
  v19 = _mm_cvtsi128_si32((__m128i)rc);
  if ( v19 >= v15 )
  {
    if ( v14 < rc.right )
    {
      v22 = v14 - rc.right;
      v21 = v22 + v19;
      v29.right += v22;
      goto LABEL_38;
    }
  }
  else if ( v14 >= rc.right )
  {
    v20 = v15 - v19;
    v21 = v20 + v19;
    v29.right += v20;
LABEL_38:
    v29.left = v21;
    v18 = 1;
  }
  if ( rc.top >= v17 && v16 < rc.bottom )
  {
    v23 = v16 - rc.bottom;
    v29.top += v23;
    v29.bottom += v23;
    v18 = 1;
  }
  if ( v18 )
  {
    v28 = 0LL;
    v24 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            &v28,
            &v29);
    v4 = v24;
    if ( v24 < 0 )
    {
      v25 = 866LL;
      goto LABEL_47;
    }
    v24 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, void *))(*(_QWORD *)a1 + 32LL))(a1, v28);
    v4 = v24;
    if ( v24 < 0 )
    {
      v25 = 867LL;
LABEL_47:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v25,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v24);
      v26 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 16LL))(v26);
      }
      return v4;
    }
    v27 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v27 + 16LL))(v27);
    }
  }
  return 0LL;
}
