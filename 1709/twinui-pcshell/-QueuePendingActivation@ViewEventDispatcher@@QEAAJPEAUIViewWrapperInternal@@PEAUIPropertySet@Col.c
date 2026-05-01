/*
 * XREFs of ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180125704
 * Callers:
 *     ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x18013D5F0 (-ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@U_GUID@@@Z @ 0x1800C970C (-SetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@U_GUID@@@Z.c)
 *     ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x180125C94 (-_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU-$CLinkedNode@UPendingA.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_09d8618cc3129835da6ee2c10407f66c___ @ 0x180129928 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_09d8618cc3129835da6ee2c10407f66c___.c)
 *     ??$PendingActivationAdd@AEA_KPEBGAEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG0@Z @ 0x180129A1C (--$PendingActivationAdd@AEA_KPEBGAEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG0@Z.c)
 *     ??$DroppedPendingActivation@PEBG@ViewManagerInteropTelemetry@@SAX$$QEAPEBG@Z @ 0x180129AFC (--$DroppedPendingActivation@PEBG@ViewManagerInteropTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?GetUInt64@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEA_K@Z @ 0x18012C82C (-GetUInt64@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
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
  int v23; // edx
  int v24; // ecx
  int v25; // r9d
  __int64 *v26; // r12
  _QWORD *i; // rax
  __int64 v28; // rdi
  LPVOID v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  HSTRING v33; // rcx
  int ppv; // [rsp+28h] [rbp-89h]
  LPVOID v36; // [rsp+38h] [rbp-79h] BYREF
  DWORD dwProcessId; // [rsp+40h] [rbp-71h] BYREF
  __int64 v38; // [rsp+48h] [rbp-69h] BYREF
  __int64 v39; // [rsp+50h] [rbp-61h] BYREF
  PCWSTR v40[2]; // [rsp+58h] [rbp-59h] BYREF
  struct _GUID v41; // [rsp+68h] [rbp-49h] BYREF
  __int64 v42; // [rsp+78h] [rbp-39h]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-29h] BYREF
  HSTRING string; // [rsp+A0h] [rbp-11h] BYREF
  HSTRING_HEADER v45; // [rsp+A8h] [rbp-9h] BYREF
  HSTRING v46; // [rsp+C0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v42 = -2LL;
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
  v40[0] = (PCWSTR)v7;
  if ( !v7 )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDED,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_57;
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
  v39 = v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  *v9 = 0LL;
  string = 0LL;
  v12 = WindowsCreateStringReference(L"NavigationRequestId", 0x13u, &hstringHeader, &string);
  if ( v12 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
  UInt64 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt64(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v39,
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
      v38 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 63) + 48LL))(*((_QWORD *)this + 63), &v38) >= 0 )
      {
        *(GUID *)&hstringHeader.Reserved.Reserved1 = GUID_NULL;
        if ( (*(int (__fastcall **)(__int64, HSTRING_HEADER *))(*(_QWORD *)v38 + 32LL))(v38, &hstringHeader) >= 0 )
        {
          v41 = *(struct _GUID *)&hstringHeader.Reserved.Reserved1;
          v46 = 0LL;
          v17 = WindowsCreateStringReference(L"ActivationVirtualDesktopId", 0x1Au, &v45, &v46);
          if ( v17 < 0 )
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
          v18 = Windows::Internal::ShellHelpers::PropertySetHelper::SetGuid(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v39,
                  v46,
                  &v41);
          if ( v18 < 0 )
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x40,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\inc\\viewmanagerinteroppropertysethelpers.h",
              (const char *)(unsigned int)v18);
        }
      }
      AcquireSRWLockShared((PSRWLOCK)this + 37);
      *(_QWORD *)&v41.Data1 = (char *)this + 296;
      v19 = (HWND)(*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)a2 + 624LL))(a2);
      if ( this != (ViewEventDispatcher *)-296LL )
        ReleaseSRWLockShared((PSRWLOCK)this + 37);
      v36 = 0LL;
      dwProcessId = 0;
      if ( GetWindowThreadProcessId(v19, &dwProcessId)
        && CoCreateInstance(&CLSID_OSTaskCompletion, 0LL, 1u, &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558, &v36) >= 0
        && (*(int (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)v36 + 24LL))(v36, dwProcessId, 0x100000LL) >= 0 )
      {
        v20 = v36;
        if ( *((LPVOID *)v7 + 3) != v36 )
        {
          if ( v36 )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v36 + 8LL))(v36);
          v21 = *((_QWORD *)v7 + 3);
          *((_QWORD *)v7 + 3) = v20;
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v22 = *v9;
        *(_QWORD *)&v41.Data1 = this;
        (*(void (__fastcall **)(ViewEventDispatcher *))(*(_QWORD *)this + 8LL))(this);
        hstringHeader.Reserved.Reserved1 = this;
        *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = this;
        (*(void (__fastcall **)(ViewEventDispatcher *))(*(_QWORD *)this + 8LL))(this);
        *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = v22;
        Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_09d8618cc3129835da6ee2c10407f66c___(
          v24,
          v23,
          *((_DWORD *)this + 72),
          v25,
          ppv,
          (__int64)&hstringHeader);
        if ( *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&hstringHeader.Reserved.Reserved2[8] + 16LL))(*(_QWORD *)&hstringHeader.Reserved.Reserved2[8]);
        (*(void (__fastcall **)(ViewEventDispatcher *))(*(_QWORD *)this + 16LL))(this);
      }
      AcquireSRWLockExclusive((PSRWLOCK)this + 37);
      hstringHeader.Reserved.Reserved1 = (char *)this + 296;
      v26 = (__int64 *)((char *)this + 560);
      for ( i = (_QWORD *)((char *)this + 560); *i; i = (_QWORD *)*i )
        ;
      *i = v7;
      ++*((_QWORD *)this + 69);
      v40[0] = WindowsGetStringRawBuffer(*((HSTRING *)v7 + 2), 0LL);
      ViewManagerInteropTraceLogging::PendingActivationAdd<unsigned __int64 &,unsigned short const *,unsigned __int64 &>(
        v7 + 8,
        v40,
        (char *)this + 552);
      v7 = 0LL;
      v40[0] = 0LL;
      while ( *((_QWORD *)this + 69) > 0x80uLL )
      {
        if ( this == (ViewEventDispatcher *)-560LL )
          break;
        v28 = *v26;
        if ( !*v26 )
          break;
        *(_QWORD *)&v41.Data1 = WindowsGetStringRawBuffer(*(HSTRING *)(v28 + 16), 0LL);
        ViewManagerInteropTelemetry::DroppedPendingActivation<unsigned short const *>(&v41);
        ViewEventDispatcher::_QueuePendingActivationNodeForDestruction(this, v28);
      }
      if ( this != (ViewEventDispatcher *)-296LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 37);
      v8 = 0;
      v29 = v36;
      if ( v36 )
      {
        v36 = 0LL;
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v29 + 16LL))(v29);
      }
      v30 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      goto LABEL_55;
    }
    v14 = (unsigned int)v16;
    v15 = 3577LL;
  }
  else
  {
    v14 = (unsigned int)v8;
    v15 = 3574LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)v14);
LABEL_55:
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
LABEL_57:
  if ( v7 )
  {
    v31 = *((_QWORD *)v7 + 4);
    if ( v31 )
    {
      *((_QWORD *)v7 + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v32 = *((_QWORD *)v7 + 3);
    if ( v32 )
    {
      *((_QWORD *)v7 + 3) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    v33 = (HSTRING)*((_QWORD *)v7 + 2);
    if ( v33 )
      WindowsDeleteString(v33);
    operator delete(v7);
  }
  return (unsigned int)v8;
}
