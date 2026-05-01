/*
 * XREFs of ?AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManagerAnimationHelper@@@Z @ 0x180180D48
 * Callers:
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18018177C (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x18018357C (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180308FC4 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TAR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::AnimateFrame(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // eax
  unsigned int LastError; // ebx
  __int64 v9; // rdx
  const char *v10; // r9
  __int64 v11; // rdx
  HMONITOR v12; // rbx
  __int64 v13; // r9
  struct tagRECT *p_Rect; // rcx
  __int64 v15; // r8
  __int64 v17; // [rsp+48h] [rbp-49h] BYREF
  HWND hWnd[3]; // [rsp+50h] [rbp-41h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp-29h] BYREF
  struct tagRECT v20; // [rsp+78h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+88h] [rbp-9h] BYREF
  struct tagRECT v22; // [rsp+98h] [rbp+7h] BYREF
  struct tagMONITORINFO mi; // [rsp+A8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  hWnd[1] = (HWND)-2LL;
  v17 = 0LL;
  v6 = *(_QWORD *)(a1 + 344);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 32LL))(v6, &v17);
  LastError = v7;
  if ( v7 < 0 )
  {
    v9 = 608LL;
    goto LABEL_17;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v17 + 24LL))(v17, hWnd);
  LastError = v7;
  if ( v7 < 0 )
  {
    v9 = 611LL;
    goto LABEL_17;
  }
  if ( GetWindowRect(hWnd[0], &Rect) )
  {
    rc = Rect;
    v12 = MonitorFromRect(&Rect, 2u);
    mi.cbSize = 40;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    if ( GetMonitorInfoW(v12, &mi) )
    {
      if ( a2 )
      {
        if ( a2 != 1 )
        {
          LastError = -2147418113;
          v13 = 2147549183LL;
          v9 = 632LL;
LABEL_18:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v9,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
            (const char *)v13);
          goto LABEL_20;
        }
        p_Rect = &Rect;
      }
      else
      {
        p_Rect = &rc;
      }
      OffsetRect(p_Rect, 0, mi.rcMonitor.bottom - Rect.top);
      v22 = rc;
      v20 = Rect;
      OffsetRect(&v22, -rc.left, -rc.top);
      OffsetRect(&v20, -v20.left, -v20.top);
      v7 = CExperienceManagerAnimationHelper::Begin(
             a3,
             *(_QWORD *)(a1 + 344),
             v15,
             &v22,
             &rc,
             &v20,
             &Rect,
             &mi.rcMonitor);
      LastError = v7;
      if ( v7 >= 0 )
      {
        LastError = 0;
        goto LABEL_20;
      }
      v9 = 644LL;
LABEL_17:
      v13 = (unsigned int)v7;
      goto LABEL_18;
    }
    v11 = 619LL;
  }
  else
  {
    v11 = 614LL;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v11,
                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                v10);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return LastError;
}
