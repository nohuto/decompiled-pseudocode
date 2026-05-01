/*
 * XREFs of ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800C6168
 * Callers:
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800C5A20 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008FD24 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?StartActivity@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXXZ @ 0x1800C2FD4 (-StartActivity@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ??1?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800C4204 (--1-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x1800C6564 (-FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 *     ?FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x1800C67A8 (-FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C7694 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C7DB8 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??$ExperienceManager_UpdateWindowPosition_Params@AEAHAEAH@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXAEAH0@Z @ 0x1800C8A40 (--$ExperienceManager_UpdateWindowPosition_Params@AEAHAEAH@ExperienceManager_UpdateWindowPosition.c)
 *     ??$ExperienceManager_UpdateWindowPosition_SetPosition@AEAJAEAJAEAJAEAJ@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXAEAJ000@Z @ 0x1800C8AFC (--$ExperienceManager_UpdateWindowPosition_SetPosition@AEAJAEAJAEAJAEAJ@ExperienceManager_UpdateW.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801D0E34 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CQuickConnectExperienceManager::UpdateWindowPosition(
        struct tagRECT *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  int LastError; // ebx
  __int64 v6; // rbx
  HRESULT v7; // eax
  __int64 v8; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  float v11; // xmm0_4
  float v12; // xmm1_4
  HMONITOR v13; // rbx
  const char *v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  int v19[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+50h] [rbp-B8h]
  struct tagRECT rcWork; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h]
  RECT rc; // [rsp+70h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-88h] BYREF
  HSTRING string; // [rsp+98h] [rbp-70h] BYREF
  struct tagMONITORINFO mi; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v29[4]; // [rsp+C8h] [rbp-40h] BYREF
  int v30; // [rsp+E8h] [rbp-20h]
  int *v31; // [rsp+F0h] [rbp-18h]
  int *v32; // [rsp+F8h] [rbp-10h]
  int v33; // [rsp+100h] [rbp-8h] BYREF
  char v34; // [rsp+104h] [rbp-4h]
  int v35; // [rsp+128h] [rbp+20h] BYREF
  const char *v36; // [rsp+130h] [rbp+28h]
  __int64 v37; // [rsp+138h] [rbp+30h]
  char v38; // [rsp+140h] [rbp+38h]
  __int64 v39; // [rsp+148h] [rbp+40h]
  _BYTE v40[144]; // [rsp+150h] [rbp+48h] BYREF
  __int64 v41; // [rsp+1E0h] [rbp+D8h]
  __int64 v42; // [rsp+1E8h] [rbp+E0h]
  __int64 v43; // [rsp+1F0h] [rbp+E8h]
  __int64 v44; // [rsp+1F8h] [rbp+F0h]
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v24 = -2LL;
  v29[1] = 0LL;
  v29[2] = v29;
  v29[3] = 0LL;
  v30 = 0;
  v31 = &v35;
  v32 = &v33;
  v33 = 0;
  v34 = 0;
  v38 = 0;
  v35 = 0;
  v36 = "ExperienceManager_UpdateWindowPosition";
  v37 = 0LL;
  v39 = 1LL;
  v41 = 0LL;
  v42 = 0LL;
  memset(v40, 0, sizeof(v40));
  v43 = 0LL;
  v44 = 0LL;
  v29[0] = &QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::`vftable';
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::StartActivity((QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition *)v29);
  v19[1] = (int)*((float *)a2 + 11);
  v19[0] = (int)*((float *)a2 + 12);
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::ExperienceManager_UpdateWindowPosition_Params<int &,int &>(
    v29,
    &v19[1],
    v19);
  v20 = 0LL;
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4))(
         *((_QWORD *)a2 + 4),
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v20);
  LastError = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x32E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_33;
  }
  v21 = 0LL;
  v22 = 0;
  v6 = v20;
  *(_QWORD *)&rcWork.left = &v21;
  *(_QWORD *)&rcWork.right = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"MaxHeight", 9u, &hstringHeader, &string);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
  (*(void (__fastcall **)(__int64, HSTRING, LONG *))(*(_QWORD *)v6 + 48LL))(v6, string, &rcWork.right);
  string = 0LL;
  RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&rcWork);
  v8 = v21;
  if ( v21 )
  {
    if ( this == (struct tagRECT *)-376LL )
    {
      LastError = -2147467261;
      goto LABEL_13;
    }
    this[23].right = 0;
    if ( v22 != 7 )
    {
      LastError = -2147316576;
      if ( v22 < 0 )
        LastError = v22;
      goto LABEL_13;
    }
    LastError = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 88LL))(v8);
    if ( LastError < 0 )
    {
LABEL_13:
      v9 = (unsigned int)LastError;
      v10 = 821LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)v9);
      goto LABEL_30;
    }
  }
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  v11 = *(float *)&this[21].left;
  rc.left = (int)v11;
  v12 = *(float *)&this[21].top;
  rc.top = (int)v12;
  rc.right = (int)(float)(v11 + *(float *)&this[21].right);
  rc.bottom = (int)(float)(v12 + *(float *)&this[21].bottom);
  v13 = MonitorFromRect(&rc, 0);
  if ( v13 != (HMONITOR)-1LL )
  {
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 0x24uLL);
    if ( !GetMonitorInfoW(v13, &mi) )
    {
      v15 = 835LL;
      goto LABEL_18;
    }
    rcWork = mi.rcWork;
    v16 = CQuickConnectExperienceManager::FinalizeWindowPlacement(
            (CQuickConnectExperienceManager *)this,
            v19[1],
            v19[0],
            &rcWork);
    LastError = v16;
    if ( v16 >= 0 )
    {
      v16 = CQuickConnectExperienceManager::FinalizeWindowPosition(
              (CQuickConnectExperienceManager *)this,
              v19[1],
              v19[0],
              &rcWork);
      LastError = v16;
      if ( v16 >= 0 )
      {
        if ( *((_QWORD *)a2 + 3) )
        {
          v16 = CSingleViewShellExperience::SetPosition(a2, this + 24);
          LastError = v16;
          if ( v16 < 0 )
          {
            v10 = 850LL;
            goto LABEL_26;
          }
          QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::ExperienceManager_UpdateWindowPosition_SetPosition<long &,long &,long &,long &>(
            (unsigned int)v29,
            (_DWORD)this + 384,
            (_DWORD)this + 388,
            (_DWORD)this + 392,
            (__int64)&this[24].bottom);
        }
        wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v29);
        LastError = 0;
        goto LABEL_30;
      }
      v10 = 845LL;
    }
    else
    {
      v10 = 842LL;
    }
LABEL_26:
    v9 = (unsigned int)v16;
    goto LABEL_27;
  }
  v15 = 833LL;
LABEL_18:
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v15,
                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
                v14);
LABEL_30:
  if ( v21 && ((v22 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (**)(void))(*(_QWORD *)v21 + 16LL))();
LABEL_33:
  v17 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v29[0] = &QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v29);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v29);
  return (unsigned int)LastError;
}
