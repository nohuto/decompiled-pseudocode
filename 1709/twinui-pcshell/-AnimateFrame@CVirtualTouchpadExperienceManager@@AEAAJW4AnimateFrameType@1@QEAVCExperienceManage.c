/*
 * XREFs of ?AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManagerAnimationHelper@@@Z @ 0x1800CC224
 * Callers:
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800CBA60 (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x1800CC838 (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1801DB21C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TAR.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::AnimateFrame(__int64 a1, int a2, __int64 a3)
{
  int v6; // eax
  unsigned int LastError; // ebx
  __int64 v8; // rdx
  const char *v9; // r9
  __int64 v10; // rdx
  HMONITOR v11; // rbx
  struct tagRECT *p_Rect; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v16; // [rsp+48h] [rbp-49h] BYREF
  HWND hWnd[3]; // [rsp+50h] [rbp-41h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp-29h] BYREF
  struct tagRECT v19; // [rsp+78h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+88h] [rbp-9h] BYREF
  struct tagRECT v21; // [rsp+98h] [rbp+7h] BYREF
  struct tagMONITORINFO mi; // [rsp+A8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  hWnd[1] = (HWND)-2LL;
  v16 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 344) + 32LL))(*(_QWORD *)(a1 + 344), &v16);
  LastError = v6;
  if ( v6 < 0 )
  {
    v8 = 608LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_19;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v16 + 24LL))(v16, hWnd);
  LastError = v6;
  if ( v6 < 0 )
  {
    v8 = 611LL;
    goto LABEL_17;
  }
  if ( !GetWindowRect(hWnd[0], &Rect) )
  {
    v10 = 614LL;
LABEL_9:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v10,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                  v9);
    goto LABEL_19;
  }
  rc = Rect;
  v11 = MonitorFromRect(&Rect, 2u);
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 0x24uLL);
  if ( !GetMonitorInfoW(v11, &mi) )
  {
    v10 = 619LL;
    goto LABEL_9;
  }
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      LastError = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x278,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_19;
    }
    p_Rect = &Rect;
  }
  else
  {
    p_Rect = &rc;
  }
  OffsetRect(p_Rect, 0, mi.rcMonitor.bottom - Rect.top);
  v21 = rc;
  v19 = Rect;
  OffsetRect(&v21, -rc.left, -rc.top);
  OffsetRect(&v19, -v19.left, -v19.top);
  v6 = CExperienceManagerAnimationHelper::Begin(a3, *(_QWORD *)(a1 + 344), v13, &v21, &rc, &v19, &Rect, &mi.rcMonitor);
  LastError = v6;
  if ( v6 < 0 )
  {
    v8 = 644LL;
    goto LABEL_17;
  }
  LastError = 0;
LABEL_19:
  v14 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return LastError;
}
