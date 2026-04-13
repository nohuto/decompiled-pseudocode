/*
 * XREFs of ?SetAt@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x180065DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180019F7C (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18001A040 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@@Z @ 0x18001BE8C (--$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$G.c)
 *     ??$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@1@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x1800686D8 (--$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Interf.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r15
  int v5; // edi
  _DWORD *v6; // rsi
  __int64 v7; // r12
  __int128 v8; // xmm6
  __int128 v10; // [rsp+40h] [rbp-21h] BYREF
  __int128 Destination; // [rsp+58h] [rbp-9h] BYREF
  __int128 v12; // [rsp+68h] [rbp+7h] BYREF
  __int64 v13; // [rsp+78h] [rbp+17h]
  int v14; // [rsp+80h] [rbp+1Fh]
  char v15; // [rsp+E0h] [rbp+7Fh] BYREF

  v3 = a2;
  *(_QWORD *)&v12 = 0LL;
  BYTE8(v12) = 0;
  *(_QWORD *)&v10 = 0LL;
  BYTE8(v10) = 0;
  v5 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>(
         &v10,
         a3);
  if ( v5 < 0 )
  {
    *(_QWORD *)&v10 = 0LL;
    BYTE8(v10) = 0;
    goto LABEL_19;
  }
  v13 = a1 + 112;
  v6 = (_DWORD *)(a1 + 120);
  if ( *(_DWORD *)(a1 + 112) == 1 )
  {
    if ( !*v6 )
      *v6 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 120));
  }
  v14 = 0;
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 80) )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v15);
    v5 = 0;
    *(_QWORD *)&Destination = 0LL;
    BYTE8(Destination) = 0;
    v7 = 16 * v3;
    if ( !memmove_s(&Destination, 0x10uLL, (const void *const)(16 * v3 + *(_QWORD *)(a1 + 96)), 0x10uLL) )
    {
      *(_OWORD *)(v7 + *(_QWORD *)(a1 + 96)) = v10;
      *(_QWORD *)&v10 = 0LL;
      BYTE8(v10) = 0;
      ++*(_DWORD *)(a1 + 128);
      v8 = Destination;
      XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>((__int64)&v12);
      v12 = v8;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v7 + *(_QWORD *)(a1 + 96)), 8)) )
        ++*(_DWORD *)(a1 + 88);
      if ( BYTE8(Destination) )
        --*(_DWORD *)(a1 + 88);
      goto LABEL_16;
    }
    v5 = -2147418113;
  }
  else
  {
    v5 = -2147483637;
  }
  RoOriginateError((unsigned int)v5, 0LL);
LABEL_16:
  if ( *(_DWORD *)(a1 + 112) == 1 )
    *v6 += 0x10000000;
  else
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 120));
LABEL_19:
  XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>((__int64)&v10);
  XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>((__int64)&v12);
  if ( v5 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent();
  return (unsigned int)v5;
}
