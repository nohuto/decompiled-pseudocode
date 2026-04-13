/*
 * XREFs of ?Clear@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x180017ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180019F7C (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18001A040 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@@Z @ 0x18001BE8C (--$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$G.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::Clear(
        __int64 a1)
{
  unsigned int v2; // ebx
  RTL_SRWLOCK *v3; // rsi
  __int64 v4; // rbp
  char *v5; // r14
  char *v6; // rsi
  __int64 v7; // r15
  unsigned __int8 v9; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (RTL_SRWLOCK *)(a1 + 120);
  if ( *(_DWORD *)(a1 + 112) == 1 )
  {
    if ( !LODWORD(v3->Ptr) )
      LODWORD(v3->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 120));
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v9, *(unsigned __int8 *)(a1 + 133), a1 + 136);
  v4 = *(unsigned int *)(a1 + 80);
  v5 = *(char **)(a1 + 96);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  ++*(_DWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( *(_DWORD *)(a1 + 112) == 1 )
    LODWORD(v3->Ptr) += 0x10000000;
  else
    ReleaseSRWLockExclusive(v3);
  if ( v5 )
  {
    if ( (_DWORD)v4 )
    {
      v6 = v5;
      v7 = v4;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>(v6);
        v6 += 16;
        --v7;
      }
      while ( v7 );
    }
    free(v5);
  }
  if ( (_DWORD)v4 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent(
                           v9,
                           *(unsigned __int8 *)(a1 + 132),
                           a1,
                           0LL,
                           0);
  return v2;
}
