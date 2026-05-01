/*
 * XREFs of ??_G?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_06caafa3ce990e71217b1c32e8d011ba_@@$0?0W4PopupClientPropertyChangedEventType@Popups@Shell@Internal@Windows@@@?$DelegateArgTraits@P8IPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@EAAJW4PopupClientPropertyChangedEventType@2345@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801456A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler::*)(enum Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::FtmBase>,_lambda_06caafa3ce990e71217b1c32e8d011ba_,-1,enum Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType>::`scalar deleting destructor'(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = Block[9];
  if ( v4 )
  {
    Block[9] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)Block + 17) = -1073741823;
  v5 = Block[5];
  if ( v5 )
  {
    Block[5] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
