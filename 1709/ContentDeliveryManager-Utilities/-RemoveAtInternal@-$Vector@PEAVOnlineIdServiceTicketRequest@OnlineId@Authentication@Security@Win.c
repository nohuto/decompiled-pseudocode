/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18001ACC8
 * Callers:
 *     ?RemoveAt@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x180018A60 (-RemoveAt@-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U-.c)
 *     ?RemoveAtEnd@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x180018A70 (-RemoveAtEnd@-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180019F7C (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18001A040 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?ResizeStorage@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18001C3F0 (-ResizeStorage@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationMode.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  __int64 v6; // rbx
  RTL_SRWLOCK *v7; // r14
  int v8; // esi
  __int64 v9; // r9
  __int64 *v10; // rcx
  int v11; // edx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  char v15; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !LODWORD(v7->Ptr) )
      LODWORD(v7->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( a3 )
    a2 = *(_DWORD *)(a1 + 40) - 1;
  if ( a2 >= *(_DWORD *)(a1 + 40) )
  {
    v8 = -2147483637;
LABEL_12:
    RoOriginateError((unsigned int)v8, 0LL);
    goto LABEL_17;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v15);
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 56);
  v10 = (__int64 *)(v9 + 8LL * a2);
  v6 = *v10;
  v11 = *(_DWORD *)(a1 + 40);
  if ( a2 < v11 - 1
    && memmove_s(v10, 8LL * (v11 - a2 - 1), (const void *const)(v9 + 8LL * (a2 + 1)), 8LL * (v11 - a2 - 1)) )
  {
    v8 = -2147418113;
    goto LABEL_12;
  }
  ++*(_DWORD *)(a1 + 88);
  --*(_DWORD *)(a1 + 40);
  v12 = *(_DWORD *)(a1 + 44);
  if ( *(_DWORD *)(a1 + 40) < v12 / 3 )
  {
    v13 = v12 - v12 / 3;
    if ( v12 - 1 < (unsigned int)v13 )
      v13 = v12 - 1;
    v8 = Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::ResizeStorage(
           a1,
           v13);
  }
LABEL_17:
  if ( *(_DWORD *)(a1 + 72) == 1 )
    LODWORD(v7->Ptr) += 0x10000000;
  else
    ReleaseSRWLockExclusive(v7);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent();
  return (unsigned int)v8;
}
