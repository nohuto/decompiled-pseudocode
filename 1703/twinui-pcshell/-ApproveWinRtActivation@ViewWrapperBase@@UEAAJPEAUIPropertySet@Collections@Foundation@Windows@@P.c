/*
 * XREFs of ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x1801133C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x1800179F8 (--$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F185C (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FA394 (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_a454b71a2548c162ba69e30212a6224f___ @ 0x18011A1E8 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_a454b71a2548c162ba69e30212a6224f___.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ViewWrapperBase::ApproveWinRtActivation(
        unsigned __int64 this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  HRESULT v6; // eax
  struct Windows::Foundation::IPropertyValue *v7; // r8
  int v8; // eax
  unsigned int v9; // r14d
  RTL_SRWLOCK **v10; // rbx
  IUnknown *v11; // rdi
  DWORD CurrentThreadId; // eax
  int v13; // edi
  __int64 v14; // rcx
  RTL_SRWLOCK *v15; // rax
  RTL_SRWLOCK **v16; // rcx
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 *v23; // rcx
  __int64 v24; // rax
  RTL_SRWLOCK **v25; // rcx
  char v26; // [rsp+38h] [rbp-39h] BYREF
  char v27[7]; // [rsp+39h] [rbp-38h] BYREF
  RTL_SRWLOCK **v28; // [rsp+40h] [rbp-31h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v29; // [rsp+48h] [rbp-29h] BYREF
  __int64 v30; // [rsp+50h] [rbp-21h] BYREF
  PSRWLOCK SRWLock[3]; // [rsp+58h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-1h] BYREF
  HSTRING string; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  SRWLock[1] = (PSRWLOCK)-2LL;
  v26 = 0;
  ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(this + 144), SRWLock);
  v29 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a2 + 8LL))(a2);
  v26 = 0;
  string = 0LL;
  v6 = WindowsCreateStringReference(L"ApplicationMultiviewActivationPolicy", 0x24u, &hstringHeader, &string);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v8 = Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<unsigned char>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
         string,
         v7,
         (__int64)&v26);
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\inc\\viewmanagerinteroppropertysethelpers.h",
      (const char *)(unsigned int)v8);
  v9 = *(_DWORD *)(this + 252);
  if ( v9 - 4 > 1 && v9 )
  {
    if ( (*(_BYTE *)(this + 72) & 4) != 0 )
    {
      v9 = 4 - (v26 != 0);
    }
    else if ( v9 == 1 )
    {
      v9 = 2;
    }
    v10 = (RTL_SRWLOCK **)(this - 8);
    SRWLock[2] = (PSRWLOCK)(this - 8);
    if ( this != 8 )
      ((void (__fastcall *)(unsigned __int64))(*v10)[1].Ptr)(this - 8);
    hstringHeader.Reserved.Reserved1 = (PVOID)(this - 8);
    if ( this != 8 )
      ((void (__fastcall *)(unsigned __int64))(*v10)[1].Ptr)(this - 8);
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = this - 8;
    v11 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_a454b71a2548c162ba69e30212a6224f___(
                          &v30,
                          &hstringHeader);
    CurrentThreadId = GetCurrentThreadId();
    v13 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0x3E80u, v11, 0LL);
    v14 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( hstringHeader.Reserved.Reserved1 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)hstringHeader.Reserved.Reserved1 + 16LL))(hstringHeader.Reserved.Reserved1);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x127,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v13);
      if ( this != 8 )
      {
        v15 = *v10;
        v16 = (RTL_SRWLOCK **)(this - 8);
LABEL_33:
        ((void (__fastcall *)(RTL_SRWLOCK **))v15[2].Ptr)(v16);
        goto LABEL_34;
      }
      goto LABEL_34;
    }
    if ( this != 8 )
      ((void (__fastcall *)(unsigned __int64))(*v10)[2].Ptr)(this - 8);
  }
  v28 = 0LL;
  if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, RTL_SRWLOCK ***))a3)(
         a3,
         &GUID_a8d2a90c_a403_4593_95ff_012516ae9351,
         &v28) >= 0 )
  {
    v27[0] = 0;
    v17 = ((__int64 (__fastcall *)(RTL_SRWLOCK **, char *))(*v28)[6].Ptr)(v28, v27);
    v13 = v17;
    if ( v17 < 0 )
    {
      v19 = 303LL;
      goto LABEL_31;
    }
    LOBYTE(v18) = v27[0] != 0;
    v17 = (*(__int64 (__fastcall **)(PVOID, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(this + 144) + 448LL) + 208LL))(
            *(PVOID *)(*(_QWORD *)(this + 144) + 448LL),
            *(unsigned int *)(this + 304),
            v18);
    v13 = v17;
    if ( v17 < 0 )
    {
      v19 = 304LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v17);
      v16 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        v15 = *v16;
        goto LABEL_33;
      }
LABEL_34:
      if ( v29 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v29 + 16LL))(v29);
      if ( SRWLock[0] )
        ReleaseSRWLockExclusive(SRWLock[0]);
      return (unsigned int)v13;
    }
  }
  v21 = *(unsigned int *)(this + 304);
  v22 = *(unsigned int *)(this + 124);
  v23 = *(__int64 **)(*(_QWORD *)(this + 144) + 448LL);
  v24 = *v23;
  if ( (_DWORD)v21 == (_DWORD)v22 )
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(v24 + 32))(v23, v22, v9);
  else
    (*(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v24 + 40))(v23, v22, v21, v9);
  *(_DWORD *)(this + 304) = 0;
  *(_DWORD *)(this + 72) |= 4u;
  v25 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    ((void (__fastcall *)(RTL_SRWLOCK **))(*v25)[2].Ptr)(v25);
  }
  if ( v29 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v29 + 16LL))(v29);
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  if ( v26 )
    ViewEventDispatcher::QueuePendingActivation(
      *(ViewEventDispatcher **)(this + 144),
      (struct IViewWrapperInternal *)(this & ((unsigned __int128)-(__int128)(this - 8) >> 64)),
      a2);
  return 0LL;
}
