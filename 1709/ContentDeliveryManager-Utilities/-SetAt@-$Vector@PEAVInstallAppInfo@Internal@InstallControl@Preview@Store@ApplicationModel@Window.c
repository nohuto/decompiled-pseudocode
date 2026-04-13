/*
 * XREFs of ?SetAt@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@@Z @ 0x180017200
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180019F7C (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18001A040 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v6; // rdi
  _DWORD *v7; // r14
  int v8; // ebp
  __int64 Destination; // [rsp+90h] [rbp+18h] BYREF
  __int64 v11; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = 0LL;
  v11 = 0LL;
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
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 40) )
  {
    v8 = -2147483637;
LABEL_11:
    RoOriginateError((unsigned int)v8, 0LL);
    goto LABEL_13;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&Destination, *(unsigned __int8 *)(a1 + 93), a1 + 96);
  v8 = 0;
  if ( memmove_s(&Destination, 8uLL, (const void *const)(*(_QWORD *)(a1 + 56) + 8 * v4), 8uLL) )
  {
    v8 = -2147418113;
    goto LABEL_11;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4) = v3;
  v3 = 0LL;
  ++*(_DWORD *)(a1 + 88);
  v6 = Destination;
  v11 = Destination;
LABEL_13:
  if ( *(_DWORD *)(a1 + 72) == 1 )
    *v7 += 0x10000000;
  else
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent(
                           (unsigned __int8)Destination,
                           *(unsigned __int8 *)(a1 + 92),
                           a1,
                           3LL,
                           v4);
  return (unsigned int)v8;
}
