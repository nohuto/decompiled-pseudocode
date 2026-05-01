/*
 * XREFs of ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180032FD0
 * Callers:
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x180034860 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x1800F04C0 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 * Callees:
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800036F0 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18000C6F4 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x18003208C (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800324F4 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180050B20 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x1800514D0 (-SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x180055B40 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180055BE0 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x180087388 (-InternalRelease@-$ComPtr@VViewEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs_____ptr64_::_)(Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs_____ptr64___lambda_618126d0e30524ea9a34e34e78b13d6b___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs_____ptr64_::Invoke @ 0x18008DFD0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18008DFD0.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ @ 0x180091FD8 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180092008 (--4-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAI$$QEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEAPEAVViewEventDispatcher@@@Z @ 0x1800945FC (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBG.c)
 *     ??$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@?$CTSimpleFixedArray@UPendingViewData@ViewEventDispatcher@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEBAJAEBVPendingDataFinderByViewInstanceId@ViewEventDispatcher@@AEBUPendingViewData@2@PEA_K_K@Z @ 0x180095568 (--$FindEx@VPendingDataFinderByViewInstanceId@ViewEventDispatcher@@@-$CTSimpleFixedArray@UPending.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x180095D7C (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x1800961B0 (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180097C44 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F755C (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x1801CBAF4 (-IsLegacyApp@@YAJPEBGPEA_N@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForViewWrapper@@@@@@QEAAJ_K0@Z @ 0x1801CFF2C (-_EnsureCapacity@-$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V-$CTPolicyCoTaskMem.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall ViewEventDispatcher::_HandleWindowCreatedForExistingView(
        ViewEventDispatcher *this,
        HWND hWnd,
        unsigned int a3)
{
  unsigned int v3; // r12d
  char v6; // r13
  RTL_SRWLOCK *v7; // r15
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rbx
  _DWORD *v11; // rcx
  unsigned int (__fastcall *v12)(ViewWrapperBase *__hidden); // rax
  int v13; // eax
  char v14; // al
  __int64 v15; // rax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v16; // rbx
  HSTRING *v17; // rdi
  __int64 (__fastcall *v18)(ViewWrapperBase *__hidden, HSTRING *); // rax
  HRESULT v19; // eax
  int ImmersiveAppIdFromWindow; // ebx
  const unsigned __int16 *(__fastcall *v21)(ViewWrapperBase *__hidden); // rax
  const WCHAR *StringRawBuffer; // rax
  volatile signed __int32 *v23; // rdi
  volatile signed __int32 *v24; // rbx
  __int64 v25; // r15
  char v26; // r13
  UINT32 StringLen; // esi
  const WCHAR *v28; // rax
  UINT32 v29; // esi
  const WCHAR *v30; // rax
  volatile signed __int32 **v31; // rdx
  volatile signed __int32 *v32; // rsi
  volatile signed __int32 *v33; // rcx
  volatile signed __int32 *v34; // rcx
  __int64 (__fastcall *v35)(void *); // rax
  _QWORD *v36; // rbx
  HSTRING v37; // rcx
  HSTRING v38; // rcx
  _QWORD *v39; // rdi
  bool v40; // bl
  struct IUnknown *v41; // rdx
  int AppUserModelIdForView; // eax
  int MatchingViewEventRegistration; // eax
  __int64 v44; // rdx
  _QWORD *v45; // rdx
  void (__fastcall *v46)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, _QWORD *, _QWORD); // rax
  unsigned __int16 **v47; // r8
  int v48; // eax
  unsigned __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v54; // r13
  _QWORD *v55; // rax
  _QWORD *v56; // rbx
  _QWORD *v57; // r15
  __int64 v58; // rcx
  LPUNKNOWN v59; // rcx
  __int64 *v60; // rsi
  volatile int *v61; // rdx
  volatile signed __int64 *v62; // rdi
  _QWORD *v63; // r12
  void (*v64)(void); // rax
  int v65; // r15d
  signed __int64 v66; // rax
  signed __int64 v67; // rtt
  signed __int64 v68; // rax
  unsigned int v69; // ecx
  signed __int64 v70; // rtt
  __int64 v71; // rbx
  int v72; // edi
  __int64 v73; // rcx
  unsigned __int64 v74; // r9
  __int64 v75; // rdx
  __int64 (__fastcall *v76)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, volatile signed __int64 *); // rax
  int v77; // eax
  volatile int *v78; // rdx
  ConnectedStandbyHelper *v79; // rcx
  __int64 v80; // rcx
  volatile signed __int64 *v81; // r10
  signed __int64 v82; // rax
  unsigned int v83; // ecx
  signed __int64 v84; // rtt
  __int64 v85; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v86; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-E0h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-E0h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v90; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v91; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v92; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int64 *v93; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v94; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v95; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING newString; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v97; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v98; // [rsp+70h] [rbp-90h] BYREF
  struct MsgString *v99; // [rsp+78h] [rbp-88h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v101; // [rsp+88h] [rbp-78h] BYREF
  void *v102; // [rsp+90h] [rbp-70h] BYREF
  __int64 v103; // [rsp+98h] [rbp-68h] BYREF
  __int128 v104; // [rsp+A0h] [rbp-60h]
  struct HWND__ v105[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v106; // [rsp+B8h] [rbp-48h]
  __int64 v107; // [rsp+C0h] [rbp-40h]
  ViewEventDispatcher *v108; // [rsp+C8h] [rbp-38h]
  const unsigned __int16 *Data; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v110; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v111; // [rsp+E0h] [rbp-20h]
  _QWORD v112[3]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v113[7]; // [rsp+100h] [rbp+0h] BYREF
  char v114; // [rsp+138h] [rbp+38h]
  __int128 v115; // [rsp+140h] [rbp+40h]
  char v116; // [rsp+150h] [rbp+50h]
  __int128 v117; // [rsp+158h] [rbp+58h]
  char v118; // [rsp+168h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]
  LPCWCH v120; // [rsp+1C0h] [rbp+C0h] BYREF
  HWND v121; // [rsp+1C8h] [rbp+C8h]
  unsigned int v122; // [rsp+1D0h] [rbp+D0h] BYREF
  LPCWCH lpString2; // [rsp+1D8h] [rbp+D8h]

  v122 = a3;
  v121 = hWnd;
  v113[2] = -2LL;
  v3 = a3;
  *(_QWORD *)&v104 = this;
  DWORD2(v104) = a3;
  v115 = v104;
  v6 = 1;
  v116 = 1;
  v90 = 0LL;
  v95 = 0LL;
  LODWORD(lpString2) = 3;
  v7 = (RTL_SRWLOCK *)((char *)this + 296);
  AcquireSRWLockExclusive((PSRWLOCK)this + 37);
  v113[3] = v7;
  v113[4] = 0LL;
  v9 = 0LL;
  v91 = 0LL;
  v10 = 0LL;
  if ( *((_QWORD *)this + 47) )
  {
    while ( 1 )
    {
      v11 = *(_DWORD **)(*((_QWORD *)this + 46) + 8 * v10);
      v12 = *(unsigned int (__fastcall **)(ViewWrapperBase *__hidden))(*(_QWORD *)v11 + 592LL);
      v13 = v12 == ViewWrapperBase::GetViewInstanceId
          ? v11[35]
          : ((__int64 (__fastcall *)(_DWORD *, unsigned int (__fastcall *)(ViewWrapperBase *__hidden)))v12)(
              v11,
              ViewWrapperBase::GetViewInstanceId);
      if ( v13 == v3 )
        break;
      if ( (unsigned __int64)++v10 >= *((_QWORD *)this + 47) )
      {
        v9 = v91;
        goto LABEL_8;
      }
    }
    v9 = v10;
    v91 = v10;
    v14 = 1;
  }
  else
  {
LABEL_8:
    v14 = 0;
  }
  if ( !v14 )
  {
    v113[1] = 0LL;
    v112[2] = 0LL;
    v113[0] = 0LL;
    v101 = v3;
    v39 = (_QWORD *)((char *)this + 432);
    v40 = (int)CTSimpleFixedArray<ViewEventDispatcher::PendingViewData,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>>::FindEx<ViewEventDispatcher::PendingDataFinderByViewInstanceId>(
                 (char *)this + 432,
                 &v101,
                 v8,
                 &v91) >= 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v113);
    if ( v40 )
    {
      v41 = *(struct IUnknown **)(*v39 + 24 * v91 + 8);
      if ( !v41 )
        goto LABEL_104;
      *(_QWORD *)&v104 = this;
      *((_QWORD *)&v104 + 1) = &v91;
      v117 = v104;
      v118 = 1;
      AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(*((ViewManagerBridge **)this + 64), v41, &v99);
      ImmersiveAppIdFromWindow = AppUserModelIdForView;
      if ( AppUserModelIdForView >= 0 )
      {
        v113[6] = &v99;
        v114 = 1;
        v108 = this;
        Data = MsgStringGetData(v99);
        v110 = *(_QWORD *)(*v39 + 24 * v91 + 8);
        MatchingViewEventRegistration = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const (&)[53],ViewEventDispatcher *>(
                                          (unsigned int)&v90,
                                          (unsigned int)&v122,
                                          (unsigned int)&v110,
                                          (unsigned int)&Data);
        ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
        if ( MatchingViewEventRegistration >= 0 )
        {
          Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(&v95);
          MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(
                                            (__int64)this,
                                            v90,
                                            &v95);
          ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
          if ( MatchingViewEventRegistration >= 0 )
          {
            v45 = v95 + 2;
            if ( !v95 )
              v45 = 0LL;
            v46 = *(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, _QWORD *, _QWORD))(*(_QWORD *)v90 + 584LL);
            if ( (char *)v46 == (char *)ViewWrapperBase::SetRegistration )
              ViewWrapperBase::SetRegistration(v90, v45, 0LL);
            else
              v46(v90, v45, 0LL);
            if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v90 + 672LL) == ViewWrapperBase::WindowCreated )
              ViewWrapperBase::WindowCreated(v90, hWnd, 0LL);
            else
              (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HWND, _QWORD))(*(_QWORD *)v90 + 672LL))(
                v90,
                hWnd,
                0LL);
            MatchingViewEventRegistration = ViewEventDispatcher::_AddValidView(this, v90);
            ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
            if ( MatchingViewEventRegistration >= 0 )
            {
              LODWORD(lpString2) = 0;
              MsgRelease(v99);
              CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
                (char *)this + 432,
                v91);
              goto LABEL_104;
            }
            v44 = 2337LL;
          }
          else
          {
            v44 = 2332LL;
          }
        }
        else
        {
          v44 = 2329LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v44,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)MatchingViewEventRegistration,
          bIgnoreCase);
        MsgRelease(v99);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x90A,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)AppUserModelIdForView,
          bIgnoreCase);
      }
      CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
        (char *)this + 432,
        v91);
      goto LABEL_100;
    }
    *(_QWORD *)&v105[0].unused = 0LL;
    v106 = 0LL;
    v107 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v105);
    v106 = -1LL;
    v107 = -1LL;
    ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow(hWnd, (LPWSTR *)v105, v47);
    if ( ImmersiveAppIdFromWindow < 0 )
      goto LABEL_99;
    v48 = IsLegacyApp(*(CallerIdentity **)&v105[0].unused, (bool *)&v120);
    ImmersiveAppIdFromWindow = v48;
    if ( v48 >= 0 )
    {
      if ( (_BYTE)v120 )
      {
        PostMessageW(hWnd, 0x10u, 0LL, 0LL);
        ImmersiveAppIdFromWindow = -2147023728;
LABEL_99:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v105);
LABEL_100:
        if ( v7 )
          ReleaseSRWLockExclusive(v7);
        goto LABEL_173;
      }
      v111 = v3;
      v112[0] = 0LL;
      v112[1] = hWnd;
      ImmersiveAppIdFromWindow = 0;
      v51 = *((_QWORD *)this + 55);
      if ( v51 != *((_QWORD *)this + 57)
        || (ImmersiveAppIdFromWindow = CTSimpleArray<RecoveredWindowForViewWrapper,4294967294,CTPolicyCoTaskMem<RecoveredWindowForViewWrapper>,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>,CSimpleArrayStandardMergeHelper<RecoveredWindowForViewWrapper>>::_EnsureCapacity(
                                         (char *)this + 432,
                                         v51 + 1),
            ImmersiveAppIdFromWindow >= 0) )
      {
        v52 = *((_QWORD *)this + 54) + 24 * (*((_QWORD *)this + 55))++;
        if ( v52 )
        {
          *(_DWORD *)v52 = v3;
          *(_QWORD *)(v52 + 8) = 0LL;
          if ( (_QWORD *)(v52 + 8) != v112 )
          {
            *(_QWORD *)(v52 + 8) = 0LL;
            v112[0] = 0LL;
          }
          *(_QWORD *)(v52 + 16) = hWnd;
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v112);
      if ( ImmersiveAppIdFromWindow >= 0 )
      {
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v105);
        goto LABEL_104;
      }
      v49 = (unsigned int)ImmersiveAppIdFromWindow;
      v50 = 2374LL;
    }
    else
    {
      v49 = (unsigned int)v48;
      v50 = 2358LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v50,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v49,
      bIgnoreCase);
    goto LABEL_99;
  }
  v15 = *((_QWORD *)this + 46);
  v16 = *(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)(v15 + 8 * v9);
  v17 = (HSTRING *)v90;
  if ( v90 != v16 )
  {
    if ( v16 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 8LL))(*(_QWORD *)(v15 + 8 * v9));
    v17 = (HSTRING *)v16;
    v90 = v16;
  }
  v95 = 0LL;
  newString = 0LL;
  v18 = (__int64 (__fastcall *)(ViewWrapperBase *__hidden, HSTRING *))*((_QWORD *)*v17 + 7);
  if ( v18 == ViewWrapperBase::get_AppUserModelId )
  {
    v19 = WindowsDuplicateString(v17[18], &newString);
    ImmersiveAppIdFromWindow = v19;
    if ( v19 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x454,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v19,
        bIgnoreCase);
  }
  else
  {
    ImmersiveAppIdFromWindow = v18((ViewWrapperBase *)v17, &newString);
  }
  if ( ImmersiveAppIdFromWindow < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xABE,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)ImmersiveAppIdFromWindow,
      bIgnoreCase);
LABEL_47:
    Windows::Internal::String::~String((Windows::Internal::String *)&newString);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F6,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)ImmersiveAppIdFromWindow,
      bIgnoreCasea);
    goto LABEL_100;
  }
  v21 = (const unsigned __int16 *(__fastcall *)(ViewWrapperBase *__hidden))*((_QWORD *)*v17 + 75);
  if ( v21 == ViewWrapperBase::GetExperienceId )
    StringRawBuffer = WindowsGetStringRawBuffer(v17[19], 0LL);
  else
    StringRawBuffer = v21((ViewWrapperBase *)v17);
  v120 = StringRawBuffer;
  lpString2 = WindowsGetStringRawBuffer(newString, 0LL);
  v95 = 0LL;
  v23 = 0LL;
  v98 = 0LL;
  v24 = 0LL;
  v102 = 0LL;
  v25 = 0LL;
  if ( !*((_QWORD *)this + 43) )
  {
LABEL_40:
    if ( v23 != v24 )
    {
      if ( v24 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
      v34 = v23;
      v23 = v24;
      v98 = v24;
      if ( v34 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
    }
    if ( v23 )
      goto LABEL_48;
    Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(&v102);
    Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(&v98);
    ImmersiveAppIdFromWindow = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC3,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x80070490LL,
      bIgnoreCase);
    v7 = (RTL_SRWLOCK *)((char *)this + 296);
    v6 = 1;
    goto LABEL_47;
  }
  while ( !WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(*((_QWORD *)this + 42) + 8 * v25) + 8LL)) || v24 )
  {
    v26 = 0;
    StringLen = WindowsGetStringLen(*(HSTRING *)(*(_QWORD *)(*((_QWORD *)this + 42) + 8 * v25) + 8LL));
    v28 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(*((_QWORD *)this + 42) + 8 * v25) + 8LL), 0LL);
    if ( CompareStringOrdinal(v28, StringLen, lpString2, -1, 1) == 2 )
      goto LABEL_29;
LABEL_37:
    if ( (unsigned __int64)++v25 >= *((_QWORD *)this + 43) )
      goto LABEL_40;
  }
  v26 = 1;
LABEL_29:
  if ( !WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(*((_QWORD *)this + 42) + 8 * v25) + 16LL)) )
  {
    v29 = WindowsGetStringLen(*(HSTRING *)(*(_QWORD *)(*((_QWORD *)this + 42) + 8 * v25) + 16LL));
    v30 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(*((_QWORD *)this + 42) + 8 * v25) + 16LL), 0LL);
    if ( CompareStringOrdinal(v30, v29, v120, -1, 0) != 2 )
      goto LABEL_37;
  }
  v31 = (volatile signed __int32 **)(*((_QWORD *)this + 42) + 8 * v25);
  if ( v26 )
  {
    v32 = *v31;
    if ( v24 != *v31 )
    {
      if ( v32 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(*v31);
      v33 = v24;
      v24 = v32;
      v102 = (void *)v32;
      if ( v33 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
    }
    goto LABEL_37;
  }
  Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::operator=(&v98, v31);
  v23 = v98;
  if ( !v98 )
    goto LABEL_40;
LABEL_48:
  v95 = v23;
  if ( v24 )
  {
    v35 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v24 + 16LL);
    if ( v35 == CRefCountedObject<ViewEventRegistration>::Release )
    {
      if ( _InterlockedExchangeAdd(v24 + 12, 0xFFFFFFFF) == 1 )
      {
        v36 = v102;
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v102 + 4);
        v37 = (HSTRING)v36[2];
        if ( v37 )
          WindowsDeleteString(v37);
        v38 = (HSTRING)v36[1];
        if ( v38 )
          WindowsDeleteString(v38);
        operator delete(v36, (const struct std::nothrow_t *)0x38);
      }
      v3 = v122;
    }
    else
    {
      v35((void *)v24);
    }
  }
  if ( newString )
    WindowsDeleteString(newString);
  if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v90 + 672LL) == ViewWrapperBase::WindowCreated )
    ViewWrapperBase::WindowCreated(v90, v121, 0LL);
  else
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HWND, _QWORD))(*(_QWORD *)v90 + 672LL))(
      v90,
      v121,
      0LL);
  LODWORD(lpString2) = 6;
  v7 = (RTL_SRWLOCK *)((char *)this + 296);
LABEL_104:
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  if ( v95 )
  {
    v53 = *((_QWORD *)v95 + 4);
    v94 = v53;
    if ( v53 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
    v113[5] = &v94;
    v54 = v90;
    v93 = 0LL;
    v55 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v56 = v55;
    v97 = v55;
    if ( !v55 )
    {
      Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v97);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB20,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)0x8007000ELL,
        bIgnoreCase);
      Microsoft::WRL::ComPtr<ViewEventArgs>::InternalRelease(&v93);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v94);
      goto LABEL_172;
    }
    v57 = v55 + 1;
    v55[1] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v55[4] = 0LL;
    ppunkMarshal = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v58 = v57[3];
      if ( v58 )
      {
        v57[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        v57 + 3);
    }
    v59 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v59->lpVtbl->Release)(v59);
    }
    v60 = v56 + 7;
    v61 = 0LL;
    v56[7] = 0LL;
    v62 = v56 + 10;
    v56[10] = 1LL;
    *v56 = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
    *v57 = &ViewEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v63 = v56 + 8;
    v56[8] = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v64 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
      if ( (char *)v64 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v56 = v97;
      }
      else
      {
        v64();
      }
      v61 = 0LL;
    }
    *v56 = &ViewEventArgs::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
    *v57 = &ViewEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *v63 = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase>::`vftable';
    v65 = (int)lpString2;
    *((_DWORD *)v56 + 12) = (_DWORD)lpString2;
    if ( *v60 )
    {
      v103 = 0LL;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v103);
      v103 = *v60;
      *v60 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v103);
    }
    v66 = *v62;
    while ( v66 >= 0 )
    {
      if ( (_DWORD)v66 != 0x7FFFFFFF )
      {
        v67 = v66;
        v66 = _InterlockedCompareExchange64(v62, v66 + 1, v66);
        if ( v67 != v66 )
          continue;
      }
      goto LABEL_130;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v66 + 16));
LABEL_130:
    v93 = v97;
    v68 = *v62;
    while ( v68 >= 0 )
    {
      if ( (_DWORD)v68 == 0x7FFFFFFF )
        goto LABEL_139;
      v69 = v68 - 1;
      v70 = v68;
      v68 = _InterlockedCompareExchange64(v62, v68 - 1, v68);
      if ( v70 == v68 )
        goto LABEL_136;
    }
    v69 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v68 + 16), v61);
LABEL_136:
    if ( !v69 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v97 + 64LL))(v97, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
LABEL_139:
    v92 = 0LL;
    v71 = v94;
    *(_QWORD *)&v104 = v94;
    if ( v94 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v94 + 8LL))(v94);
    if ( v71 )
    {
      v72 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v71 + 24LL))(
              v71,
              &GUID_d1b9407f_a351_5319_bce5_178ee5585391,
              &v92);
      v73 = v92;
    }
    else
    {
      v73 = 0LL;
      v92 = 0LL;
      v72 = -2147024809;
    }
    if ( v71 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
      v73 = v92;
    }
    if ( v72 < 0 )
    {
      v74 = (unsigned int)v72;
      v75 = 2851LL;
      goto LABEL_148;
    }
    v76 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, volatile signed __int64 *))(*(_QWORD *)v73 + 24LL);
    if ( (char *)v76 == (char *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs_____ptr64_::___Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs_____ptr64___lambda_618126d0e30524ea9a34e34e78b13d6b___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs_____ptr64_::Invoke )
      v77 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs_____ptr64_::___Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs_____ptr64___lambda_618126d0e30524ea9a34e34e78b13d6b___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs_____ptr64_::Invoke(
              v73,
              v54,
              v93);
    else
      v77 = v76(v73, v54, v93);
    if ( v77 >= 0 )
    {
      if ( !v65 )
      {
        v79 = (ConnectedStandbyHelper *)*((_QWORD *)this + 67);
        if ( v79 )
          ConnectedStandbyHelper::HandleViewCreated(v79, v54);
      }
      v80 = v92;
      if ( v92 )
      {
        v92 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
      }
      v81 = v93;
      if ( v93 )
      {
        v93 = 0LL;
        v82 = *((_QWORD *)v81 + 10);
        while ( v82 >= 0 )
        {
          if ( (_DWORD)v82 == 0x7FFFFFFF )
            goto LABEL_169;
          v83 = v82 - 1;
          v84 = v82;
          v82 = _InterlockedCompareExchange64(v81 + 10, v82 - 1, v82);
          if ( v84 == v82 )
            goto LABEL_166;
        }
        v83 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v82 + 16), v78);
LABEL_166:
        if ( !v83 )
        {
          (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v81 + 64))(v81, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
LABEL_169:
      v85 = v94;
      if ( v94 )
      {
        v94 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 16LL))(v85);
      }
    }
    else
    {
      v74 = (unsigned int)v77;
      v75 = 2852LL;
LABEL_148:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v75,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)v74,
        bIgnoreCase);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v92);
      Microsoft::WRL::ComPtr<ViewEventArgs>::InternalRelease(&v93);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v94);
    }
    v3 = v122;
  }
LABEL_172:
  v6 = 0;
  v116 = 0;
  ImmersiveAppIdFromWindow = 0;
LABEL_173:
  if ( v95 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v95 + 16LL))(v95);
  v86 = v90;
  if ( v90 )
  {
    v90 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v86 + 16LL))(v86);
  }
  if ( v6 )
    ViewManagerBridge::NavigateView(*((_QWORD *)this + 64), v3, 0LL);
  return (unsigned int)ImmersiveAppIdFromWindow;
}
