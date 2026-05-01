/*
 * XREFs of ?RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1801BBF18
 * Callers:
 *     ?FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@ApplicationModel@Windows@@@Z @ 0x1801BA300 (-FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@Applicat.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180060610 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1801BCB50 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemTray::TrayInfoTipAppInfo::RuntimeClassInitialize(
        SystemTray::TrayInfoTipAppInfo *this,
        HSTRING a2)
{
  HSTRING *v4; // rbx
  HRESULT v5; // edi
  __int64 v6; // rdx
  HSTRING v8; // rbp
  volatile signed __int64 *v9; // rcx
  char *v10; // rax
  char *v11; // rbx
  _QWORD *v12; // rdi
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (HSTRING *)((char *)this + 72);
  if ( !a2 || a2 != *v4 )
  {
    WindowsDeleteString(*v4);
    *v4 = 0LL;
    v5 = WindowsDuplicateString(a2, v4);
    if ( v5 < 0 )
    {
      v6 = 15LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipappinfo.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  v8 = *v4;
  v9 = (volatile signed __int64 *)*((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(v9);
  *((_QWORD *)this + 10) = 0LL;
  v10 = (char *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( !v10 )
  {
    v5 = -2147024882;
LABEL_20:
    v6 = 16LL;
    goto LABEL_5;
  }
  v12 = v10 + 24;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v10 + 24));
  *((_QWORD *)v11 + 9) = 1LL;
  *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::ApplicationModel::IAppDisplayInfo'};
  *((_QWORD *)v11 + 1) = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v11 + 2) = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo'};
  *v12 = &SystemTray::TrayInfoTipDisplayInfo::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v11 = &SystemTray::TrayInfoTipDisplayInfo::`vftable'{for `Windows::ApplicationModel::IAppDisplayInfo'};
  *((_QWORD *)v11 + 1) = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v11 + 2) = &SystemTray::TrayInfoTipDisplayInfo::`vftable'{for `Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo'};
  *v12 = &SystemTray::TrayInfoTipDisplayInfo::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v11 + 10) = 0LL;
  *((_QWORD *)v11 + 11) = 0LL;
  *((_QWORD *)v11 + 12) = 0LL;
  v11[104] = 0;
  v5 = SystemTray::TrayInfoTipDisplayInfo::RuntimeClassInitialize((SystemTray::TrayInfoTipDisplayInfo *)v11, v8);
  if ( v5 >= 0 )
  {
    v13 = *((_QWORD *)v11 + 9);
    while ( v13 >= 0 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 9, v13 + 1, v13);
      if ( v14 == v13 )
        goto LABEL_18;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 16));
LABEL_18:
    *((_QWORD *)this + 10) = v11;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v11);
    v5 = 0;
  }
  else
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v11);
  }
  if ( v5 < 0 )
    goto LABEL_20;
  return 0LL;
}
