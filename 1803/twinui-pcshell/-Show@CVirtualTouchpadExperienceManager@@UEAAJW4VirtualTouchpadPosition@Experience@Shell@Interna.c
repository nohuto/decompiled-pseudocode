/*
 * XREFs of ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x180182E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18006BC78 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180180440 (--0-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflect.c)
 *     ??0TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x1801807FC (--0TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x180180960 (--1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ??4TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180180AA0 (--4TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJUtagPOINT@@_N@Z @ 0x180181030 (-ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x180182258 (-PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?SetupExperienceFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x180182A84 (-SetupExperienceFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x18018309C (-StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ.c)
 *     ?UpdateFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801837F0 (-UpdateFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::Show(__int64 a1, int a2, float *a3)
{
  char v7; // si
  bool v8; // r8
  int v9; // eax
  int updated; // eax
  unsigned int v11; // edi
  __int64 v12; // rdx
  DWORD pcbData[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h]
  __int64 v15; // [rsp+58h] [rbp-B0h]
  __int64 v16; // [rsp+60h] [rbp-A8h]
  __int64 pvData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-98h]
  _QWORD v19[40]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v20[320]; // [rsp+1B8h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+320h] [rbp+218h]

  v14 = -2LL;
  if ( (*(_DWORD *)(a1 + 736) & 0xFFFFFFFB) != 0 )
    return 0LL;
  v15 = a1;
  v7 = 1;
  LOBYTE(v16) = 1;
  *(_DWORD *)(a1 + 736) = 1;
  TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v20);
  TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::StartActivity((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v20);
  pvData = 0LL;
  v18 = 0LL;
  pcbData[0] = 16;
  v8 = a2 == 1
    && !RegGetValueW(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\Touchpad\\",
          L"Location",
          0x20000008u,
          0LL,
          &pvData,
          pcbData)
    && pcbData[0] == 16;
  if ( v8 )
  {
    *(_DWORD *)(a1 + 288) = ((int)pvData + (int)v18) / 2;
    v9 = (HIDWORD(v18) + HIDWORD(pvData)) / 2;
  }
  else
  {
    *(_DWORD *)(a1 + 288) = (int)(float)((float)(a3[2] * 0.5) + *a3);
    v9 = (int)(float)((float)(a3[3] * 0.5) + a3[1]);
  }
  *(_DWORD *)(a1 + 292) = v9;
  updated = CVirtualTouchpadExperienceManager::ComputeConstraints(
              (CVirtualTouchpadExperienceManager *)a1,
              *(POINT *)(a1 + 288),
              !v8);
  v11 = updated;
  if ( updated >= 0 )
  {
    if ( *(_QWORD *)(a1 + 344)
      || (updated = CVirtualTouchpadExperienceManager::SetupExperienceFrame((CVirtualTouchpadExperienceManager *)a1),
          v11 = updated,
          updated >= 0) )
    {
      updated = CVirtualTouchpadExperienceManager::UpdateFramePosition((CVirtualTouchpadExperienceManager *)a1);
      v11 = updated;
      if ( updated >= 0 )
      {
        CVirtualTouchpadExperienceManager::PositionCursorForInteraction((POINT *)a1);
        *(_BYTE *)(a1 + 284) = 0;
        updated = CSingleViewShellExperience::Show(
                    a1 + 56,
                    (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)3);
        v11 = updated;
        if ( updated >= 0 )
        {
          v7 = 0;
          wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
            (struct wil::details::IFailureCallback *)v19,
            (__int64)v20,
            0);
          v19[0] = &TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::`vftable';
          TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::operator=(a1 + 360, (__int64)v19);
          TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v19);
          v11 = 0;
          goto LABEL_22;
        }
        v12 = 444LL;
      }
      else
      {
        v12 = 439LL;
      }
    }
    else
    {
      v12 = 436LL;
    }
  }
  else
  {
    v12 = 432LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)updated);
LABEL_22:
  TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v20);
  if ( v7 )
    *(_DWORD *)(a1 + 736) = 4;
  return v11;
}
