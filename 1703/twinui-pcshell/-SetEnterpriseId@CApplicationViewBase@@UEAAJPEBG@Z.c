/*
 * XREFs of ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180082300
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ce4d9e76eff745711a6ec5f96b849fef__&___ptr64_::Run @ 0x18007E870 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ce4d9e76eff745711a6ec5f96b849fef__-___ptr64.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8a587c89195ec54d45ee4c9ce6ee342c__&___ptr64_::Run @ 0x180081100 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8a587c89195ec54d45ee4c9ce6ee342c__-___ptr64.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180038114 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180073730 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180077610 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@V_ea_180077610.c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x18007A6D0 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::SetEnterpriseId(RTL_SRWLOCK *this, const unsigned __int16 *a2)
{
  RTL_SRWLOCK *v4; // rbx
  char *Ptr; // rdx
  const WCHAR *v6; // rcx
  const WCHAR *v7; // r8
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *ViewManager; // rax
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+70h] [rbp+18h] BYREF

  wil::srwlock::lock_exclusive(this + 2, &SRWLock);
  if ( LOBYTE(this[3].Ptr) )
  {
    v4 = this + 4;
    Ptr = (char *)this[5].Ptr;
    if ( Ptr == (char *)-1LL )
    {
      if ( v4->Ptr )
      {
        do
          ++Ptr;
        while ( *((_WORD *)v4->Ptr + (_QWORD)Ptr) );
      }
      else
      {
        LODWORD(Ptr) = 0;
      }
    }
    v6 = (const WCHAR *)&unk_1801C6ABC;
    v7 = (const WCHAR *)&unk_1801C6ABC;
    if ( a2 )
      v7 = a2;
    if ( v4->Ptr )
      v6 = (const WCHAR *)v4->Ptr;
    if ( CompareStringOrdinal(v6, (int)Ptr, v7, -(a2 != 0LL), 0) != 2 )
    {
      v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
             (__int64)&this[4],
             a2,
             0xFFFFFFFFFFFFFFFFuLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xE9,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
          (const char *)(unsigned int)v8);
        goto LABEL_18;
      }
      ViewManager = ApplicationViewManagement::CGlobals::GetViewManager(&v14);
      CApplicationViewManager::RaiseApplicationViewChanged(*ViewManager + 104, (__int64)&this[-2], 0x12u, 0LL);
      v11 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v11);
      }
    }
    LOBYTE(this[3].Ptr) = 0;
  }
  v9 = 0;
LABEL_18:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v9;
}
