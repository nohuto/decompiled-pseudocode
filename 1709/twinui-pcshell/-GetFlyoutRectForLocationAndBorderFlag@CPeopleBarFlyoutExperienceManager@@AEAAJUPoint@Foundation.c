/*
 * XREFs of ?GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation@Windows@@PEAUtagRECT@@PEAW4Border@CSingleViewShellExperience@@@Z @ 0x1800AE904
 * Callers:
 *     ?OnViewCreated@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800ADFD0 (-OnViewCreated@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800AE250 (-OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     InitDPI @ 0x1801C95D0 (InitDPI.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPeopleBarFlyoutExperienceManager::GetFlyoutRectForLocationAndBorderFlag(
        __int64 a1,
        __int64 a2,
        RECT *a3,
        _DWORD *a4)
{
  LONG v6; // r14d
  LONG v7; // r15d
  HMONITOR v8; // r12
  unsigned int LastError; // ebx
  __int64 *v10; // rax
  HRESULT Instance; // eax
  __int64 v12; // rdx
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 *v15; // rax
  __int64 *v16; // rbx
  __int64 v17; // rdi
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  UINT v26; // ebx
  HWND WindowW; // rax
  HANDLE PropW; // rax
  signed int v29; // eax
  const char *v30; // r9
  LONG top; // eax
  __int64 v32; // rcx
  int nNumerator[2]; // [rsp+38h] [rbp-79h] BYREF
  __int64 v35; // [rsp+40h] [rbp-71h] BYREF
  _QWORD *v36; // [rsp+48h] [rbp-69h] BYREF
  SIZE nNumber; // [rsp+50h] [rbp-61h] BYREF
  int v38; // [rsp+58h] [rbp-59h] BYREF
  POINT anchorPoint; // [rsp+60h] [rbp-51h] BYREF
  __int64 v40; // [rsp+68h] [rbp-49h]
  RECT popupWindowPosition; // [rsp+70h] [rbp-41h] BYREF
  RECT rc; // [rsp+80h] [rbp-31h] BYREF
  RECT excludeRect; // [rsp+90h] [rbp-21h] BYREF
  struct tagMONITORINFO mi; // [rsp+A0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v40 = -2LL;
  v35 = a2;
  *a3 = 0u;
  v6 = (int)*(float *)&a2;
  v7 = (int)*((float *)&a2 + 1);
  rc.left = (int)*(float *)&a2;
  rc.top = (int)*((float *)&a2 + 1);
  rc.right = (int)*(float *)&a2;
  rc.bottom = (int)*((float *)&a2 + 1);
  v8 = MonitorFromRect(&rc, 0);
  if ( !v8 )
  {
    LastError = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    return LastError;
  }
  v35 = 0LL;
  *(_QWORD *)nNumerator = 0LL;
  v36 = 0LL;
  v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v36);
  Instance = CoCreateInstance(
               &CLSID_ImmersiveShell,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)v10);
  LastError = Instance;
  if ( Instance < 0 )
  {
    v12 = 599LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)Instance);
    v19 = (__int64)v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = *(__int64 **)nNumerator;
    if ( *(_QWORD *)nNumerator )
    {
      *(_QWORD *)nNumerator = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v20 + 16))(v20);
    }
    goto LABEL_50;
  }
  v13 = v36;
  v14 = *v36;
  v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)nNumerator);
  Instance = (*(__int64 (__fastcall **)(_QWORD *, SID *, GUID *, __int64 *))(v14 + 24))(
               v13,
               &SID_IImmersiveMonitorService,
               &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
               v15);
  LastError = Instance;
  if ( Instance < 0 )
  {
    v12 = 600LL;
    goto LABEL_9;
  }
  v16 = *(__int64 **)nNumerator;
  v17 = **(_QWORD **)nNumerator;
  v18 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v35);
  Instance = (*(__int64 (__fastcall **)(__int64 *, HMONITOR, SID *, GUID *, __int64 *))(v17 + 72))(
               v16,
               v8,
               &SID_EdgeUi,
               &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
               v18);
  LastError = Instance;
  if ( Instance < 0 )
  {
    v12 = 603LL;
    goto LABEL_9;
  }
  v21 = (__int64)v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = *(__int64 **)nNumerator;
  if ( *(_QWORD *)nNumerator )
  {
    *(_QWORD *)nNumerator = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v22 + 16))(v22);
  }
  v23 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v35 + 80LL))(v35, &v38);
  LastError = v23;
  if ( v23 < 0 )
  {
    v24 = 610LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v24,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v23);
    goto LABEL_50;
  }
  v23 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v35 + 168LL))(v35, &excludeRect);
  LastError = v23;
  if ( v23 < 0 )
  {
    v24 = 611LL;
    goto LABEL_21;
  }
  *a4 = 0;
  switch ( v38 )
  {
    case 0:
      v26 = 65552;
      *a4 = 14;
      goto LABEL_31;
    case 1:
      v26 = 65540;
      *a4 = 13;
      goto LABEL_31;
    case 2:
      v26 = 65560;
      *a4 = 11;
      goto LABEL_31;
    case 3:
      v26 = 65572;
      *a4 = 7;
LABEL_31:
      anchorPoint.x = v6;
      anchorPoint.y = v7;
      nNumber.cx = 320;
      nNumber.cy = 616;
      InitDPI();
      nNumerator[0] = dword_1802B8FBC;
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      if ( WindowW )
      {
        PropW = GetPropW(WindowW, L"TaskbarMonitor");
        GetDpiForMonitor(PropW, 0LL, nNumerator, &v36);
      }
      nNumber.cx = MulDiv(nNumber.cx, nNumerator[0], 96);
      nNumber.cy = MulDiv(nNumber.cy, nNumerator[0], 96);
      if ( CalculatePopupWindowPosition(&anchorPoint, &nNumber, v26, &excludeRect, &popupWindowPosition) )
      {
        mi.cbSize = 40;
        memset(&mi.rcMonitor, 0, 0x24uLL);
        if ( GetMonitorInfoW(v8, &mi) )
        {
          rc = mi.rcWork;
          if ( popupWindowPosition.top >= mi.rcWork.top )
          {
            if ( popupWindowPosition.bottom > mi.rcWork.bottom )
            {
              OffsetRect(&popupWindowPosition, 0, mi.rcWork.bottom - popupWindowPosition.bottom);
              top = popupWindowPosition.top;
              if ( popupWindowPosition.top < rc.top )
                top = rc.top;
              popupWindowPosition.top = top;
            }
          }
          else
          {
            OffsetRect(&popupWindowPosition, 0, mi.rcWork.top - popupWindowPosition.top);
            if ( popupWindowPosition.bottom > rc.bottom )
              popupWindowPosition.bottom = rc.bottom;
          }
          *a3 = popupWindowPosition;
          LastError = 0;
        }
        else
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x2A1,
                        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
                        v30);
        }
        goto LABEL_50;
      }
      v29 = GetLastError();
      LastError = (unsigned __int16)v29 | 0x80070000;
      if ( v29 <= 0 )
        LastError = v29;
      if ( (LastError & 0x80000000) == 0 )
        LastError = -2147467259;
      v25 = 668LL;
      goto LABEL_39;
  }
  LastError = -2147467263;
  v25 = 658LL;
LABEL_39:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)LastError);
LABEL_50:
  v32 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  return LastError;
}
