/*
 * XREFs of ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1800B7360
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x1800B5A88 (--1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ??4TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B5B78 (--4TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x1800B5D74 (-StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ.c)
 *     ?TransferToMember@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA?AV12@XZ @ 0x1800B5F38 (-TransferToMember@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA-AV12@XZ.c)
 *     ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJUtagPOINT@@_N@Z @ 0x1800B6834 (-ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?SetupExperienceFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800B6C3C (-SetupExperienceFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800B71C4 (-PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180182128 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualTouchpadExperienceManager::Show(__int64 a1, int a2, float *a3)
{
  char v7; // r8
  POINT *v8; // r14
  int v9; // eax
  int v10; // eax
  int LastError; // edi
  __int64 v12; // rdx
  HMODULE LibraryW; // rax
  const char *v14; // r9
  HMODULE v15; // rbx
  FARPROC ProcAddress; // rax
  const char *v17; // r9
  int v18; // eax
  unsigned __int64 v19; // r9
  char v20; // bl
  _QWORD *v21; // rax
  __int64 v22; // r8
  DWORD pcbData[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h]
  __int64 v26; // [rsp+60h] [rbp-A8h]
  HMODULE v27; // [rsp+68h] [rbp-A0h]
  __int64 pvData; // [rsp+70h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h]
  int v30[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v31; // [rsp+88h] [rbp-80h]
  _QWORD v32[4]; // [rsp+98h] [rbp-70h] BYREF
  int v33; // [rsp+B8h] [rbp-50h]
  int *v34; // [rsp+C0h] [rbp-48h]
  int *v35; // [rsp+C8h] [rbp-40h]
  int v36; // [rsp+D0h] [rbp-38h] BYREF
  char v37; // [rsp+D4h] [rbp-34h]
  int v38; // [rsp+F8h] [rbp-10h] BYREF
  const char *v39; // [rsp+100h] [rbp-8h]
  __int64 v40; // [rsp+108h] [rbp+0h]
  char v41; // [rsp+110h] [rbp+8h]
  __int64 v42; // [rsp+118h] [rbp+10h]
  _BYTE v43[144]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v44; // [rsp+1B0h] [rbp+A8h]
  __int64 v45; // [rsp+1B8h] [rbp+B0h]
  __int64 v46; // [rsp+1C0h] [rbp+B8h]
  __int64 v47; // [rsp+1C8h] [rbp+C0h]
  _QWORD v48[40]; // [rsp+1D8h] [rbp+D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+340h] [rbp+238h]

  v26 = -2LL;
  if ( (*(_DWORD *)(a1 + 736) & 0xFFFFFFFB) != 0 )
    return 0LL;
  *(_QWORD *)pcbData = a1;
  wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v24, pcbData);
  *(_DWORD *)(a1 + 736) = 1;
  v32[1] = 0LL;
  v32[2] = v32;
  v32[3] = 0LL;
  v33 = 0;
  v34 = &v38;
  v35 = &v36;
  v36 = 0;
  v37 = 0;
  v41 = 0;
  v38 = 0;
  v39 = "TouchpadLaunched";
  v40 = 0LL;
  v42 = 1LL;
  v44 = 0LL;
  v45 = 0LL;
  memset(v43, 0, sizeof(v43));
  v46 = 0LL;
  v47 = 0LL;
  v32[0] = &TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::`vftable';
  TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::StartActivity((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v32);
  pvData = 0LL;
  v29 = 0LL;
  pcbData[0] = 16;
  if ( a2 == 1
    && !RegGetValueW(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\Touchpad\\",
          L"Location",
          0x20000008u,
          0LL,
          &pvData,
          pcbData)
    && pcbData[0] == 16 )
  {
    v7 = 1;
    v8 = (POINT *)(a1 + 288);
    *(_DWORD *)(a1 + 288) = ((int)pvData + (int)v29) / 2;
    v9 = (HIDWORD(v29) + HIDWORD(pvData)) / 2;
  }
  else
  {
    v7 = 0;
    v8 = (POINT *)(a1 + 288);
    *(_DWORD *)(a1 + 288) = (int)(float)((float)(a3[2] * 0.5) + *a3);
    v9 = (int)(float)((float)(a3[3] * 0.5) + a3[1]);
  }
  *(_DWORD *)(a1 + 292) = v9;
  v10 = CVirtualTouchpadExperienceManager::ComputeConstraints((CVirtualTouchpadExperienceManager *)a1, *v8, v7 ^ 1u);
  LastError = v10;
  if ( v10 < 0 )
  {
    v12 = 431LL;
LABEL_27:
    v19 = (unsigned int)v10;
    goto LABEL_28;
  }
  if ( !*(_QWORD *)(a1 + 344) )
  {
    v10 = CVirtualTouchpadExperienceManager::SetupExperienceFrame((CVirtualTouchpadExperienceManager *)a1);
    LastError = v10;
    if ( v10 < 0 )
    {
      v12 = 435LL;
      goto LABEL_27;
    }
  }
  LibraryW = LoadLibraryW(L"user32.DLL");
  v15 = LibraryW;
  v27 = LibraryW;
  if ( !LibraryW )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x139,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                  v14);
    goto LABEL_23;
  }
  ProcAddress = GetProcAddress(LibraryW, "CalculatePopupWindowPosition");
  if ( !ProcAddress )
  {
    LastError = -2147024769;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)0x8007007FLL);
    FreeLibrary(v15);
    goto LABEL_24;
  }
  *(_QWORD *)v30 = 0LL;
  v31 = 0LL;
  if ( !((unsigned int (__fastcall *)(POINT *, __int64, __int64, __int64, int *))ProcAddress)(
          v8,
          a1 + 276,
          65620LL,
          a1 + 312,
          v30) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x144,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                  v17);
LABEL_19:
    FreeLibrary(v15);
    goto LABEL_23;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 344) + 64LL))(*(_QWORD *)(a1 + 344), v30);
  LastError = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x145,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_19;
  }
  FreeLibrary(v15);
  LastError = 0;
LABEL_23:
  if ( LastError >= 0 )
  {
    CVirtualTouchpadExperienceManager::PositionCursorForInteraction((POINT *)a1);
    *(_BYTE *)(a1 + 284) = 0;
    v10 = CSingleViewShellExperience::Show(a1 + 56, 3LL);
    LastError = v10;
    if ( v10 >= 0 )
    {
      v20 = 0;
      v21 = TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::TransferToMember((__int64)v32, v48);
      TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::operator=(a1 + 360, (__int64)v21, v22);
      TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v48);
      LastError = 0;
      goto LABEL_30;
    }
    v12 = 443LL;
    goto LABEL_27;
  }
LABEL_24:
  v19 = (unsigned int)LastError;
  v12 = 438LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)v19);
  v20 = v25;
LABEL_30:
  TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v32);
  if ( v20 )
    *(_DWORD *)(v24 + 736) = 4;
  return (unsigned int)LastError;
}
