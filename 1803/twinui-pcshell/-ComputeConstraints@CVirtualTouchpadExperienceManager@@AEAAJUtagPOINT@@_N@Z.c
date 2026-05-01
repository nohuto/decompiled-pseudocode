/*
 * XREFs of ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJUtagPOINT@@_N@Z @ 0x180181030
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x180182E20 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagPOINTER_DEVICE_TYPE@@@Z @ 0x180181A14 (-IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagP.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::ComputeConstraints(
        CVirtualTouchpadExperienceManager *this,
        POINT a2,
        char a3)
{
  char v5; // r14
  HMONITOR v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  HMONITOR v10; // rsi
  __int64 v11; // rdx
  unsigned int ScaleFactorForMonitor; // ebx
  __int64 v14; // rdx
  _DWORD *v15; // r15
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // esi
  LONG top; // eax
  int v23[2]; // [rsp+30h] [rbp-50h] BYREF
  LPARAM dwData; // [rsp+38h] [rbp-48h] BYREF
  __int64 v25[2]; // [rsp+40h] [rbp-40h] BYREF
  struct tagMONITORINFO mi; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v25[1] = -2LL;
  v5 = 0;
  v6 = MonitorFromPoint(a2, 2u);
  v10 = v6;
  if ( v6 == (HMONITOR)-1LL )
  {
    v11 = 179LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v11,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v9);
  }
  if ( (unsigned __int8)CVirtualTouchpadExperienceManager::IsPointerDeviceSupportedOnMonitor(v6, v7, v8) )
  {
LABEL_9:
    mi.cbSize = 40;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    if ( !GetMonitorInfoW(v10, &mi) )
    {
      v11 = 207LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v11,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
               v9);
    }
    *(RECT *)((char *)this + 296) = mi.rcWork;
    v15 = (_DWORD *)((char *)this + 752);
    ScaleFactorForMonitor = GetScaleFactorForMonitor(v10, (char *)this + 752);
    if ( (ScaleFactorForMonitor & 0x80000000) != 0 )
    {
      v14 = 210LL;
      goto LABEL_7;
    }
    *((_DWORD *)this + 69) = *v15 * *((_DWORD *)this + 66) / 100;
    *((_DWORD *)this + 70) = *v15 * *((_DWORD *)this + 67) / 100;
    v25[0] = 0LL;
    v16 = *((_QWORD *)this + 41);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v25);
    v17 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v16 + 24LL))(
            v16,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            v25);
    ScaleFactorForMonitor = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
LABEL_33:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v25);
      return ScaleFactorForMonitor;
    }
    *(_QWORD *)v23 = 0LL;
    v18 = v25[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v23);
    v19 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v18 + 72LL))(
            v18,
            v10,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
            v23);
    ScaleFactorForMonitor = v19;
    if ( v19 < 0 )
    {
      v20 = 219LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v19);
LABEL_32:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v23);
      goto LABEL_33;
    }
    v19 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)v23 + 168LL))(*(_QWORD *)v23, (char *)this + 312);
    ScaleFactorForMonitor = v19;
    if ( v19 < 0 )
    {
      v20 = 220LL;
      goto LABEL_23;
    }
    if ( a3 || v5 )
    {
      v21 = *v15 * *((_DWORD *)this + 68) / 100;
      v19 = (*(__int64 (__fastcall **)(_QWORD, LPARAM *))(**(_QWORD **)v23 + 80LL))(*(_QWORD *)v23, &dwData);
      ScaleFactorForMonitor = v19;
      if ( v19 < 0 )
      {
        v20 = 228LL;
        goto LABEL_23;
      }
      if ( !(_DWORD)dwData )
      {
        *((_DWORD *)this + 73) = mi.rcWork.bottom;
        *((_DWORD *)this + 72) = v21 + mi.rcWork.left + *((_DWORD *)this + 69) / 2;
        goto LABEL_31;
      }
      if ( (_DWORD)dwData == 1 )
      {
        top = mi.rcWork.top;
        goto LABEL_29;
      }
      if ( (unsigned int)(dwData - 2) <= 1 )
      {
        top = mi.rcWork.bottom;
LABEL_29:
        *((_DWORD *)this + 73) = top;
        *((_DWORD *)this + 72) = mi.rcWork.right - *((_DWORD *)this + 69) / 2 - v21;
      }
    }
LABEL_31:
    ScaleFactorForMonitor = 0;
    goto LABEL_32;
  }
  dwData = 0LL;
  EnumDisplayMonitors(
    0LL,
    0LL,
    (MONITORENUMPROC)lambda_d069a879f7516815ef2bdb1c6ddd3b24_::_lambda_invoker_cdecl_,
    (LPARAM)&dwData);
  v10 = (HMONITOR)dwData;
  if ( dwData )
  {
    v5 = 1;
    goto LABEL_9;
  }
  ScaleFactorForMonitor = -2147418113;
  v14 = 201LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)ScaleFactorForMonitor);
  return ScaleFactorForMonitor;
}
