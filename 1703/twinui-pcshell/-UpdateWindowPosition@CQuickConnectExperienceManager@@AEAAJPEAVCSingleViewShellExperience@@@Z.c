/*
 * XREFs of ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800AD344
 * Callers:
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800ACC70 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008D6D4 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??IRoVariant@@QEAA?AVOutRef@0@XZ @ 0x18008D7CC (--IRoVariant@@QEAA-AVOutRef@0@XZ.c)
 *     ??1?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800AB6EC (--1-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x1800AD6C0 (-FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 *     ?FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x1800AD894 (-FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AE724 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800AEE48 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??$Start@$$V@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@SA?AV01@XZ @ 0x1800AFDC0 (--$Start@$$V@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@SA-AV01@XZ.c)
 *     ??$ExperienceManager_UpdateWindowPosition_Params@AEAHAEAH@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXAEAH0@Z @ 0x1800AFE6C (--$ExperienceManager_UpdateWindowPosition_Params@AEAHAEAH@ExperienceManager_UpdateWindowPosition.c)
 *     ??$ExperienceManager_UpdateWindowPosition_SetPosition@AEAJAEAJAEAJAEAJ@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXAEAJ000@Z @ 0x1800AFF30 (--$ExperienceManager_UpdateWindowPosition_SetPosition@AEAJAEAJAEAJAEAJ@ExperienceManager_UpdateW.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180181774 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CQuickConnectExperienceManager::UpdateWindowPosition(
        struct tagRECT *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  int LastError; // ebx
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  HRESULT v8; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  float v12; // xmm0_4
  float v13; // xmm1_4
  HMONITOR v14; // rbx
  const char *v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  int v20[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v23[4]; // [rsp+50h] [rbp-B8h] BYREF
  RECT rc; // [rsp+70h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-88h] BYREF
  HSTRING string; // [rsp+98h] [rbp-70h] BYREF
  struct tagMONITORINFO mi; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v28[40]; // [rsp+C8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v23[3] = -2LL;
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::Start<>((QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition *)v28);
  v20[1] = (int)*((float *)a2 + 11);
  v20[0] = (int)*((float *)a2 + 12);
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::ExperienceManager_UpdateWindowPosition_Params<int &,int &>(
    v28,
    &v20[1],
    v20);
  v21 = 0LL;
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4))(
         *((_QWORD *)a2 + 4),
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v21);
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
  v22 = 0LL;
  LODWORD(v23[0]) = 0;
  v6 = v21;
  v7 = RoVariant::operator&((__int64)&v22, &v23[1]);
  string = 0LL;
  v8 = WindowsCreateStringReference(L"MaxHeight", 9u, &hstringHeader, &string);
  if ( v8 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
  (*(void (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v6 + 48LL))(v6, string, v7 + 1);
  string = 0LL;
  RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v23[1]);
  v9 = v22;
  if ( v22 )
  {
    if ( this == (struct tagRECT *)-376LL )
    {
      LastError = -2147467261;
      goto LABEL_13;
    }
    this[23].right = 0;
    if ( LODWORD(v23[0]) != 7 )
    {
      LastError = -2147316576;
      if ( SLODWORD(v23[0]) < 0 )
        LastError = v23[0];
      goto LABEL_13;
    }
    LastError = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 88LL))(v9);
    if ( LastError < 0 )
    {
LABEL_13:
      v10 = (unsigned int)LastError;
      v11 = 821LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)v10);
      goto LABEL_30;
    }
  }
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  v12 = *(float *)&this[21].left;
  rc.left = (int)v12;
  v13 = *(float *)&this[21].top;
  rc.top = (int)v13;
  rc.right = (int)(float)(v12 + *(float *)&this[21].right);
  rc.bottom = (int)(float)(v13 + *(float *)&this[21].bottom);
  v14 = MonitorFromRect(&rc, 0);
  if ( v14 != (HMONITOR)-1LL )
  {
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 0x24uLL);
    if ( !GetMonitorInfoW(v14, &mi) )
    {
      v16 = 835LL;
      goto LABEL_18;
    }
    *(RECT *)&v23[1] = mi.rcWork;
    v17 = CQuickConnectExperienceManager::FinalizeWindowPlacement(
            (CQuickConnectExperienceManager *)this,
            v20[1],
            v20[0],
            (const struct tagRECT *)&v23[1]);
    LastError = v17;
    if ( v17 >= 0 )
    {
      v17 = CQuickConnectExperienceManager::FinalizeWindowPosition(
              (CQuickConnectExperienceManager *)this,
              v20[1],
              v20[0],
              (const struct tagRECT *)&v23[1]);
      LastError = v17;
      if ( v17 >= 0 )
      {
        if ( *((_QWORD *)a2 + 3) )
        {
          v17 = CSingleViewShellExperience::SetPosition(a2, this + 24);
          LastError = v17;
          if ( v17 < 0 )
          {
            v11 = 850LL;
            goto LABEL_26;
          }
          QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::ExperienceManager_UpdateWindowPosition_SetPosition<long &,long &,long &,long &>(
            (unsigned int)v28,
            (_DWORD)this + 384,
            (_DWORD)this + 388,
            (_DWORD)this + 392,
            (__int64)&this[24].bottom);
        }
        wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v28);
        LastError = 0;
        goto LABEL_30;
      }
      v11 = 845LL;
    }
    else
    {
      v11 = 842LL;
    }
LABEL_26:
    v10 = (unsigned int)v17;
    goto LABEL_27;
  }
  v16 = 833LL;
LABEL_18:
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v16,
                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
                v15);
LABEL_30:
  if ( v22 && ((LODWORD(v23[0]) - 3) & 0xFFFFFFFB) == 0 )
    (*(void (**)(void))(*(_QWORD *)v22 + 16LL))();
LABEL_33:
  v18 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v28[0] = &QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v28);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v28);
  return (unsigned int)LastError;
}
