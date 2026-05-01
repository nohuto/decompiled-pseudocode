/*
 * XREFs of ?GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation@Windows@@PEAUtagRECT@@PEAW4Border@CSingleViewShellExperience@@@Z @ 0x1800A24D4
 * Callers:
 *     ?OnViewCreated@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A1E70 (-OnViewCreated@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A2030 (-OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     InitDPI @ 0x18017C7F8 (InitDPI.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v9; // ebx
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
  signed int LastError; // eax
  __int64 v30; // rcx
  int nNumerator[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v33; // [rsp+40h] [rbp-41h] BYREF
  _QWORD *v34; // [rsp+48h] [rbp-39h] BYREF
  SIZE nNumber; // [rsp+50h] [rbp-31h] BYREF
  int v36; // [rsp+58h] [rbp-29h] BYREF
  __int64 v37; // [rsp+60h] [rbp-21h]
  RECT rc; // [rsp+68h] [rbp-19h] BYREF
  RECT excludeRect; // [rsp+78h] [rbp-9h] BYREF
  RECT popupWindowPosition; // [rsp+88h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v37 = -2LL;
  v33 = a2;
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
    v9 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    return v9;
  }
  v33 = 0LL;
  *(_QWORD *)nNumerator = 0LL;
  v34 = 0LL;
  v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v34);
  Instance = CoCreateInstance(
               &CLSID_ImmersiveShell,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)v10);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v12 = 391LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)Instance);
    v19 = (__int64)v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = *(__int64 **)nNumerator;
    if ( *(_QWORD *)nNumerator )
    {
      *(_QWORD *)nNumerator = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v20 + 16))(v20);
    }
    goto LABEL_41;
  }
  v13 = v34;
  v14 = *v34;
  v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)nNumerator);
  Instance = (*(__int64 (__fastcall **)(_QWORD *, SID *, GUID *, __int64 *))(v14 + 24))(
               v13,
               &SID_IImmersiveMonitorService,
               &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
               v15);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v12 = 392LL;
    goto LABEL_9;
  }
  v16 = *(__int64 **)nNumerator;
  v17 = **(_QWORD **)nNumerator;
  v18 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v33);
  Instance = (*(__int64 (__fastcall **)(__int64 *, HMONITOR, SID *, GUID *, __int64 *))(v17 + 72))(
               v16,
               v8,
               &SID_EdgeUi,
               &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
               v18);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v12 = 395LL;
    goto LABEL_9;
  }
  v21 = (__int64)v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = *(__int64 **)nNumerator;
  if ( *(_QWORD *)nNumerator )
  {
    *(_QWORD *)nNumerator = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v22 + 16))(v22);
  }
  v23 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v33 + 80LL))(v33, &v36);
  v9 = v23;
  if ( v23 < 0 )
  {
    v24 = 402LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v24,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v23);
    goto LABEL_41;
  }
  v23 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v33 + 168LL))(v33, &excludeRect);
  v9 = v23;
  if ( v23 < 0 )
  {
    v24 = 403LL;
    goto LABEL_21;
  }
  *a4 = 0;
  if ( v36 )
  {
    switch ( v36 )
    {
      case 1:
        v26 = 65540;
        *a4 = 13;
        break;
      case 2:
        v26 = 65560;
        *a4 = 11;
        break;
      case 3:
        v26 = 65572;
        *a4 = 7;
        break;
      default:
        v9 = -2147467263;
        v25 = 450LL;
LABEL_39:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
          (const char *)v9);
        goto LABEL_41;
    }
  }
  else
  {
    v26 = 65552;
    *a4 = 14;
  }
  rc.left = v6;
  rc.top = v7;
  nNumber.cx = 320;
  nNumber.cy = 616;
  InitDPI();
  nNumerator[0] = dword_1802439C8;
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( WindowW )
  {
    PropW = GetPropW(WindowW, L"TaskbarMonitor");
    GetDpiForMonitor(PropW, 0LL, nNumerator, &v34);
  }
  nNumber.cx = MulDiv(nNumber.cx, nNumerator[0], 96);
  nNumber.cy = MulDiv(nNumber.cy, nNumerator[0], 96);
  if ( !CalculatePopupWindowPosition((const POINT *)&rc, &nNumber, v26, &excludeRect, &popupWindowPosition) )
  {
    LastError = GetLastError();
    v9 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v9 = LastError;
    if ( (v9 & 0x80000000) == 0 )
      v9 = -2147467259;
    v25 = 460LL;
    goto LABEL_39;
  }
  *a3 = popupWindowPosition;
  v9 = 0;
LABEL_41:
  v30 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  return v9;
}
