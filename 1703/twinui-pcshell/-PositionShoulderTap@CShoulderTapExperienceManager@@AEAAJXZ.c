/*
 * XREFs of ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1800A7970
 * Callers:
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A75D0 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180181774 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18018C37C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CShoulderTapExperienceManager::PositionShoulderTap(CShoulderTapExperienceManager *this)
{
  __int64 v2; // rbx
  PCWSTR StringRawBuffer; // rax
  int v4; // eax
  unsigned int LastError; // ebx
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 *v8; // rax
  int v9; // eax
  HMONITOR v10; // r14
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  HMONITOR v16; // r8
  HMONITOR v17; // r8
  LONG v18; // eax
  UINT v19; // r8d
  LONG v20; // eax
  const char *v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rcx
  POINT anchorPoint; // [rsp+38h] [rbp-29h] BYREF
  int v26; // [rsp+40h] [rbp-21h] BYREF
  SIZE windowSize; // [rsp+48h] [rbp-19h] BYREF
  __int64 v28; // [rsp+50h] [rbp-11h] BYREF
  _QWORD *v29; // [rsp+58h] [rbp-9h] BYREF
  UINT32 length; // [rsp+60h] [rbp-1h] BYREF
  __int64 v31; // [rsp+68h] [rbp+7h]
  RECT rc; // [rsp+70h] [rbp+Fh] BYREF
  RECT excludeRect; // [rsp+80h] [rbp+1Fh] BYREF
  RECT popupWindowPosition; // [rsp+90h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v31 = -2LL;
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  length = 0;
  v2 = *((_QWORD *)this + 31);
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 33), &length);
  v4 = (*(__int64 (__fastcall **)(__int64, PCWSTR, RECT *))(*(_QWORD *)v2 + 120LL))(v2, StringRawBuffer, &rc);
  LastError = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xEA,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return LastError;
  }
  v29 = 0LL;
  v6 = (__int64 *)*((_QWORD *)this + 30);
  v7 = *v6;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v29);
  v9 = (*(__int64 (__fastcall **)(__int64 *, SID *, GUID *, __int64 *))(v7 + 24))(
         v6,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v8);
  LastError = v9;
  if ( v9 >= 0 )
  {
    v10 = MonitorFromRect(&rc, 1u);
    v28 = 0LL;
    v11 = v29;
    v12 = *v29;
    v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v28);
    v14 = (*(__int64 (__fastcall **)(_QWORD *, HMONITOR, SID *, GUID *, __int64 *))(v12 + 72))(
            v11,
            v10,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
            v13);
    LastError = v14;
    if ( v14 < 0 )
    {
      v15 = 243LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_28;
    }
    v26 = -1;
    v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 80LL))(v28, &v26);
    LastError = v14;
    if ( v14 < 0 )
    {
      v15 = 246LL;
      goto LABEL_25;
    }
    *(_QWORD *)&excludeRect.left = 0LL;
    *(_QWORD *)&excludeRect.right = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v28 + 168LL))(v28, &excludeRect);
    LastError = v14;
    if ( v14 < 0 )
    {
      v15 = 249LL;
      goto LABEL_25;
    }
    windowSize.cx = 80;
    windowSize.cy = 80;
    windowSize.cx = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x50, (int)v10, v16);
    windowSize.cy = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                      (ExperienceManagerUtils *)(unsigned int)windowSize.cy,
                      (int)v10,
                      v17);
    if ( v26 == -1 )
      goto LABEL_27;
    if ( v26 )
    {
      if ( v26 == 1 )
      {
        anchorPoint.x = (rc.left + rc.right) / 2;
        v18 = excludeRect.bottom + 20;
        v19 = 65540;
        goto LABEL_21;
      }
      if ( v26 != 2 )
      {
        if ( v26 == 3 )
        {
          anchorPoint.x = (rc.left + rc.right) / 2;
          v18 = excludeRect.top - 20;
          v19 = 65572;
LABEL_21:
          anchorPoint.y = v18;
          if ( !CalculatePopupWindowPosition(&anchorPoint, &windowSize, v19, &excludeRect, &popupWindowPosition) )
          {
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)0x124,
                          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
                          v21);
            goto LABEL_28;
          }
          v14 = CSingleViewShellExperience::SetPosition(
                  (CShoulderTapExperienceManager *)((char *)this + 40),
                  &popupWindowPosition);
          LastError = v14;
          if ( v14 < 0 )
          {
            v15 = 293LL;
            goto LABEL_25;
          }
          LastError = 0;
LABEL_28:
          v22 = v28;
          if ( v28 )
          {
            v28 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          goto LABEL_30;
        }
LABEL_27:
        LastError = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11F,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
          (const char *)0x80070057LL);
        goto LABEL_28;
      }
      v20 = excludeRect.left - 20;
      v19 = 65560;
    }
    else
    {
      v20 = excludeRect.right + 20;
      v19 = 65552;
    }
    anchorPoint.x = v20;
    v18 = (rc.bottom + rc.top) / 2;
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xEE,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_30:
  v23 = (__int64)v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return LastError;
}
