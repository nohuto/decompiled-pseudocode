/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$IEventHandler@PEAVUserProfileEventArgs@Internal@System@Windows@@@Foundation@Windows@@V_lambda_534a6f120349d7091033bbf6854946a9_@@$0?0PEAUIInspectable@@PEAUIUserProfileEventArgs@Internal@System@3@@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@PEAVUserProfileEventArgs@Internal@System@Windows@@PEAUIUserProfileEventArgs@234@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUIUserProfileEventArgs@Internal@System@3@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800600F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::System::Internal::UserProfileEventArgs *,Windows::System::Internal::IUserProfileEventArgs *>>::*)(IInspectable *,Windows::System::Internal::IUserProfileEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::IEventHandler<Windows::System::Internal::UserProfileEventArgs *>,_lambda_534a6f120349d7091033bbf6854946a9_,-1,IInspectable *,Windows::System::Internal::IUserProfileEventArgs *>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
