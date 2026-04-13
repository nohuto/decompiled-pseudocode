/*
 * XREFs of ??_E?$RuntimeClass@U?$IVectorView@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@234@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18001C350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::IIterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rcx

  v4 = a1[4];
  if ( v4 < 0 )
  {
    v5 = (volatile signed __int32 *)(2 * v4);
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v5 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 32LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
