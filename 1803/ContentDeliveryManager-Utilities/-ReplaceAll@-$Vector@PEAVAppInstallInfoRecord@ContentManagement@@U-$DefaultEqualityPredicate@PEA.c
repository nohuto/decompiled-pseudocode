/*
 * XREFs of ?ReplaceAll@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18001AA60
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18001C7EC (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18001C8B8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@@Z @ 0x18001EA5C (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 *     ??$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@PEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18001EADC (--$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __m128i *v3; // rdi
  unsigned int v5; // r12d
  int v6; // r13d
  int v9; // ebx
  __int64 v10; // rbp
  __m128i *v11; // rsi
  _DWORD *v12; // rsi
  unsigned int v13; // eax
  __m128i *v14; // rax
  __m128i *v15; // rsi
  unsigned __int8 v17; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    v3 = (__m128i *)malloc(16LL * a2);
    if ( !v3 )
      return (unsigned int)-2147024882;
    v5 = a2;
  }
  v10 = 0LL;
  if ( v5 )
  {
    v11 = v3;
    while ( 1 )
    {
      v9 = XWinRT::InterfaceLifetimeTraits::Construct<ContentManagement::IAppInstallInfoRecord>(
             &v3[(unsigned int)v10],
             *a3);
      if ( v9 < 0 )
        break;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*v11, 8)) )
        ++v6;
      v10 = (unsigned int)(v10 + 1);
      ++a3;
      ++v11;
      if ( (unsigned int)v10 >= v5 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v12 = (_DWORD *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 104) == 1 )
    {
      if ( !*v12 )
        *v12 = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
    }
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v17, *(unsigned __int8 *)(a1 + 125), a1 + 128);
    v13 = *(_DWORD *)(a1 + 72);
    v9 = 0;
    *(_DWORD *)(a1 + 72) = v10;
    v10 = v13;
    *(_DWORD *)(a1 + 76) = v5;
    *(_DWORD *)(a1 + 80) = v6;
    v14 = *(__m128i **)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v3;
    v3 = v14;
    ++*(_DWORD *)(a1 + 120);
    if ( a1 != -104 )
    {
      if ( *(_DWORD *)(a1 + 104) == 1 )
        *v12 += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 112));
    }
  }
  if ( v3 )
  {
    if ( (_DWORD)v10 )
    {
      v15 = v3;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(v15++);
        --v10;
      }
      while ( v10 );
    }
    free(v3);
  }
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent(
                           v17,
                           *(unsigned __int8 *)(a1 + 124),
                           a1,
                           0LL,
                           0);
  return (unsigned int)v9;
}
