/*
 * XREFs of ?GetEventRegistration@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@PEBG0@Z @ 0x1801D59B0
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D3130 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D3DE0 (-AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Inter.c)
 *     ?AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D48E0 (-AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChange.c)
 *     ?GetSharedListener@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@3@0@Z @ 0x1801D5E18 (-GetSharedListener@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@V-$CRefCountedObject@UViewEventRegi.c)
 *     ?OverrideNavigationLevelForView@WindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1801D6B10 (-OverrideNavigationLevelForView@WindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@.c)
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1801D9DD0 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 */

__int64 *__fastcall WindowEventDispatcher::GetEventRegistration(
        __int64 a1,
        __int64 *a2,
        const WCHAR *a3,
        const WCHAR *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rsi
  char v11; // r15
  UINT32 StringLen; // edi
  const WCHAR *StringRawBuffer; // rax
  UINT32 v14; // edi
  const WCHAR *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0LL;
  v5 = *(_QWORD *)(a1 + 416);
  v6 = 0LL;
  v20 = 0LL;
  v7 = 0LL;
  if ( !((*(_QWORD *)(a1 + 424) - v5) >> 3) )
    goto LABEL_19;
  while ( !WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(v5 + 8 * v7) + 8LL)) || v6 )
  {
    v11 = 0;
    StringLen = WindowsGetStringLen(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 416) + 8 * v7) + 8LL));
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 416) + 8 * v7) + 8LL), 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, StringLen, a3, -1, 1) == 2 )
      goto LABEL_6;
LABEL_13:
    v5 = *(_QWORD *)(a1 + 416);
    if ( ++v7 >= (unsigned __int64)((*(_QWORD *)(a1 + 424) - v5) >> 3) )
      goto LABEL_19;
  }
  v11 = 1;
LABEL_6:
  if ( !WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 416) + 8 * v7) + 16LL)) )
  {
    v14 = WindowsGetStringLen(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 416) + 8 * v7) + 16LL));
    v15 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 416) + 8 * v7) + 16LL), 0LL);
    if ( CompareStringOrdinal(v15, v14, a4, -1, 0) != 2 )
      goto LABEL_13;
  }
  if ( v11 )
  {
    v16 = v6;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 8 * v7);
    v20 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    goto LABEL_13;
  }
  v17 = *a2;
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 8 * v7);
  *a2 = v18;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
LABEL_19:
  if ( !*a2 )
  {
    *a2 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v20);
  return a2;
}
