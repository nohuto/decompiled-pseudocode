/*
 * XREFs of ?IndexOf@?$SimpleVectorView@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@V?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@PEAIPEAE@Z @ 0x18001E0E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,XWinRT::IntVersionTag,0>::IndexOf(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _BYTE *a4)
{
  int v6; // ebx
  _DWORD *v8; // r15
  int v9; // eax

  *a3 = 0;
  *a4 = 0;
  v6 = *(_DWORD *)(a1 + 48);
  v8 = *(_DWORD **)(a1 + 40);
  if ( v6 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 72LL))(*(_QWORD *)(a1 + 40));
    v6 = v9;
    if ( *(_DWORD *)(a1 + 52) != v8[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v9 < 0 )
      {
        RoTransformError((unsigned int)v9, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        *a3 = 0;
        *a4 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v6, 0LL);
  }
  return (unsigned int)v6;
}
