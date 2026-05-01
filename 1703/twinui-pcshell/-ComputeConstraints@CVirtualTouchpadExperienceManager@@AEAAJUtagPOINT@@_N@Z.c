/*
 * XREFs of ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJUtagPOINT@@_N@Z @ 0x1800B6834
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1800B7360 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagPOINTER_DEVICE_TYPE@@@Z @ 0x1800B810C (-IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagP.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::ComputeConstraints(
        CVirtualTouchpadExperienceManager *this,
        POINT a2,
        char a3)
{
  char v5; // r15
  HMONITOR v6; // rax
  const char *v7; // r9
  HMONITOR v8; // r14
  __int64 v9; // rdx
  unsigned int v11; // ebx
  _DWORD *v12; // r12
  int ScaleFactorForMonitor; // eax
  __int64 *v14; // rdi
  __int64 v15; // rbx
  __int64 *v16; // rax
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  int v23; // edi
  LONG top; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // [rsp+30h] [rbp-50h] BYREF
  LPARAM dwData; // [rsp+38h] [rbp-48h] BYREF
  __int64 v29[2]; // [rsp+40h] [rbp-40h] BYREF
  struct tagMONITORINFO mi; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v29[1] = -2LL;
  v5 = 0;
  v6 = MonitorFromPoint(a2, 2u);
  v8 = v6;
  if ( v6 == (HMONITOR)-1LL )
  {
    v9 = 178LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v9,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v7);
  }
  if ( (unsigned __int8)CVirtualTouchpadExperienceManager::IsPointerDeviceSupportedOnMonitor(v6) )
  {
LABEL_8:
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 0x24uLL);
    if ( !GetMonitorInfoW(v8, &mi) )
    {
      v9 = 206LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v9,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
               v7);
    }
    *(RECT *)((char *)this + 296) = mi.rcWork;
    v12 = (_DWORD *)((char *)this + 752);
    ScaleFactorForMonitor = GetScaleFactorForMonitor(v8, (char *)this + 752);
    v11 = ScaleFactorForMonitor;
    if ( ScaleFactorForMonitor < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xD1,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)ScaleFactorForMonitor);
      return v11;
    }
    *((_DWORD *)this + 69) = *v12 * *((_DWORD *)this + 66) / 100;
    *((_DWORD *)this + 70) = *v12 * *((_DWORD *)this + 67) / 100;
    v29[0] = 0LL;
    v14 = (__int64 *)*((_QWORD *)this + 41);
    v15 = *v14;
    v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v29);
    v17 = (*(__int64 (__fastcall **)(__int64 *, SID *, GUID *, __int64 *))(v15 + 24))(
            v14,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            v16);
    v11 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xD7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
LABEL_33:
      v26 = v29[0];
      if ( v29[0] )
      {
        v29[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      return v11;
    }
    v27 = 0LL;
    v18 = v29[0];
    v19 = *(_QWORD *)v29[0];
    v20 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v27);
    v21 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, __int64 *))(v19 + 72))(
            v18,
            v8,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
            v20);
    v11 = v21;
    if ( v21 < 0 )
    {
      v22 = 218LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v22,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v21);
      goto LABEL_31;
    }
    v21 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v27 + 168LL))(v27, (char *)this + 312);
    v11 = v21;
    if ( v21 < 0 )
    {
      v22 = 219LL;
      goto LABEL_22;
    }
    if ( a3 || v5 )
    {
      v23 = *v12 * *((_DWORD *)this + 68) / 100;
      v21 = (*(__int64 (__fastcall **)(__int64, LPARAM *))(*(_QWORD *)v27 + 80LL))(v27, &dwData);
      v11 = v21;
      if ( v21 < 0 )
      {
        v22 = 227LL;
        goto LABEL_22;
      }
      if ( !(_DWORD)dwData )
      {
        *((_DWORD *)this + 73) = mi.rcWork.bottom;
        *((_DWORD *)this + 72) = v23 + mi.rcWork.left + *((_DWORD *)this + 69) / 2;
        goto LABEL_30;
      }
      if ( (_DWORD)dwData == 1 )
      {
        top = mi.rcWork.top;
        goto LABEL_28;
      }
      if ( (unsigned int)(dwData - 2) <= 1 )
      {
        top = mi.rcWork.bottom;
LABEL_28:
        *((_DWORD *)this + 73) = top;
        *((_DWORD *)this + 72) = mi.rcWork.right - *((_DWORD *)this + 69) / 2 - v23;
      }
    }
LABEL_30:
    v11 = 0;
LABEL_31:
    v25 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    goto LABEL_33;
  }
  dwData = 0LL;
  EnumDisplayMonitors(0LL, 0LL, lambda_d069a879f7516815ef2bdb1c6ddd3b24_::_lambda_invoker_cdecl_, (LPARAM)&dwData);
  v8 = (HMONITOR)dwData;
  if ( dwData )
  {
    v5 = 1;
    goto LABEL_8;
  }
  v11 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)0x8000FFFFLL);
  return v11;
}
