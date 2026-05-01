/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler::_)(enum_Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::FtmBase___lambda_06caafa3ce990e71217b1c32e8d011ba___1_enum_Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType_::Invoke @ 0x180144D80
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18001D5BC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler::___enum_Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::FtmBase___lambda_06caafa3ce990e71217b1c32e8d011ba___1_enum_Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType_::Invoke(
        __int64 a1,
        unsigned int a2)
{
  __int64 v2; // r9
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 72);
  v4 = 0LL;
  v9 = 0LL;
  if ( !v2
    || (v5 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
               v2,
               &GUID_39651043_0a27_44fb_aa1f_c9b50d082ca0,
               &v9),
        v4 = v9,
        v6 = v5,
        v5 >= 0) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, a2);
    v4 = v9;
    v6 = v7;
  }
  if ( v4 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v6 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v6);
  return (unsigned int)v6;
}
