/*
 * XREFs of ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1800CB620
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x1800C9D5C (--1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ??4TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C9E4C (--4TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x1800CA048 (-StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ.c)
 *     ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJUtagPOINT@@_N@Z @ 0x1800CAAF0 (-ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?SetupExperienceFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800CAEFC (-SetupExperienceFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800CB484 (-PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ??0?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1800CD5AC (--0-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflect.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1801D18D0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualTouchpadExperienceManager::Show(__int64 a1, int a2, float *a3)
{
  char v7; // r14
  POINT *v8; // r15
  int v9; // eax
  char v10; // r8
  int v11; // eax
  int LastError; // edi
  __int64 v13; // rdx
  HMODULE LibraryW; // rax
  const char *v15; // r9
  HMODULE v16; // rbx
  FARPROC ProcAddress; // rax
  const char *v18; // r9
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // r8
  DWORD pcbData[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h]
  HMODULE v24; // [rsp+58h] [rbp-B0h]
  __int64 v25; // [rsp+60h] [rbp-A8h]
  __int64 v26; // [rsp+68h] [rbp-A0h]
  __int64 pvData; // [rsp+70h] [rbp-98h] BYREF
  __int64 v28; // [rsp+78h] [rbp-90h]
  int v29[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v30; // [rsp+88h] [rbp-80h]
  _QWORD v31[4]; // [rsp+98h] [rbp-70h] BYREF
  int v32; // [rsp+B8h] [rbp-50h]
  int *v33; // [rsp+C0h] [rbp-48h]
  int *v34; // [rsp+C8h] [rbp-40h]
  int v35; // [rsp+D0h] [rbp-38h] BYREF
  char v36; // [rsp+D4h] [rbp-34h]
  int v37; // [rsp+F8h] [rbp-10h] BYREF
  const char *v38; // [rsp+100h] [rbp-8h]
  __int64 v39; // [rsp+108h] [rbp+0h]
  char v40; // [rsp+110h] [rbp+8h]
  __int64 v41; // [rsp+118h] [rbp+10h]
  _BYTE v42[144]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v43; // [rsp+1B0h] [rbp+A8h]
  __int64 v44; // [rsp+1B8h] [rbp+B0h]
  __int64 v45; // [rsp+1C0h] [rbp+B8h]
  __int64 v46; // [rsp+1C8h] [rbp+C0h]
  _QWORD v47[40]; // [rsp+1D8h] [rbp+D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+350h] [rbp+248h]

  v23 = -2LL;
  if ( (*(_DWORD *)(a1 + 736) & 0xFFFFFFFB) != 0 )
    return 0LL;
  v25 = a1;
  v7 = 1;
  LOBYTE(v26) = 1;
  *(_DWORD *)(a1 + 736) = 1;
  v31[1] = 0LL;
  v31[2] = v31;
  v31[3] = 0LL;
  v32 = 0;
  v33 = &v37;
  v34 = &v35;
  v35 = 0;
  v36 = 0;
  v40 = 0;
  v37 = 0;
  v38 = "TouchpadLaunched";
  v39 = 0LL;
  v41 = 1LL;
  v43 = 0LL;
  v44 = 0LL;
  memset(v42, 0, sizeof(v42));
  v45 = 0LL;
  v46 = 0LL;
  v31[0] = &TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::`vftable';
  TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::StartActivity((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v31);
  pvData = 0LL;
  v28 = 0LL;
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
    v8 = (POINT *)(a1 + 288);
    *(_DWORD *)(a1 + 288) = ((int)pvData + (int)v28) / 2;
    v9 = (HIDWORD(v28) + HIDWORD(pvData)) / 2;
    v10 = 0;
  }
  else
  {
    v8 = (POINT *)(a1 + 288);
    *(_DWORD *)(a1 + 288) = (int)(float)((float)(a3[2] * 0.5) + *a3);
    v9 = (int)(float)((float)(a3[3] * 0.5) + a3[1]);
    v10 = 1;
  }
  *(_DWORD *)(a1 + 292) = v9;
  v11 = CVirtualTouchpadExperienceManager::ComputeConstraints((CVirtualTouchpadExperienceManager *)a1, *v8, v10);
  LastError = v11;
  if ( v11 < 0 )
  {
    v13 = 432LL;
LABEL_27:
    v20 = (unsigned int)v11;
    goto LABEL_28;
  }
  if ( !*(_QWORD *)(a1 + 344) )
  {
    v11 = CVirtualTouchpadExperienceManager::SetupExperienceFrame((CVirtualTouchpadExperienceManager *)a1);
    LastError = v11;
    if ( v11 < 0 )
    {
      v13 = 436LL;
      goto LABEL_27;
    }
  }
  LibraryW = LoadLibraryW(L"user32.DLL");
  v16 = LibraryW;
  v24 = LibraryW;
  if ( !LibraryW )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x13A,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                  v15);
    goto LABEL_23;
  }
  ProcAddress = GetProcAddress(LibraryW, "CalculatePopupWindowPosition");
  if ( !ProcAddress )
  {
    LastError = -2147024769;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)0x8007007FLL);
    FreeLibrary(v16);
    goto LABEL_24;
  }
  *(_QWORD *)v29 = 0LL;
  v30 = 0LL;
  if ( !((unsigned int (__fastcall *)(POINT *, __int64, __int64, __int64, int *))ProcAddress)(
          v8,
          a1 + 276,
          65620LL,
          a1 + 312,
          v29) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x145,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                  v18);
LABEL_19:
    FreeLibrary(v16);
    goto LABEL_23;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 344) + 64LL))(*(_QWORD *)(a1 + 344), v29);
  LastError = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x146,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_19;
  }
  FreeLibrary(v16);
  LastError = 0;
LABEL_23:
  if ( LastError >= 0 )
  {
    CVirtualTouchpadExperienceManager::PositionCursorForInteraction((POINT *)a1);
    *(_BYTE *)(a1 + 284) = 0;
    v11 = CSingleViewShellExperience::Show(a1 + 56, 3LL);
    LastError = v11;
    if ( v11 >= 0 )
    {
      v7 = 0;
      wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        v47,
        v31,
        0LL);
      v47[0] = &TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::`vftable';
      TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::operator=(a1 + 360, (__int64)v47, v21);
      TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v47);
      LastError = 0;
      goto LABEL_30;
    }
    v13 = 444LL;
    goto LABEL_27;
  }
LABEL_24:
  v20 = (unsigned int)LastError;
  v13 = 439LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)v20);
LABEL_30:
  TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v31);
  if ( v7 )
    *(_DWORD *)(a1 + 736) = 4;
  return (unsigned int)LastError;
}
