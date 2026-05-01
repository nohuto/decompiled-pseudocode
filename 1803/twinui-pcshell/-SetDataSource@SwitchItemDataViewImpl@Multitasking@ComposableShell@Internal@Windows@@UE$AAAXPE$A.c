/*
 * XREFs of ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x18020ECE0
 * Callers:
 *     _lambda_d4c350abf5d24183546902bae9e0768c_::operator() @ 0x180207E80 (_lambda_d4c350abf5d24183546902bae9e0768c_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAgile@@YA_NPEAUIUnknown@@@Z @ 0x180108510 (-IsAgile@@YA_NPEAUIUnknown@@@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$end@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@YA?AV?$VectorViewIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@0Platform@@PE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@012@@Z @ 0x180204D94 (--$end@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x180208BD0 (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x180208CF8 (-AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$A.c)
 *     ?ConnectToDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x18020985C (-ConnectToDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AA.c)
 *     ?CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSwitchItemListViewModel@2345@PE$AAUISwitchItemDataSource@Multitasking@4Internal@Windows@@@Z @ 0x18020A3A0 (-CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsIn.c)
 *     ?DisconnectFromDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x18020A83C (-DisconnectFromDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@.c)
 *     ?RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x18020E82C (-RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXP.c)
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x180221C38 (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SetDataSource(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  __int64 Ptr; // rcx
  __int64 v6; // rbx
  __int64 v7; // r12
  int i; // r13d
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rsi
  __int64 j; // rax
  __int64 v15; // rdi
  __int64 Instance; // [rsp+38h] [rbp-38h]
  __int64 v18; // [rsp+38h] [rbp-38h]
  __int64 v19; // [rsp+40h] [rbp-30h]
  __int64 v20; // [rsp+40h] [rbp-30h]
  __int64 v21[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h]
  char v23; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v25; // [rsp+B8h] [rbp+48h]
  struct IUnknown *v26; // [rsp+C0h] [rbp+50h] BYREF
  RTL_SRWLOCK *v27; // [rsp+C8h] [rbp+58h]

  v26 = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
  if ( a2 && !IsAgile(a2) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      77LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\switchitemdataview.h",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  AcquireSRWLockExclusive(a1 + 7);
  v27 = a1 + 7;
  Ptr = (__int64)a1[11].Ptr;
  if ( Ptr )
  {
    v25 = __abi_winrt_ptr_ctor(Ptr);
    Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DisconnectFromDataSource((__int64)a1);
    v6 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(v25);
    v7 = __abi_winrt_ptr_ctor(v6);
    __abi_winrt_ptr_dtor(v6);
    for ( i = Windows::UI::Xaml::Interop::IBindableVector::Size::get(v7); i >= 0; --i )
    {
      Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelFactory::CreateInstance(
                   v7,
                   (unsigned int)i);
      v19 = __abi_winrt_ptr_ctor(Instance);
      __abi_winrt_ptr_dtor(Instance);
      Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::RemoveSwitchItem(a1, v19);
      __abi_winrt_ptr_dtor(v19);
    }
    __abi_winrt_ptr_dtor(v7);
    __abi_winrt_ptr_dtor(v25);
  }
  if ( a2 )
  {
    Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::ConnectToDataSource(
      (__int64)a1,
      (__int64)a2);
    v9 = __abi_winrt_ptr_ctor((__int64)a1);
    v22 = __abi_winrt_ptr_ctor(v9);
    v23 = 1;
    __abi_winrt_ptr_dtor(v9);
    v10 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread((__int64)a2);
    v11 = __abi_winrt_ptr_ctor(v10);
    __abi_winrt_ptr_dtor(v10);
    v12 = __abi_winrt_ptr_ctor(v11);
    v13 = 0LL;
    Windows::Foundation::Collections::end<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>(
      v21,
      v11);
    for ( j = 0LL; j != v21[1]; j = v13 )
    {
      v20 = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelFactory::CreateInstance(
              v12,
              (unsigned int)v13);
      v15 = __abi_winrt_ptr_ctor(v20);
      __abi_winrt_ptr_dtor(v20);
      v18 = __abi_winrt_ptr_ctor(v15);
      __abi_winrt_ptr_dtor(v15);
      Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::AddSwitchItem((__int64 *)a1, v18);
      __abi_winrt_ptr_dtor(v18);
      ++v13;
    }
    __abi_winrt_ptr_dtor(v21[0]);
    __abi_winrt_ptr_dtor(v12);
    __abi_winrt_ptr_dtor(v11);
    __abi_winrt_ptr_dtor(v22);
  }
  if ( a1 != (RTL_SRWLOCK *)-56LL )
    ReleaseSRWLockExclusive(a1 + 7);
  return wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v26);
}
