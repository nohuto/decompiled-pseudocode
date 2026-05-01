/*
 * XREFs of ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1800800A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180024440 (-CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180075370 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x18007D3E0 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     ?GetCwm@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIClassicWindowPresentation@@@WRL@Microsoft@@XZ @ 0x18007D4B0 (-GetCwm@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIClassicWindowPresentation@@@WRL@Micr.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CWin32ApplicationView::EnumerateOwnershipTree(CWin32ApplicationView *this, struct IObjectArray **a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rsi
  HWND *v7; // rdi
  __int64 *v8; // rax
  const struct _GUID *v9; // rcx
  int Instance; // eax
  HWND *v11; // rsi
  HWND v12; // rbx
  __int64 *ViewManager; // rax
  bool v14; // r15
  __int64 v15; // rcx
  struct IApplicationView *v16; // rbx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-48h] BYREF
  __int64 v25; // [rsp+40h] [rbp-40h] BYREF
  struct IApplicationView *v26; // [rsp+48h] [rbp-38h] BYREF
  LPVOID pv[2]; // [rsp+50h] [rbp-30h] BYREF
  HWND *v28; // [rsp+60h] [rbp-20h]
  __int64 v29; // [rsp+68h] [rbp-18h]
  __int64 v30; // [rsp+70h] [rbp-10h]
  __int64 v31; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v33; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v34; // [rsp+C8h] [rbp+48h] BYREF

  pv[1] = (LPVOID)-2LL;
  *a2 = 0LL;
  ApplicationViewManagement::CGlobals::GetCwm((__int64 *)&v24);
  if ( v24 )
  {
    v23 = 0LL;
    v5 = (**v24)(v24, &GUID_9004b409_618f_4892_959c_26fcf2cbafa3, &v23);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, LPVOID *))(*(_QWORD *)v23 + 32LL))(
             v23,
             *((_QWORD *)this + 24),
             &v33,
             pv);
      if ( v4 >= 0 )
      {
        v30 = 0LL;
        v6 = v33;
        v7 = (HWND *)pv[0];
        v28 = (HWND *)pv[0];
        v29 = v33;
        v31 = v33;
        v34 = 0LL;
        v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v34);
        Instance = CEnumerableObjectCollection::CreateInstance(v9, (void **)v8);
        v4 = Instance;
        if ( Instance >= 0 )
        {
          v11 = &v7[v6];
          if ( v7 != v11 )
          {
            do
            {
              v12 = *v7;
              v26 = 0LL;
              ViewManager = ApplicationViewManagement::CGlobals::GetViewManager(&v25);
              v14 = (int)CApplicationViewManager::GetViewForHwnd((RTL_SRWLOCK *)(*ViewManager + 144), v12, &v26) >= 0;
              v15 = v25;
              if ( v25 )
              {
                v25 = 0LL;
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 228), 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v15 + 80) + 64LL))(v15 + 80, 1LL);
                  if ( Microsoft::WRL::Details::ModuleBase::module_ )
                    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
                }
              }
              v16 = v26;
              if ( v14 )
              {
                v17 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v34 + 40LL))(v34, v26);
                if ( v17 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x2D3,
                    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
                    (const char *)(unsigned int)v17);
              }
              if ( v16 )
                (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v16 + 16LL))(v16);
              ++v7;
            }
            while ( v7 != v11 );
            v7 = v28;
          }
          v18 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IObjectArray **))v34)(
                  v34,
                  &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                  a2);
          v4 = v18;
          if ( v18 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2D6,
              (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
              (const char *)(unsigned int)v18);
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x2C3,
            (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
            (const char *)(unsigned int)Instance);
        }
        v19 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
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
    v20 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
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
  v21 = (__int64)v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return (unsigned int)v4;
}
