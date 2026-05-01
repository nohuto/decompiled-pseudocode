/*
 * XREFs of ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1800F76FC
 * Callers:
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x1800F7598 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     wil::ScopeExit__lambda_da6f0bd90bf7c2fa00899691c94231d9___ @ 0x180044290 (wil--ScopeExit__lambda_da6f0bd90bf7c2fa00899691c94231d9___.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800F8F2C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1800F9274 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x1800F9DD0 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VViewWrapperBase@@U?$InterfaceList@UILegacyViewWrapper@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FC920 (-Release@-$RuntimeClass@U-$InterfaceList@VViewWrapperBase@@U-$InterfaceList@UILegacyViewWrapper@.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VViewWrapperBase@@U?$InterfaceList@UILegacyViewWrapper@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FCA40 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VViewWrapperBase@@U-$InterfaceList@UILegacyViewW.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x1800FCE64 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??0LegacyViewWrapper@@QEAA@XZ @ 0x180100048 (--0LegacyViewWrapper@@QEAA@XZ.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180108770 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?CreateNewViewForWindow@ViewManagerBridge@@UEAAJPEAUHWND__@@PEBGPEAI@Z @ 0x180109390 (-CreateNewViewForWindow@ViewManagerBridge@@UEAAJPEAUHWND__@@PEBGPEAI@Z.c)
 *     ?RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Z @ 0x1801108D4 (-RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVV.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1801757E4 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ViewEventDispatcher::_HandleWindowCreatedWithNoView(
        ViewEventDispatcher *this,
        HWND a2,
        unsigned __int16 **a3)
{
  int ImmersiveAppIdFromWindow; // edi
  int NewViewForWindow; // eax
  const char *v6; // r9
  LegacyViewWrapper *v7; // rax
  LegacyViewWrapper *v8; // rbx
  int MatchingViewEventRegistration; // eax
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  _DWORD **v12; // r15
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  _DWORD *v15; // rcx
  int v16; // eax
  LegacyViewWrapper *v17; // rcx
  struct IViewWrapperInternal *v18; // rcx
  struct IViewWrapperInternal *v20; // [rsp+40h] [rbp-39h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp-31h] BYREF
  _QWORD *v22; // [rsp+50h] [rbp-29h] BYREF
  LPVOID pv[3]; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v24[3]; // [rsp+70h] [rbp-9h] BYREF
  char v25; // [rsp+88h] [rbp+Fh]
  __int128 v26; // [rsp+90h] [rbp+17h] BYREF
  HWND *p_hWnd; // [rsp+A0h] [rbp+27h]
  __int64 v28; // [rsp+A8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  HWND hWnd; // [rsp+E8h] [rbp+6Fh] BYREF
  LegacyViewWrapper *v31; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE hData; // [rsp+F8h] [rbp+7Fh] BYREF

  hWnd = a2;
  v28 = -2LL;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow(a2, (HWND)pv, a3);
  if ( ImmersiveAppIdFromWindow < 0 )
    goto LABEL_40;
  NewViewForWindow = ViewManagerBridge::CreateNewViewForWindow(
                       *((ViewManagerBridge **)this + 55),
                       hWnd,
                       (const unsigned __int16 *)pv[0],
                       (unsigned int *)&hData);
  ImmersiveAppIdFromWindow = NewViewForWindow;
  if ( NewViewForWindow < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x9C2,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)NewViewForWindow);
    goto LABEL_40;
  }
  *(_QWORD *)&v26 = this;
  *((_QWORD *)&v26 + 1) = &hData;
  p_hWnd = &hWnd;
  wil::ScopeExit__lambda_da6f0bd90bf7c2fa00899691c94231d9___((__int64)v24, &v26);
  if ( SetPropW(hWnd, L"Microsoft.Windows.WindowFactory.ViewId", (HANDLE)(unsigned int)hData) )
  {
    v20 = 0LL;
    v7 = (LegacyViewWrapper *)operator new(0x228uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v7 )
    {
      ImmersiveAppIdFromWindow = -2147024882;
LABEL_13:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x9DA,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)ImmersiveAppIdFromWindow);
LABEL_36:
      v18 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_38;
    }
    v8 = LegacyViewWrapper::LegacyViewWrapper(v7);
    v31 = v8;
    SRWLock = 0LL;
    ImmersiveAppIdFromWindow = LegacyViewWrapper::RuntimeClassInitialize(
                                 v8,
                                 (unsigned int)hData,
                                 0LL,
                                 pv[0],
                                 L"Windows.Internal.ShellExperience.TopLevelApplication",
                                 1,
                                 this);
    if ( ImmersiveAppIdFromWindow >= 0 )
      ImmersiveAppIdFromWindow = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewWrapperBase,Microsoft::WRL::Details::InterfaceList<ILegacyViewWrapper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                                   v8,
                                   &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f,
                                   &v20);
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewWrapperBase,Microsoft::WRL::Details::InterfaceList<ILegacyViewWrapper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v8);
    if ( ImmersiveAppIdFromWindow < 0 )
      goto LABEL_13;
    v22 = 0LL;
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 28, &SRWLock);
    MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v20, &v22);
    ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
    v10 = v22;
    if ( MatchingViewEventRegistration >= 0 )
    {
      (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD, _QWORD))(*(_QWORD *)v20 + 568LL))(
        v20,
        (unsigned __int64)(v22 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v22 >> 64),
        0LL);
      (*(void (__fastcall **)(struct IViewWrapperInternal *, HWND, _QWORD))(*(_QWORD *)v20 + 648LL))(v20, hWnd, 0LL);
      v12 = (_DWORD **)((char *)this + 360);
      v13 = 0LL;
      v14 = 0LL;
      if ( *((_QWORD *)this + 46) )
      {
        v15 = *v12;
        while ( *v15 != (_DWORD)hData )
        {
          ++v14;
          v15 += 6;
          if ( v14 >= *((_QWORD *)this + 46) )
            goto LABEL_22;
        }
        v13 = v14;
        v16 = 0;
      }
      else
      {
LABEL_22:
        v16 = -2147319765;
      }
      if ( v16 >= 0 )
      {
        (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(*(_QWORD *)v20 + 680LL))(
          v20,
          *(_QWORD *)&(*v12)[6 * v13 + 2]);
        CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
          (char *)this + 360,
          v13);
      }
      MatchingViewEventRegistration = ViewEventDispatcher::_AddValidView(this, v20);
      ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
      if ( MatchingViewEventRegistration >= 0 )
      {
        if ( SRWLock )
          ReleaseSRWLockExclusive(SRWLock);
        v17 = (LegacyViewWrapper *)v10[4];
        v31 = v17;
        if ( v17 )
          (*(void (__fastcall **)(LegacyViewWrapper *))(*(_QWORD *)v17 + 8LL))(v17);
        ViewEventDispatcher::_RaiseViewEventWithPropertySet(this, v20, 0LL, 0LL, &v31);
        v25 = 0;
        ImmersiveAppIdFromWindow = 0;
        goto LABEL_34;
      }
      v11 = 2546LL;
    }
    else
    {
      v11 = 2527LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)MatchingViewEventRegistration);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
LABEL_34:
    if ( v10 )
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
    goto LABEL_36;
  }
  ImmersiveAppIdFromWindow = wil::details::in1diag3::Return_GetLastError(
                               retaddr,
                               (void *)0x9CE,
                               (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                               v6);
LABEL_38:
  if ( v25 )
  {
    ViewManagerBridge::NavigateView(*(_QWORD *)(v24[0] + 440LL), *(unsigned int *)v24[1], 0LL);
    SetPropW(*(HWND *)v24[2], L"Microsoft.Windows.WindowFactory.ViewId", 0LL);
  }
LABEL_40:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return (unsigned int)ImmersiveAppIdFromWindow;
}
