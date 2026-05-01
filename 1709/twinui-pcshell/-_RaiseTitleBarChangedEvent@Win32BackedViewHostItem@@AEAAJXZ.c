/*
 * XREFs of ?_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@@AEAAJXZ @ 0x1801089F0
 * Callers:
 *     ?put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z @ 0x180107D50 (-put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800605A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180061578 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UITitleBarChangedEventArgs@Holographic@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801094E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UITitleBarC.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32BackedViewHostItem::_RaiseTitleBarChangedEvent(Win32BackedViewHostItem *this)
{
  const char *v2; // r9
  UINT32 v4; // eax
  HRESULT v5; // eax
  HSTRING v6; // rsi
  char *v7; // rax
  char *v8; // rbx
  int v9; // edi
  _QWORD *v10; // rdi
  HSTRING *v11; // rdi
  HRESULT v12; // eax
  volatile signed __int64 *v13; // rcx
  char *v14; // r14
  __int64 v15; // rbx
  struct IUnknown **i; // rdi
  int v17; // eax
  int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-D0h]
  Win32BackedViewHostItem *v22; // [rsp+40h] [rbp-C8h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+60h] [rbp-A8h] BYREF
  WCHAR pString[264]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A0h] [rbp+198h]

  if ( !InternalGetWindowText(*((HWND *)this + 14), pString, 260) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1A9,
             (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
             v2);
  v4 = wcsnlen(pString, 0x104uLL);
  string = 0LL;
  if ( v4 >= 0x104 )
    v4 = 259;
  v5 = WindowsCreateStringReference(pString, v4, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    JUMPOUT(0x180108D3DLL);
  }
  v6 = string;
  v20 = 0LL;
  v7 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v10 = v7 + 16;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 16));
    *((_QWORD *)v8 + 8) = 1LL;
    *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
    *((_QWORD *)v8 + 1) = &TitleBarChangedEventArgs::`vftable'{for `IWeakReferenceSource'};
    *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v8 = &TitleBarChangedEventArgs::`vftable';
    *((_QWORD *)v8 + 1) = &TitleBarChangedEventArgs::`vftable'{for `IWeakReferenceSource'};
    *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    v11 = (HSTRING *)(v8 + 72);
    *((_QWORD *)v8 + 9) = 0LL;
    if ( v6 && v6 == *v11
      || (WindowsDeleteString(*v11), *v11 = 0LL, v12 = WindowsDuplicateString(v6, (HSTRING *)v8 + 9), v9 = v12, v12 >= 0) )
    {
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x70,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\viewhostitemeventargs.h",
        (const char *)(unsigned int)v12);
    }
    v13 = (volatile signed __int64 *)v8;
    if ( v9 >= 0 )
    {
      v9 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs,Microsoft::WRL::FtmBase>::QueryInterface(
             v8,
             &GUID_70ced100_1336_479f_801f_f19189ba7fb7,
             &v20);
      v13 = (volatile signed __int64 *)v8;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v13);
    if ( v9 >= 0 )
    {
      v14 = (char *)this + 512;
      v21 = v20;
      v22 = this;
      v15 = 0LL;
      AcquireSRWLockExclusive((PSRWLOCK)this + 65);
      if ( *((_QWORD *)this + 64) )
      {
        v15 = *(_QWORD *)v14;
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v14 + 12LL));
      }
      if ( this != (Win32BackedViewHostItem *)-520LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 65);
      if ( v15 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 12));
        for ( i = *(struct IUnknown ***)(v15 + 16); i != *(struct IUnknown ***)(v15 + 24); ++i )
        {
          v17 = ((__int64 (__fastcall *)(struct IUnknown *, Win32BackedViewHostItem *, __int64))(*i)->lpVtbl[1].QueryInterface)(
                  *i,
                  v22,
                  v21);
          v18 = v17;
          if ( v17 < 0 )
          {
            RoTransformError((unsigned int)v17, 0LL, 0LL);
            if ( v18 == -2147417848 || v18 == -2147023174 || v18 == -1996357631 )
              Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
                (__int64)this + 512,
                *i);
          }
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 24LL))(v15, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 24LL))(v15, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      v9 = 0;
      goto LABEL_39;
    }
  }
  else
  {
    v9 = -2147024882;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1AF,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v9);
LABEL_39:
  v19 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return (unsigned int)v9;
}
