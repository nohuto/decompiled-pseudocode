/*
 * XREFs of ?get_User@CActivatedEventArgsBase@@UEAAJPEAPEAUIUser@System@Windows@@@Z @ 0x180192CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002444C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActivatedEventArgsBase::get_User(RTL_SRWLOCK *this, struct Windows::System::IUser **a2)
{
  PVOID Ptr; // rsi
  HRESULT v6; // eax
  int ActivationFactory; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  RTL_SRWLOCK *v15; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 12, &v15);
  Ptr = this[10].Ptr;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v15);
  *a2 = 0LL;
  if ( !Ptr )
    return 0LL;
  v13 = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(L"Windows.System.Internal.UserManager", 0x23u, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    JUMPOUT(0x180192E48LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_252e7f79_acfa_4ea2_9a7e_fa27a8a4d3d9, &v13);
  v8 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v14 = 0LL;
    v9 = (**v13)(v13, &GUID_100eb64b_b24c_4c38_8964_720d926d05a4, &v14);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, PVOID, struct Windows::System::IUser **))(*(_QWORD *)v14 + 160LL))(
             v14,
             Ptr,
             a2);
      v8 = v9;
      if ( v9 >= 0 )
      {
        v8 = 0;
LABEL_12:
        v11 = v14;
        if ( v14 )
        {
          v14 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        goto LABEL_14;
      }
      v10 = 271LL;
    }
    else
    {
      v10 = 269LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x10A,
    (__int64)"onecoreuap\\shell\\lib\\activationevents\\activatedeventargsbase.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_14:
  string = 0LL;
  v12 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v12)[2])(v12);
  }
  return v8;
}
