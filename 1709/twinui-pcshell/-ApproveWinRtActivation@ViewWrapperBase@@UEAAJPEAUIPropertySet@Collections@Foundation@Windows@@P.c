/*
 * XREFs of ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x18013D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180018AF4 (--$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180125704 (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ViewWrapperBase::ApproveWinRtActivation(
        unsigned __int64 this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  IUnknown *v5; // rsi
  HRESULT v6; // eax
  struct Windows::Foundation::IPropertyValue *v7; // r8
  int v8; // eax
  unsigned int v9; // r15d
  RTL_SRWLOCK **v10; // rbx
  RTL_SRWLOCK **v11; // r12
  IUnknown *v12; // rax
  IUnknown *v13; // rdi
  DWORD CurrentThreadId; // eax
  int v15; // edi
  RTL_SRWLOCK *v16; // rax
  RTL_SRWLOCK **v17; // rcx
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 *v24; // rcx
  __int64 v25; // rax
  RTL_SRWLOCK **v26; // rcx
  char v27; // [rsp+38h] [rbp-59h] BYREF
  char v28[7]; // [rsp+39h] [rbp-58h] BYREF
  RTL_SRWLOCK **v29; // [rsp+40h] [rbp-51h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v30; // [rsp+48h] [rbp-49h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp-41h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v32; // [rsp+58h] [rbp-39h]
  _QWORD v33[6]; // [rsp+60h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-1h] BYREF
  HSTRING string; // [rsp+A8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v33[2] = -2LL;
  v32 = a3;
  v5 = 0LL;
  v27 = 0;
  ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(this + 168), &SRWLock);
  v30 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a2 + 8LL))(a2);
  v27 = 0;
  string = 0LL;
  v6 = WindowsCreateStringReference(L"ApplicationMultiviewActivationPolicy", 0x24u, &hstringHeader, &string);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v8 = Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<unsigned char>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
         string,
         v7,
         (__int64)&v27);
  string = 0LL;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\inc\\viewmanagerinteroppropertysethelpers.h",
      (const char *)(unsigned int)v8);
  v9 = *(_DWORD *)(this + 276);
  if ( v9 - 4 > 1 && v9 )
  {
    if ( (*(_BYTE *)(this + 96) & 4) != 0 )
    {
      v9 = 4 - (v27 != 0);
    }
    else if ( v9 == 1 )
    {
      v9 = 2;
    }
    v10 = (RTL_SRWLOCK **)(this - 8);
    v33[3] = this - 8;
    if ( this != 8 )
      ((void (__fastcall *)(unsigned __int64))(*v10)[1].Ptr)(this - 8);
    v11 = (RTL_SRWLOCK **)(this - 8);
    v33[0] = this - 8;
    if ( this != 8 )
      ((void (__fastcall *)(unsigned __int64))(*v10)[1].Ptr)(this - 8);
    v33[1] = this - 8;
    v33[4] = 0LL;
    v12 = (IUnknown *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      v12->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
      HIDWORD(v12[1].lpVtbl) = 1;
      v12->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v13->lpVtbl = (struct IUnknownVtbl *)off_18020D350;
      v13[2].lpVtbl = 0LL;
      if ( &v13[2] != (IUnknown *)v33 )
      {
        v13[2].lpVtbl = (struct IUnknownVtbl *)v10;
        v11 = 0LL;
        v33[0] = 0LL;
      }
      v13[3].lpVtbl = (struct IUnknownVtbl *)v10;
      v5 = v13;
    }
    v33[5] = v5;
    CurrentThreadId = GetCurrentThreadId();
    v15 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0x3E80u, v5, 0LL);
    if ( v5 )
      ((void (__fastcall *)(IUnknown *))v5->lpVtbl->Release)(v5);
    if ( v11 )
      ((void (__fastcall *)(RTL_SRWLOCK **))(*v11)[2].Ptr)(v11);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x128,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v15);
      if ( this != 8 )
      {
        v16 = *v10;
        v17 = (RTL_SRWLOCK **)(this - 8);
LABEL_39:
        ((void (__fastcall *)(RTL_SRWLOCK **))v16[2].Ptr)(v17);
        goto LABEL_40;
      }
      goto LABEL_40;
    }
    if ( this != 8 )
      ((void (__fastcall *)(unsigned __int64))(*v10)[2].Ptr)(this - 8);
  }
  v29 = 0LL;
  if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, RTL_SRWLOCK ***))v32)(
         v32,
         &GUID_a8d2a90c_a403_4593_95ff_012516ae9351,
         &v29) >= 0 )
  {
    v28[0] = 0;
    v18 = ((__int64 (__fastcall *)(RTL_SRWLOCK **, char *))(*v29)[6].Ptr)(v29, v28);
    v15 = v18;
    if ( v18 < 0 )
    {
      v20 = 304LL;
      goto LABEL_37;
    }
    LOBYTE(v19) = v28[0] != 0;
    v18 = (*(__int64 (__fastcall **)(PVOID, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(this + 168) + 520LL) + 208LL))(
            *(PVOID *)(*(_QWORD *)(this + 168) + 520LL),
            *(unsigned int *)(this + 328),
            v19);
    v15 = v18;
    if ( v18 < 0 )
    {
      v20 = 305LL;
LABEL_37:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v18);
      v17 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        v16 = *v17;
        goto LABEL_39;
      }
LABEL_40:
      if ( v30 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v30 + 16LL))(v30);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      return (unsigned int)v15;
    }
  }
  v22 = *(unsigned int *)(this + 328);
  v23 = *(unsigned int *)(this + 148);
  v24 = *(__int64 **)(*(_QWORD *)(this + 168) + 520LL);
  v25 = *v24;
  if ( (_DWORD)v22 == (_DWORD)v23 )
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(v25 + 32))(v24, v23, v9);
  else
    (*(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v25 + 40))(v24, v23, v22, v9);
  *(_DWORD *)(this + 328) = 0;
  *(_DWORD *)(this + 96) |= 4u;
  v26 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    ((void (__fastcall *)(RTL_SRWLOCK **))(*v26)[2].Ptr)(v26);
  }
  if ( v30 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v30 + 16LL))(v30);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v27 )
    ViewEventDispatcher::QueuePendingActivation(
      *(ViewEventDispatcher **)(this + 168),
      (struct IViewWrapperInternal *)(this & ((unsigned __int128)-(__int128)(this - 8) >> 64)),
      a2);
  return 0LL;
}
