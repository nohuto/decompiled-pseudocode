/*
 * XREFs of _lambda_8eff1308be2899feafc2459a76dc307b_::operator() @ 0x18008828C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8eff1308be2899feafc2459a76dc307b__&___ptr64_::Run @ 0x180088280 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8eff1308be2899feafc2459a76dc307b__-___ptr64.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800198CC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18001BA10 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18001CF60 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800284E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002CE80 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x180092E5C (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18013BDA0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18013BDA0.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18013FB58 (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_8eff1308be2899feafc2459a76dc307b_::operator()(__int64 *a1)
{
  WCHAR *v2; // rdi
  int Application; // eax
  int v4; // ebx
  unsigned __int16 **v5; // r8
  int EnterpriseIdForWindow; // eax
  __int64 v7; // rsi
  const WCHAR **v8; // rbx
  const WCHAR *v9; // r10
  const WCHAR *v10; // r8
  __int64 v11; // rax
  const WCHAR *v12; // rcx
  int v13; // eax
  volatile int *v14; // rdx
  __int64 v15; // r10
  __int64 v16; // rcx
  volatile int *v17; // rdx
  __int64 v18; // rcx
  struct HWND__ v20[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h]
  __int64 v22; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v24; // [rsp+98h] [rbp+48h] BYREF
  struct IImmersiveApplication *v25; // [rsp+A0h] [rbp+50h] BYREF
  EdpHelpers *v26; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0LL;
  *(_QWORD *)&v20[0].unused = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( (unsigned int)EdpGetIsManaged() )
  {
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    Application = CWinRTApplicationView::GetApplication((CWinRTApplicationView *)(*a1 + 144), &v25);
    v4 = Application;
    if ( Application < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9D,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)Application);
LABEL_9:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
      goto LABEL_39;
    }
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v4 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64, GUID *, __int64 *))(*(_QWORD *)v25 + 24LL))(
           v25,
           1LL,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           &v24);
    if ( v4 < 0 || (v4 = (*(__int64 (__fastcall **)(__int64, EdpHelpers **))(*(_QWORD *)v24 + 32LL))(v24, &v26), v4 < 0) )
    {
LABEL_8:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      goto LABEL_9;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v20);
    v21 = -1LL;
    v22 = -1LL;
    EnterpriseIdForWindow = EdpHelpers::GetEnterpriseIdForWindow(v26, v20, v5);
    v4 = EnterpriseIdForWindow;
    if ( EnterpriseIdForWindow < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA4,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)EnterpriseIdForWindow);
      v2 = *(WCHAR **)&v20[0].unused;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    v2 = *(WCHAR **)&v20[0].unused;
  }
  v7 = *a1;
  AcquireSRWLockExclusive((PSRWLOCK)(v7 + 48));
  v26 = (EdpHelpers *)(v7 + 48);
  if ( !*(_BYTE *)(v7 + 56) )
    goto LABEL_34;
  v8 = (const WCHAR **)(v7 + 64);
  v9 = &word_18035ABCC;
  v10 = &word_18035ABCC;
  if ( v2 )
    v10 = v2;
  v11 = *(_QWORD *)(v7 + 72);
  v12 = *v8;
  if ( v11 == -1 )
  {
    if ( v12 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v12[v11] );
    }
    else
    {
      LODWORD(v11) = 0;
    }
  }
  if ( v12 )
    v9 = *v8;
  if ( CompareStringOrdinal(v9, v11, v10, -(v2 != 0LL), 0) == 2 )
  {
LABEL_33:
    *(_BYTE *)(v7 + 56) = 0;
LABEL_34:
    if ( v7 != -48 )
      ReleaseSRWLockExclusive((PSRWLOCK)(v7 + 48));
    v4 = 0;
    goto LABEL_37;
  }
  v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          v7 + 64,
          (__int64)v2,
          0xFFFFFFFFFFFFFFFFuLL);
  v4 = v13;
  if ( v13 >= 0 )
  {
    v24 = 0LL;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v25);
    if ( v25 )
    {
      v15 = *((_QWORD *)v25 + 6);
      v16 = v24;
      if ( v24 != v15 )
      {
        if ( v15 )
        {
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>::InternalAddRef(*((_QWORD *)v25 + 6));
          v16 = v24;
        }
        v24 = v15;
        if ( v16 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>::Release(
            v16,
            v14);
      }
    }
    Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v25);
    CApplicationViewManager::RaiseApplicationViewChanged(
      (CWinRTApplicationView *)(v24 + 136),
      (volatile signed __int64 *)v7,
      18,
      0LL);
    v18 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>::Release(
        v18,
        v17);
    }
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x100,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
    (const char *)(unsigned int)v13);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((RTL_SRWLOCK **)&v26);
LABEL_37:
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA7,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v4);
LABEL_39:
  if ( v2 )
    CoTaskMemFree(v2);
  return (unsigned int)v4;
}
