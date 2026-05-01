/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler::_)(enum_Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::FtmBase___lambda_711e41318d04ff5ee814b2cee9c4875d___1_enum_Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType_::Invoke @ 0x1801E5CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18018D5D8 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler::___enum_Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::FtmBase___lambda_711e41318d04ff5ee814b2cee9c4875d___1_enum_Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType_::Invoke(
        __int64 a1,
        unsigned int a2)
{
  signed int v3; // ebx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v3 = Microsoft::WRL::AgileRef::InternalResolve(
         (Microsoft::WRL::AgileRef *)(a1 + 64),
         &GUID_39651043_0a27_44fb_aa1f_c9b50d082ca0,
         &v5);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v3);
  return (unsigned int)v3;
}
