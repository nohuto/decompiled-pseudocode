/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@IPEAU67895@PEAIPEAE@Z @ 0x18001CFA0
 * Callers:
 *     ?IndexOf@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@PEAIPEAE@Z @ 0x1800196D0 (-IndexOf@-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U-$.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::IndexOfInternal(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int64 *),
        unsigned int *a5,
        _BYTE *a6)
{
  int v9; // ebx
  unsigned int v10; // edi
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rsi
  bool v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF

  v18 = a1;
  v17[1] = -2LL;
  v9 = 0;
  v10 = 0;
  if ( a3 )
  {
    while ( v9 >= 0 )
    {
      v11 = *a2;
      v12 = 0;
      v9 = 0;
      if ( a4 == *a2 )
        goto LABEL_21;
      if ( a4 && v11 )
      {
        v17[0] = 0LL;
        v18 = 0LL;
        v9 = (**a4)(a4, &GUID_00000000_0000_0000_c000_000000000046, v17);
        if ( v9 < 0 )
          goto LABEL_11;
        v13 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v9 = (**v11)(v11, &GUID_00000000_0000_0000_c000_000000000046, &v18);
        if ( v9 < 0 )
        {
LABEL_11:
          v14 = v18;
        }
        else
        {
          v14 = v18;
          v12 = v17[0] == v18;
        }
        if ( v14 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        v15 = v17[0];
        if ( v17[0] )
        {
          v17[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
      else
      {
        v12 = 0;
      }
      if ( v9 >= 0 && v12 )
      {
LABEL_21:
        *a6 = 1;
        *a5 = v10;
        return (unsigned int)v9;
      }
      ++v10;
      ++a2;
      if ( v10 >= a3 )
        return (unsigned int)v9;
    }
  }
  return (unsigned int)v9;
}
