/*
 * XREFs of ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18007D0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180023B20 (-CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180072740 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180077610 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@V_ea_180077610.c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x18007A6D0 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     ?GetCwm@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIClassicWindowPresentation@@@WRL@Microsoft@@XZ @ 0x18007A750 (-GetCwm@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIClassicWindowPresentation@@@WRL@Micr.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CWin32ApplicationView::EnumerateOwnershipTree(CWin32ApplicationView *this, struct IObjectArray **a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v6; // r14
  HWND *v7; // rdi
  __int64 *v8; // rax
  const struct _GUID *v9; // rcx
  int Instance; // eax
  HWND *v11; // rsi
  HWND *v12; // r14
  HWND v13; // rbx
  __int64 *ViewManager; // rax
  bool v15; // r12
  __int64 v16; // rcx
  struct IApplicationView *v17; // rbx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  __int64 v25; // [rsp+38h] [rbp-48h] BYREF
  struct IApplicationView *v26; // [rsp+40h] [rbp-40h] BYREF
  LPVOID pv[7]; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v29; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v30; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v31; // [rsp+D8h] [rbp+58h] BYREF

  pv[1] = (LPVOID)-2LL;
  *a2 = 0LL;
  ApplicationViewManagement::CGlobals::GetCwm((__int64 *)&v24);
  if ( v24 )
  {
    v31 = 0LL;
    v5 = (**v24)(v24, &GUID_9004b409_618f_4892_959c_26fcf2cbafa3, &v31);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, LPVOID *))(*(_QWORD *)v31 + 32LL))(
             v31,
             *((_QWORD *)this + 21),
             &v29,
             pv);
      if ( v4 >= 0 )
      {
        pv[4] = 0LL;
        v6 = v29;
        v7 = (HWND *)pv[0];
        pv[2] = pv[0];
        pv[3] = (LPVOID)v29;
        pv[5] = (LPVOID)v29;
        v30 = 0LL;
        v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v30);
        Instance = CEnumerableObjectCollection::CreateInstance(v9, (void **)v8);
        v4 = Instance;
        if ( Instance >= 0 )
        {
          v11 = v7;
          v12 = &v7[v6];
          if ( v7 != v12 )
          {
            do
            {
              v13 = *v11;
              v26 = 0LL;
              ViewManager = ApplicationViewManagement::CGlobals::GetViewManager(&v25);
              v15 = (int)CApplicationViewManager::GetViewForHwnd((RTL_SRWLOCK *)(*ViewManager + 104), v13, &v26) >= 0;
              v16 = v25;
              if ( v25 )
              {
                v25 = 0LL;
                Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v16);
              }
              v17 = v26;
              if ( v15 )
              {
                v18 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v30 + 40LL))(v30, v26);
                if ( v18 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x2D3,
                    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
                    (const char *)(unsigned int)v18);
              }
              if ( v17 )
                (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v17 + 16LL))(v17);
              ++v11;
            }
            while ( v11 != v12 );
          }
          v19 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IObjectArray **))v30)(
                  v30,
                  &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                  a2);
          v4 = v19;
          if ( v19 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2D6,
              (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
              (const char *)(unsigned int)v19);
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x2C3,
            (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
            (const char *)(unsigned int)Instance);
        }
        v20 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
        if ( v7 )
          CoTaskMemFree(v7);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2B8,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v5);
    }
    v21 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  else
  {
    v4 = -2144927145;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B5,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x80270257LL);
  }
  v22 = (__int64)v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return (unsigned int)v4;
}
