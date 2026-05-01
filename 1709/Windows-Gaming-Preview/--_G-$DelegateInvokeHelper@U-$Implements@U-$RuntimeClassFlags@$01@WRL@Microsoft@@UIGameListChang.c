/*
 * XREFs of ??_G?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_b1a7fbe60b38f5be1a597c9f5fbfe299_@@$0?0PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@?$DelegateArgTraits@P8IGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@EAAJPEAUIGameListEntry@2345@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18001D480
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler::*)(Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::FtmBase>,_lambda_b1a7fbe60b38f5be1a597c9f5fbfe299_,-1,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = a1[9];
  if ( v4 )
  {
    a1[9] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)a1 + 17) = -1073741823;
  v5 = a1[5];
  if ( v5 )
  {
    a1[5] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x50uLL);
  return a1;
}
