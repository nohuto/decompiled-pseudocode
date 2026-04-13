/*
 * XREFs of ?SetAt@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18001A410
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18001C7EC (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18001C8B8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@@Z @ 0x18001EA5C (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 *     ??$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@PEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18001EADC (--$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV-.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r15
  signed int v5; // ebx
  _DWORD *v6; // rsi
  unsigned int v7; // r12d
  bool v8; // cf
  __int128 v9; // xmm6
  __int128 v11; // [rsp+40h] [rbp-21h] BYREF
  __int128 Destination; // [rsp+58h] [rbp-9h] BYREF
  __int128 v13; // [rsp+68h] [rbp+7h] BYREF
  __int64 v14; // [rsp+78h] [rbp+17h]
  int v15; // [rsp+80h] [rbp+1Fh]
  unsigned __int8 v16; // [rsp+E0h] [rbp+7Fh] BYREF

  v3 = a2;
  *(_QWORD *)&v13 = 0LL;
  BYTE8(v13) = 0;
  *(_QWORD *)&v11 = 0LL;
  BYTE8(v11) = 0;
  v5 = XWinRT::InterfaceLifetimeTraits::Construct<ContentManagement::IAppInstallInfoRecord>(&v11, a3);
  if ( v5 >= 0 )
  {
    v14 = a1 + 104;
    v6 = (_DWORD *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 104) == 1 )
    {
      if ( !*v6 )
        *v6 = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
    }
    v15 = 0;
    v7 = *(_DWORD *)(a1 + 72);
    v8 = (unsigned int)v3 < v7;
    if ( (unsigned int)v3 >= v7 )
    {
      RoOriginateError(2147483659LL, 0LL);
      v8 = (unsigned int)v3 < v7;
    }
    v5 = v8 ? 0 : 0x8000000B;
    if ( (unsigned int)v3 < v7 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v16, *(unsigned __int8 *)(a1 + 125), a1 + 128);
      v5 = 0;
      *(_QWORD *)&Destination = 0LL;
      BYTE8(Destination) = 0;
      if ( memmove_s(&Destination, 0x10uLL, (const void *const)(16 * v3 + *(_QWORD *)(a1 + 88)), 0x10uLL) )
      {
        v5 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v3) = v11;
        *(_QWORD *)&v11 = 0LL;
        BYTE8(v11) = 0;
        ++*(_DWORD *)(a1 + 120);
        v9 = Destination;
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(&v13);
        v13 = v9;
        if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 88) + 16 * v3), 8)) )
          ++*(_DWORD *)(a1 + 80);
        if ( BYTE8(Destination) )
          --*(_DWORD *)(a1 + 80);
      }
    }
    if ( a1 != -104 )
    {
      if ( *(_DWORD *)(a1 + 104) == 1 )
        *v6 += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 112));
    }
  }
  else
  {
    *(_QWORD *)&v11 = 0LL;
    BYTE8(v11) = 0;
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(&v11);
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(&v13);
  if ( v5 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent(
                           v16,
                           *(unsigned __int8 *)(a1 + 124),
                           a1,
                           3LL,
                           v3);
  return (unsigned int)v5;
}
