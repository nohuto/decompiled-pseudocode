/*
 * XREFs of ??$CreateAgileHelper@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAUIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@PEAPEAU34567@@Z @ 0x180144B0C
 * Callers:
 *     ?AddPopupPropertyChangedListener@ViewWrapperBase@@UEAAJPEAUIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18013EFE0 (-AddPopupPropertyChangedListener@ViewWrapperBase@@UEAAJPEAUIPopupPropertyChangedEventHandler@Pop.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler>(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // ebx
  int AgileReference; // eax
  __int64 v5; // rsi
  char *v6; // rdi
  char *v7; // rax
  char *v8; // rbx
  _QWORD *v9; // rdi
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF
  __int64 v13; // [rsp+80h] [rbp+40h]
  __int64 v14; // [rsp+88h] [rbp+48h]

  *a2 = 0LL;
  v2 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v11 = 0LL;
  if ( a1 )
  {
    AgileReference = RoGetAgileReference(0LL, &GUID_39651043_0a27_44fb_aa1f_c9b50d082ca0, a1, &v11);
    v5 = v11;
    v2 = AgileReference;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v2 >= 0 )
  {
    v11 = 0LL;
    v6 = 0LL;
    v12 = v5;
    v7 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    if ( v7 )
    {
      v9 = v7 + 8;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 8));
      *((_DWORD *)v8 + 17) = 1;
      *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler'};
      *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_QWORD *)v8 + 9) = 0LL;
      if ( v8 + 72 != (char *)&v12 )
      {
        *((_QWORD *)v8 + 9) = v5;
        v5 = 0LL;
      }
      *(_QWORD *)v8 = off_18020D288;
      *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
      v6 = v8;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v5 = v11;
    if ( v6 )
    {
      *a2 = v6;
      v2 = 0;
    }
    else
    {
      v2 = -2147024882;
    }
  }
  if ( v5 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v2;
}
