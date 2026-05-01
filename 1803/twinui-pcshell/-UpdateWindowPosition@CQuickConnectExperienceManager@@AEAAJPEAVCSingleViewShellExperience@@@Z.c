/*
 * XREFs of ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017F688
 * Callers:
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017CA20 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x18006C054 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F81A0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800F9DC8 (--1RoVariant@@QEAA@XZ.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x1800F9E00 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z @ 0x180176E14 (-GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z.c)
 *     ??$ExperienceManager_UpdateWindowPosition_Params@AEAHAEAH@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXAEAH0@Z @ 0x180179A7C (--$ExperienceManager_UpdateWindowPosition_Params@AEAHAEAH@ExperienceManager_UpdateWindowPosition.c)
 *     ??$ExperienceManager_UpdateWindowPosition_SetPosition@AEAJAEAJAEAJAEAJ@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXAEAJ000@Z @ 0x180179B38 (--$ExperienceManager_UpdateWindowPosition_SetPosition@AEAJAEAJAEAJAEAJ@ExperienceManager_UpdateW.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18017A154 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflector_ea_18017A154.c)
 *     ??1ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAA@XZ @ 0x18017A64C (--1ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x18017B9FC (-FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 *     ?FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x18017BB74 (-FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 *     ?StartActivity@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXXZ @ 0x18017DF30 (-StartActivity@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18017DFFC (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CQuickConnectExperienceManager::UpdateWindowPosition(
        struct tagRECT *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int LastError; // ebx
  __int64 v6; // rbx
  __int64 *v7; // rbx
  __int64 v8; // rcx
  int Int32; // eax
  __int64 v10; // rdx
  float v11; // xmm0_4
  float v12; // xmm1_4
  HMONITOR v13; // rbx
  const char *v14; // r9
  __int64 v15; // rdx
  int v17; // [rsp+38h] [rbp-D0h] BYREF
  int v18; // [rsp+3Ch] [rbp-CCh] BYREF
  struct tagRECT rcWork; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h]
  __int64 v23; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-98h]
  __int64 v25; // [rsp+78h] [rbp-90h]
  RECT rc; // [rsp+80h] [rbp-88h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-78h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-60h]
  struct tagMONITORINFO mi; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v30[40]; // [rsp+D8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v25 = -2LL;
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v30,
    (__int64)"ExperienceManager_UpdateWindowPosition");
  v30[0] = &QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::`vftable';
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::StartActivity((QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition *)v30);
  v18 = (int)*((float *)a2 + 11);
  v17 = (int)*((float *)a2 + 12);
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::ExperienceManager_UpdateWindowPosition_Params<int &,int &>(
    (__int64)v30,
    (__int64)&v18,
    (__int64)&v17);
  v20 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (_QWORD *)a2 + 4,
         &v20);
  LastError = v4;
  if ( v4 >= 0 )
  {
    v23 = 0LL;
    LODWORD(v24) = 0;
    v6 = v20;
    *(_QWORD *)&rcWork.left = &v23;
    *(_QWORD *)&rcWork.right = 0LL;
    v28 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"MaxHeight", 0xAu, 9u);
    (*(void (__fastcall **)(__int64, __int64, LONG *))(*(_QWORD *)v6 + 48LL))(v6, v28, &rcWork.right);
    v28 = 0LL;
    v7 = *(__int64 **)&rcWork.left;
    RoVariant::RoVariant((RoVariant *)&v21, *(struct IInspectable **)&rcWork.right);
    v8 = *v7;
    *v7 = v21;
    v21 = v8;
    LODWORD(v8) = *((_DWORD *)v7 + 2);
    *((_DWORD *)v7 + 2) = v22;
    LODWORD(v22) = v8;
    RoVariant::~RoVariant((RoVariant *)&v21);
    if ( v23 )
    {
      *(_QWORD *)&rcWork.left = v23;
      rcWork.right = v24;
      Int32 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&rcWork, &this[23].right);
      LastError = Int32;
      if ( Int32 < 0 )
      {
        v10 = 821LL;
        goto LABEL_18;
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
    if ( v13 == (HMONITOR)-1LL )
    {
      v15 = 833LL;
    }
    else
    {
      mi.cbSize = 40;
      memset_0(&mi.rcMonitor, 0, 0x24uLL);
      if ( GetMonitorInfoW(v13, &mi) )
      {
        rcWork = mi.rcWork;
        Int32 = CQuickConnectExperienceManager::FinalizeWindowPlacement(
                  (CQuickConnectExperienceManager *)this,
                  v18,
                  v17,
                  &rcWork);
        LastError = Int32;
        if ( Int32 >= 0 )
        {
          Int32 = CQuickConnectExperienceManager::FinalizeWindowPosition(
                    (CQuickConnectExperienceManager *)this,
                    v18,
                    v17,
                    &rcWork);
          LastError = Int32;
          if ( Int32 >= 0 )
          {
            if ( *((_QWORD *)a2 + 3) )
            {
              Int32 = CSingleViewShellExperience::SetPosition(a2, this + 24);
              LastError = Int32;
              if ( Int32 < 0 )
              {
                v10 = 850LL;
                goto LABEL_18;
              }
              QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::ExperienceManager_UpdateWindowPosition_SetPosition<long &,long &,long &,long &>(
                (__int64)v30,
                (__int64)&this[24],
                (__int64)&this[24].top,
                (__int64)&this[24].right,
                (__int64)&this[24].bottom);
            }
            wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v30);
            LastError = 0;
            goto LABEL_21;
          }
          v10 = 845LL;
        }
        else
        {
          v10 = 842LL;
        }
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)Int32);
        goto LABEL_21;
      }
      v15 = 835LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v15,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
                  v14);
LABEL_21:
    RoVariant::~RoVariant((RoVariant *)&v23);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32E,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::~ExperienceManager_UpdateWindowPosition((QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition *)v30);
  return LastError;
}
