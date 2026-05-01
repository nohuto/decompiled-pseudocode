/*
 * XREFs of ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FA394
 * Callers:
 *     ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x1801133C0 (-ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?SetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@U_GUID@@@Z @ 0x1800B53DC (-SetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@U_GUID@@@Z.c)
 *     ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x1800FA95C (-_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU-$CLinkedNode@UPendingA.c)
 *     ??$PendingActivationAdd@AEA_KPEBGAEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG0@Z @ 0x1800FF0A8 (--$PendingActivationAdd@AEA_KPEBGAEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG0@Z.c)
 *     ??$DroppedPendingActivation@PEBG@ViewManagerInteropTelemetry@@SAX$$QEAPEBG@Z @ 0x1800FF188 (--$DroppedPendingActivation@PEBG@ViewManagerInteropTelemetry@@SAX$$QEAPEBG@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_09d8618cc3129835da6ee2c10407f66c___ @ 0x1800FFE70 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_09d8618cc3129835da6ee2c10407f66c___.c)
 *     ?GetUInt64@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEA_K@Z @ 0x180102078 (-GetUInt64@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall ViewEventDispatcher::QueuePendingActivation(
        ViewEventDispatcher *this,
        struct IViewWrapperInternal *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  char *v6; // rax
  char *v7; // rbx
  int v8; // edi
  __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  HRESULT v12; // eax
  int UInt64; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  HRESULT v17; // eax
  int v18; // eax
  HWND v19; // rdi
  LPVOID v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdi
  IUnknown **v23; // rax
  PSRWLOCK v24; // rcx
  __int64 *v25; // r15
  _QWORD *i; // rax
  __int64 v27; // rsi
  LPVOID v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  HSTRING v32; // rcx
  LPVOID ppv; // [rsp+38h] [rbp-59h] BYREF
  DWORD dwProcessId; // [rsp+40h] [rbp-51h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v37; // [rsp+58h] [rbp-39h] BYREF
  __int64 v38; // [rsp+60h] [rbp-31h] BYREF
  char *v39; // [rsp+68h] [rbp-29h]
  __int64 v40; // [rsp+70h] [rbp-21h]
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-19h] BYREF
  HSTRING string; // [rsp+90h] [rbp-1h] BYREF
  PSRWLOCK v43[2]; // [rsp+98h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v40 = -2LL;
  v6 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = 0LL;
    *((_QWORD *)v6 + 1) = 0LL;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  v39 = v7;
  if ( !v7 )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD6B,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_59;
  }
  *(_QWORD *)v7 = 0LL;
  v9 = (__int64 *)(v7 + 8);
  if ( *((struct Windows::Foundation::Collections::IPropertySet **)v7 + 4) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a3 + 8LL))(a3);
    v10 = *((_QWORD *)v7 + 4);
    *((_QWORD *)v7 + 4) = a3;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)v7 + 4);
  v38 = v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  *v9 = 0LL;
  string = 0LL;
  v12 = WindowsCreateStringReference(L"NavigationRequestId", 0x13u, &hstringHeader, &string);
  if ( v12 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
  UInt64 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt64(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v38,
             string,
             (unsigned __int64 *)v7 + 1);
  v8 = UInt64;
  string = 0LL;
  if ( UInt64 >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2D,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\inc\\viewmanagerinteroppropertysethelpers.h",
      (const char *)(unsigned int)UInt64);
  if ( v8 >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *, char *))(*(_QWORD *)a2 + 56LL))(a2, v7 + 16);
    v8 = v16;
    if ( v16 >= 0 )
    {
      v37 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 54) + 48LL))(*((_QWORD *)this + 54), &v37) >= 0 )
      {
        *(GUID *)v43 = GUID_NULL;
        if ( (*(int (__fastcall **)(__int64, PSRWLOCK *))(*(_QWORD *)v37 + 32LL))(v37, v43) >= 0 )
        {
          *(_OWORD *)SRWLock = *(_OWORD *)v43;
          string = 0LL;
          v17 = WindowsCreateStringReference(L"ActivationVirtualDesktopId", 0x1Au, &hstringHeader, &string);
          if ( v17 < 0 )
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
          v18 = Windows::Internal::ShellHelpers::PropertySetHelper::SetGuid(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v38,
                  string,
                  (struct _GUID *)SRWLock);
          if ( v18 < 0 )
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x40,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\inc\\viewmanagerinteroppropertysethelpers.h",
              (const char *)(unsigned int)v18);
        }
      }
      Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)this + 28, SRWLock);
      v19 = (HWND)(*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)a2 + 624LL))(a2);
      if ( SRWLock[0] )
        ReleaseSRWLockShared(SRWLock[0]);
      ppv = 0LL;
      dwProcessId = 0;
      if ( GetWindowThreadProcessId(v19, &dwProcessId)
        && CoCreateInstance(&CLSID_OSTaskCompletion, 0LL, 1u, &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558, &ppv) >= 0
        && (*(int (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)ppv + 24LL))(ppv, dwProcessId, 0x100000LL) >= 0 )
      {
        v20 = ppv;
        if ( *((LPVOID *)v7 + 3) != ppv )
        {
          if ( ppv )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
          v21 = *((_QWORD *)v7 + 3);
          *((_QWORD *)v7 + 3) = v20;
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v22 = *v9;
        v43[0] = (PSRWLOCK)this;
        (*(void (__fastcall **)(ViewEventDispatcher *))(*(_QWORD *)this + 8LL))(this);
        hstringHeader.Reserved.Reserved1 = this;
        *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = this;
        (*(void (__fastcall **)(ViewEventDispatcher *))(*(_QWORD *)this + 8LL))(this);
        *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = v22;
        LODWORD(v22) = *((_DWORD *)this + 54);
        v23 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_09d8618cc3129835da6ee2c10407f66c___(
                             SRWLock,
                             &hstringHeader);
        Windows::Internal::ComTaskPool::RunTask(3, 0, v22, 0x3E80u, *v23, 0LL);
        v24 = SRWLock[0];
        if ( SRWLock[0] )
        {
          SRWLock[0] = 0LL;
          (*((void (__fastcall **)(PSRWLOCK))v24->Ptr + 2))(v24);
        }
        if ( *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&hstringHeader.Reserved.Reserved2[8] + 16LL))(*(_QWORD *)&hstringHeader.Reserved.Reserved2[8]);
        (*(void (__fastcall **)(ViewEventDispatcher *))(*(_QWORD *)this + 16LL))(this);
      }
      wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 28, v43);
      v25 = (__int64 *)((char *)this + 488);
      for ( i = (_QWORD *)((char *)this + 488); *i; i = (_QWORD *)*i )
        ;
      *i = v7;
      ++*((_QWORD *)this + 60);
      SRWLock[0] = (PSRWLOCK)WindowsGetStringRawBuffer(*((HSTRING *)v7 + 2), 0LL);
      ViewManagerInteropTraceLogging::PendingActivationAdd<unsigned __int64 &,unsigned short const *,unsigned __int64 &>(
        v7 + 8,
        SRWLock,
        (char *)this + 480);
      v7 = 0LL;
      v39 = 0LL;
      while ( *((_QWORD *)this + 60) > 0x80uLL )
      {
        if ( this == (ViewEventDispatcher *)-488LL )
          break;
        v27 = *v25;
        if ( !*v25 )
          break;
        SRWLock[0] = (PSRWLOCK)WindowsGetStringRawBuffer(*(HSTRING *)(v27 + 16), 0LL);
        ViewManagerInteropTelemetry::DroppedPendingActivation<unsigned short const *>(SRWLock);
        ViewEventDispatcher::_QueuePendingActivationNodeForDestruction(this, v27);
      }
      if ( v43[0] )
        ReleaseSRWLockExclusive(v43[0]);
      v8 = 0;
      v28 = ppv;
      if ( ppv )
      {
        ppv = 0LL;
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v28 + 16LL))(v28);
      }
      v29 = v37;
      if ( v37 )
      {
        v37 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      goto LABEL_57;
    }
    v14 = (unsigned int)v16;
    v15 = 3447LL;
  }
  else
  {
    v14 = (unsigned int)v8;
    v15 = 3444LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)v14);
LABEL_57:
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
LABEL_59:
  if ( v7 )
  {
    v30 = *((_QWORD *)v7 + 4);
    if ( v30 )
    {
      *((_QWORD *)v7 + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    v31 = *((_QWORD *)v7 + 3);
    if ( v31 )
    {
      *((_QWORD *)v7 + 3) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v32 = (HSTRING)*((_QWORD *)v7 + 2);
    if ( v32 )
      WindowsDeleteString(v32);
    operator delete(v7);
  }
  return (unsigned int)v8;
}
