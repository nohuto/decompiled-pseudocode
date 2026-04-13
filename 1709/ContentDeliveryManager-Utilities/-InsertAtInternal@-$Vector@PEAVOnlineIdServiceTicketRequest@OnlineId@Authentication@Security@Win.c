/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@_N@Z @ 0x18001A110
 * Callers:
 *     ?InsertAt@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@@Z @ 0x180017360 (-InsertAt@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Win.c)
 *     ?Append@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@@Z @ 0x180017380 (-Append@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windo.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180019F7C (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18001A040 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?ResizeStorage@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18001C3F0 (-ResizeStorage@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationMode.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rbx
  _DWORD *v8; // r14
  int v9; // esi
  unsigned int v10; // r8d
  int v11; // edx
  unsigned int v12; // eax
  char v14; // [rsp+60h] [rbp+18h] BYREF

  v5 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v8 = (_DWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !*v8 )
      *v8 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( a4 )
    a2 = *(_DWORD *)(a1 + 40);
  if ( a2 <= *(_DWORD *)(a1 + 40) )
  {
    if ( *(_DWORD *)(a1 + 40) < 0x7FFFFFFFu )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v14);
      v9 = 0;
      v10 = *(_DWORD *)(a1 + 44);
      if ( *(_DWORD *)(a1 + 40) + 1 <= v10 )
        goto LABEL_17;
      v11 = v10 >> 1;
      if ( v10 + 1 > (v10 >> 1) + v10 )
        v11 = 1;
      v9 = Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::ResizeStorage(
             a1,
             v10 + v11);
      if ( v9 >= 0 )
      {
LABEL_17:
        v12 = *(_DWORD *)(a1 + 40);
        if ( a2 < v12
          && memmove_s(
               (void *const)(*(_QWORD *)(a1 + 56) + 8LL * (a2 + 1)),
               8LL * (*(_DWORD *)(a1 + 44) - a2 - 1),
               (const void *const)(*(_QWORD *)(a1 + 56) + 8LL * a2),
               8LL * (v12 - a2)) )
        {
          v9 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
        }
        if ( v9 >= 0 )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a2) = v5;
          v5 = 0LL;
          ++*(_DWORD *)(a1 + 40);
          ++*(_DWORD *)(a1 + 88);
        }
      }
    }
    else
    {
      v9 = -2147024882;
    }
  }
  else
  {
    v9 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 72) == 1 )
    *v8 += 0x10000000;
  else
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
  if ( v9 >= 0 )
    v9 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent();
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v9;
}
