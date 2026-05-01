/*
 * XREFs of ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1801229C0
 * Callers:
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x1801227F4 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1801241AC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1801244F4 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180125100 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180127B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VView_ea_180127B90.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180127C40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180127C40.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x180127F90 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??0LegacyViewWrapper@@QEAA@XZ @ 0x18012AAF8 (--0LegacyViewWrapper@@QEAA@XZ.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180133010 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?CreateNewViewForWindow@ViewManagerBridge@@UEAAJPEAUHWND__@@PEBGPEAI@Z @ 0x180133C30 (-CreateNewViewForWindow@ViewManagerBridge@@UEAAJPEAUHWND__@@PEBGPEAI@Z.c)
 *     ?RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Z @ 0x18013AB88 (-RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVV.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1801C0F4C (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ViewEventDispatcher::_HandleWindowCreatedWithNoView(
        ViewEventDispatcher *this,
        HWND a2,
        unsigned __int16 **a3)
{
  int ImmersiveAppIdFromWindow; // edi
  int NewViewForWindow; // eax
  char v6; // r15
  const char *v7; // r9
  LegacyViewWrapper *v8; // rax
  LegacyViewWrapper *v9; // rbx
  int MatchingViewEventRegistration; // eax
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  _DWORD **v13; // r13
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  _DWORD *v16; // rcx
  char v17; // al
  LegacyViewWrapper *v18; // rcx
  struct IViewWrapperInternal *v19; // rcx
  LegacyViewWrapper *v21; // [rsp+40h] [rbp-49h] BYREF
  _QWORD *v22; // [rsp+48h] [rbp-41h] BYREF
  LPVOID pv[3]; // [rsp+50h] [rbp-39h] BYREF
  __int128 v24; // [rsp+68h] [rbp-21h]
  HWND *p_hWnd; // [rsp+78h] [rbp-11h]
  __int64 v26; // [rsp+80h] [rbp-9h]
  __int128 v27; // [rsp+88h] [rbp-1h]
  HWND *v28; // [rsp+98h] [rbp+Fh]
  char v29; // [rsp+A0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  HWND hWnd; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE hData; // [rsp+100h] [rbp+77h] BYREF
  struct IViewWrapperInternal *v33; // [rsp+108h] [rbp+7Fh] BYREF

  hWnd = a2;
  v26 = -2LL;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow(a2, (HWND)pv, a3);
  if ( ImmersiveAppIdFromWindow < 0 )
    goto LABEL_40;
  NewViewForWindow = ViewManagerBridge::CreateNewViewForWindow(
                       *((ViewManagerBridge **)this + 64),
                       hWnd,
                       (const unsigned __int16 *)pv[0],
                       (unsigned int *)&hData);
  ImmersiveAppIdFromWindow = NewViewForWindow;
  if ( NewViewForWindow < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xA44,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)NewViewForWindow);
    goto LABEL_40;
  }
  *(_QWORD *)&v24 = this;
  *((_QWORD *)&v24 + 1) = &hData;
  p_hWnd = &hWnd;
  v27 = v24;
  v28 = &hWnd;
  v6 = 1;
  v29 = 1;
  if ( SetPropW(hWnd, L"Microsoft.Windows.WindowFactory.ViewId", (HANDLE)(unsigned int)hData) )
  {
    v33 = 0LL;
    v8 = (LegacyViewWrapper *)operator new(0x240uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v8 )
    {
      ImmersiveAppIdFromWindow = -2147024882;
LABEL_13:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xA5C,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)ImmersiveAppIdFromWindow);
LABEL_36:
      v19 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v19 + 16LL))(v19);
      }
      goto LABEL_38;
    }
    v9 = LegacyViewWrapper::LegacyViewWrapper(v8);
    v21 = v9;
    v22 = 0LL;
    ImmersiveAppIdFromWindow = LegacyViewWrapper::RuntimeClassInitialize(
                                 v9,
                                 (unsigned int)hData,
                                 0LL,
                                 pv[0],
                                 L"Windows.Internal.ShellExperience.TopLevelApplication",
                                 1,
                                 this);
    if ( ImmersiveAppIdFromWindow >= 0 )
      ImmersiveAppIdFromWindow = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,ILegacyViewWrapper>::QueryInterface(
                                   v9,
                                   &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f,
                                   &v33);
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,ILegacyViewWrapper>::Release(v9);
    if ( ImmersiveAppIdFromWindow < 0 )
      goto LABEL_13;
    v22 = 0LL;
    AcquireSRWLockExclusive((PSRWLOCK)this + 37);
    v21 = (ViewEventDispatcher *)((char *)this + 296);
    MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v33, &v22);
    ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
    v11 = v22;
    if ( MatchingViewEventRegistration >= 0 )
    {
      (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD, _QWORD))(*(_QWORD *)v33 + 568LL))(
        v33,
        (unsigned __int64)(v22 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v22 >> 64),
        0LL);
      (*(void (__fastcall **)(struct IViewWrapperInternal *, HWND, _QWORD))(*(_QWORD *)v33 + 648LL))(v33, hWnd, 0LL);
      v13 = (_DWORD **)((char *)this + 432);
      v14 = 0LL;
      v15 = 0LL;
      if ( *((_QWORD *)this + 55) )
      {
        v16 = *v13;
        while ( *v16 != (_DWORD)hData )
        {
          ++v15;
          v16 += 6;
          if ( v15 >= *((_QWORD *)this + 55) )
            goto LABEL_22;
        }
        v14 = v15;
        v17 = 1;
      }
      else
      {
LABEL_22:
        v17 = 0;
      }
      if ( v17 )
      {
        (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(*(_QWORD *)v33 + 680LL))(
          v33,
          *(_QWORD *)&(*v13)[6 * v14 + 2]);
        CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
          (char *)this + 432,
          v14);
      }
      MatchingViewEventRegistration = ViewEventDispatcher::_AddValidView(this, v33);
      ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
      if ( MatchingViewEventRegistration >= 0 )
      {
        if ( this != (ViewEventDispatcher *)-296LL )
          ReleaseSRWLockExclusive((PSRWLOCK)this + 37);
        v18 = (LegacyViewWrapper *)v11[4];
        v21 = v18;
        if ( v18 )
          (*(void (__fastcall **)(LegacyViewWrapper *))(*(_QWORD *)v18 + 8LL))(v18);
        ViewEventDispatcher::_RaiseViewEventWithPropertySet(this, v33, 0LL, 0LL, &v21);
        v6 = 0;
        v29 = 0;
        ImmersiveAppIdFromWindow = 0;
        goto LABEL_34;
      }
      v12 = 2676LL;
    }
    else
    {
      v12 = 2657LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)MatchingViewEventRegistration);
    if ( this != (ViewEventDispatcher *)-296LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 37);
LABEL_34:
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    goto LABEL_36;
  }
  ImmersiveAppIdFromWindow = wil::details::in1diag3::Return_GetLastError(
                               retaddr,
                               (void *)0xA50,
                               (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                               v7);
LABEL_38:
  if ( v6 )
  {
    ViewManagerBridge::NavigateView(*((_QWORD *)this + 64), (unsigned int)hData, 0LL);
    SetPropW(hWnd, L"Microsoft.Windows.WindowFactory.ViewId", 0LL);
  }
LABEL_40:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return (unsigned int)ImmersiveAppIdFromWindow;
}
