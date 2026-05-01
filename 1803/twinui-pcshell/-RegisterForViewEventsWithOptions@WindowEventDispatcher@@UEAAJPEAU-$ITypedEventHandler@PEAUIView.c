/*
 * XREFs of ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1801D7E10
 * Callers:
 *     ?RegisterForViewEvents@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1PEAUEventRegistrationToken@@@Z @ 0x1801D7D80 (-RegisterForViewEvents@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@Vie.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180087644 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ @ 0x180091FD8 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180149930 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$CreateRefCountedObj@UViewEventRegistration@@@@YA?AV?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@XZ @ 0x1801C66D8 (--$CreateRefCountedObj@UViewEventRegistration@@@@YA-AV-$ComPtr@V-$CRefCountedObject@UViewEventRe.c)
 *     ??$emplace_back@V?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801D1F6C (--$emplace_back@V-$com_ptr_t@V-$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_polic.c)
 */

// Hidden C++ exception states: #wind=3
__int64 WindowEventDispatcher::RegisterForViewEventsWithOptions(RTL_SRWLOCK *a1, __int64 a2, ...)
{
  RTL_SRWLOCK *v3; // rsi
  __int64 *RefCounted; // rax
  __int64 v5; // rbx
  const char *v6; // r9
  int v7; // eax
  int v8; // eax
  __int64 *v9; // r14
  int AgileReference; // edi
  __int64 v11; // rdx
  RTL_SRWLOCK *v12; // rdi
  unsigned __int64 i; // r12
  RTL_SRWLOCK *v14; // r13
  UINT32 StringLen; // r15d
  const WCHAR *StringRawBuffer; // r14
  UINT32 v17; // esi
  const WCHAR *v18; // rax
  __int64 v19; // rcx
  const char *v20; // r9
  __int64 v21; // rax
  INT32 result[2]; // [rsp+30h] [rbp-58h] BYREF
  RTL_SRWLOCK *v23; // [rsp+38h] [rbp-50h] BYREF
  __int64 v24[9]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  HSTRING v27; // [rsp+A0h] [rbp+18h] BYREF
  va_list va; // [rsp+A0h] [rbp+18h]
  HSTRING v29; // [rsp+A8h] [rbp+20h] BYREF
  va_list va1; // [rsp+A8h] [rbp+20h]
  __int64 v31; // [rsp+B0h] [rbp+28h]
  _QWORD *v32; // [rsp+B8h] [rbp+30h]
  va_list va2; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v27 = va_arg(va1, HSTRING);
  va_copy(va2, va1);
  v29 = va_arg(va2, HSTRING);
  v31 = va_arg(va2, _QWORD);
  v32 = va_arg(va2, _QWORD *);
  v24[1] = -2LL;
  v3 = a1;
  try
  {
    RefCounted = CreateRefCountedObj<ViewEventRegistration>((__int64 *)&v23);
    v5 = *RefCounted;
    *RefCounted = 0LL;
    v24[0] = v5;
    Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease((void **)&v23);
    if ( !v5 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        1170LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        v6);
    v7 = Windows::Internal::String::Initialize((HSTRING *)(v5 + 8), (HSTRING *)va);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1171LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v7);
    v8 = Windows::Internal::String::Initialize((HSTRING *)(v5 + 16), (HSTRING *)va1);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1172LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v8);
    *(_DWORD *)(v5 + 24) = v31;
    v9 = (__int64 *)(v5 + 32);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)(v5 + 32));
    AgileReference = 0;
    if ( a2 )
    {
      *(_QWORD *)result = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)result);
      AgileReference = RoGetAgileReference(0LL, &GUID_d1b9407f_a351_5319_bce5_178ee5585391, a2, result);
      if ( AgileReference >= 0 )
      {
        v11 = *v9;
        *v9 = *(_QWORD *)result;
        *(_QWORD *)result = v11;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)result);
    }
    if ( AgileReference < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1174LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)AgileReference);
    v12 = v3 + 55;
    AcquireSRWLockExclusive(v3 + 55);
    v23 = v3 + 55;
    for ( i = 0LL; ; ++i )
    {
      v14 = v3 + 49;
      if ( i >= ((char *)v3[50].Ptr - (char *)v3[49].Ptr) >> 3 )
        break;
      StringLen = WindowsGetStringLen(*(HSTRING *)(v5 + 8));
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v5 + 8), 0LL);
      v17 = WindowsGetStringLen(*(HSTRING *)(*((_QWORD *)v14->Ptr + i) + 8LL));
      v18 = WindowsGetStringRawBuffer(*(HSTRING *)(*((_QWORD *)v14->Ptr + i) + 8LL), 0LL);
      if ( CompareStringOrdinal(v18, v17, StringRawBuffer, StringLen, 1) == 2 )
      {
        if ( WindowsIsStringEmpty(*(HSTRING *)(*((_QWORD *)v14->Ptr + i) + 16LL))
          || WindowsIsStringEmpty(*(HSTRING *)(v5 + 16))
          || (v19 = *((_QWORD *)v14->Ptr + i),
              result[0] = 0,
              WindowsCompareStringOrdinal(*(HSTRING *)(v19 + 16), *(HSTRING *)(v5 + 16), result),
              !result[0]) )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1203LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)0x80070057LL);
        }
      }
      v3 = a1;
    }
    *(RTL_SRWLOCK *)(v5 + 40) = v3[48];
    ++v3[48].Ptr;
    *(_QWORD *)result = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    std::vector<wil::com_ptr_t<CRefCountedObject<ViewEventRegistration>,wil::err_exception_policy>>::emplace_back<wil::com_ptr_t<CRefCountedObject<ViewEventRegistration>,wil::err_exception_policy>>(
      (__int64 **)&v3[49],
      (__int64 *)result);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)result);
    *v32 = *(_QWORD *)(v5 + 40);
    if ( v12 )
      ReleaseSRWLockExclusive(v12);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v24);
    v21 = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4BD,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v20);
  }
  return v21;
}
