/*
 * XREFs of ??0?$GitInvokeHelper@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x1801B59C0
 * Callers:
 *     ??$CreateGitHelper@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@2@PEAPEAU342@@Z @ 0x1801B4C6C (--$CreateGitHelper@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Intern_ea_1801B4C6C.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002BE80 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>>,2>::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>>,2>(
        __int64 a1)
{
  _QWORD *v2; // rdi
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  *(_DWORD *)(a1 + 44) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>>,2>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  result = a1;
  *(_QWORD *)(a1 + 48) = 0LL;
  return result;
}
