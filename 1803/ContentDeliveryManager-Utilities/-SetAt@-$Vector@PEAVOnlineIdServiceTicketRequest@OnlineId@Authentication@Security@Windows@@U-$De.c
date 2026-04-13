/*
 * XREFs of ?SetAt@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@@Z @ 0x18001B0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18001C7EC (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18001C8B8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v6; // rdi
  _DWORD *v7; // r14
  unsigned int v8; // r13d
  bool v9; // cf
  signed int v10; // esi
  __int64 Destination; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = 0LL;
  v13 = 0LL;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v7 = (_DWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !*v7 )
      *v7 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  v8 = *(_DWORD *)(a1 + 40);
  v9 = (unsigned int)v4 < v8;
  if ( (unsigned int)v4 >= v8 )
  {
    RoOriginateError(2147483659LL, 0LL);
    v9 = (unsigned int)v4 < v8;
  }
  v10 = v9 ? 0 : 0x8000000B;
  if ( (unsigned int)v4 < v8 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&Destination, *(unsigned __int8 *)(a1 + 93), a1 + 96);
    v10 = 0;
    if ( memmove_s(&Destination, 8uLL, (const void *const)(*(_QWORD *)(a1 + 56) + 8 * v4), 8uLL) )
    {
      v10 = -2147418113;
      RoOriginateError(2147549183LL, 0LL);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4) = v3;
      v3 = 0LL;
      ++*(_DWORD *)(a1 + 88);
      v6 = Destination;
      v13 = Destination;
    }
  }
  if ( a1 != -72 )
  {
    if ( *(_DWORD *)(a1 + 72) == 1 )
      *v7 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v10 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent(
                           (unsigned __int8)Destination,
                           *(unsigned __int8 *)(a1 + 92),
                           a1,
                           3LL,
                           v4);
  return (unsigned int)v10;
}
