/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18001A7AC
 * Callers:
 *     ?RemoveAt@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x180017EA0 (-RemoveAt@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVA.c)
 *     ?RemoveAtEnd@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x180017EC0 (-RemoveAtEnd@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PE.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180019F7C (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18001A040 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@@Z @ 0x18001BE8C (--$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$G.c)
 *     ?ResizeStorage@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18001C44C (-ResizeStorage@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Win.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  _DWORD *v6; // r14
  RTL_SRWLOCK *v7; // rsi
  int v8; // edi
  __int64 v9; // r15
  __int64 v10; // rcx
  __int128 v11; // xmm6
  int v12; // ecx
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int128 v16; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h]
  int v18; // [rsp+58h] [rbp-30h]
  char v19; // [rsp+90h] [rbp+8h] BYREF

  *(_QWORD *)&v16 = 0LL;
  BYTE8(v16) = 0;
  v6 = (_DWORD *)(a1 + 112);
  v17 = a1 + 112;
  v7 = (RTL_SRWLOCK *)(a1 + 120);
  if ( *(_DWORD *)(a1 + 112) == 1 )
  {
    if ( !LODWORD(v7->Ptr) )
      LODWORD(v7->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 120));
  }
  v18 = 0;
  if ( a3 )
    a2 = *(_DWORD *)(a1 + 80) - 1;
  if ( a2 >= *(_DWORD *)(a1 + 80) )
  {
    v8 = -2147483637;
LABEL_14:
    RoOriginateError((unsigned int)v8, 0LL);
    goto LABEL_19;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v19);
  v8 = 0;
  v9 = 16LL * a2;
  v10 = *(_QWORD *)(a1 + 96);
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v9 + v10), 8)) )
    --*(_DWORD *)(a1 + 88);
  v11 = *(_OWORD *)(v9 + v10);
  XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>(&v16);
  v16 = v11;
  v12 = *(_DWORD *)(a1 + 80);
  if ( a2 < v12 - 1
    && memmove_s(
         (void *const)(v9 + *(_QWORD *)(a1 + 96)),
         16LL * (v12 - a2 - 1),
         (const void *const)(*(_QWORD *)(a1 + 96) + 16LL * (a2 + 1)),
         16LL * (v12 - a2 - 1)) )
  {
    v8 = -2147418113;
    goto LABEL_14;
  }
  ++*(_DWORD *)(a1 + 128);
  --*(_DWORD *)(a1 + 80);
  v13 = *(_DWORD *)(a1 + 84);
  if ( *(_DWORD *)(a1 + 80) < v13 / 3 )
  {
    v14 = v13 - v13 / 3;
    if ( v13 - 1 < (unsigned int)v14 )
      v14 = v13 - 1;
    v8 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::ResizeStorage(
           a1,
           v14);
  }
LABEL_19:
  if ( *v6 == 1 )
    LODWORD(v7->Ptr) += 0x10000000;
  else
    ReleaseSRWLockExclusive(v7);
  XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>(&v16);
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent();
  return (unsigned int)v8;
}
