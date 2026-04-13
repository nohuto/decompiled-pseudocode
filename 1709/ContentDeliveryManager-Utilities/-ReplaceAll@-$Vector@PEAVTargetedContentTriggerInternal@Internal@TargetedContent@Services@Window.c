/*
 * XREFs of ?ReplaceAll@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x180066310
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180019F7C (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18001A040 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@@Z @ 0x18001BE8C (--$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$G.c)
 *     ??$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@1@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x1800686D8 (--$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Interf.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __m128i *v3; // rsi
  unsigned int v5; // r14d
  int v6; // r13d
  int v9; // ebx
  __int64 v10; // rbp
  __m128i *v11; // r15
  _DWORD *v12; // rbx
  unsigned int v13; // eax
  __m128i *v14; // rax
  __int64 v15; // r14
  char v17; // [rsp+78h] [rbp+20h] BYREF

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
      v9 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>(
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
    v12 = (_DWORD *)(a1 + 120);
    if ( *(_DWORD *)(a1 + 112) == 1 )
    {
      if ( !*v12 )
        *v12 = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 120));
    }
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v17);
    v13 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = v10;
    v10 = v13;
    *(_DWORD *)(a1 + 84) = v5;
    *(_DWORD *)(a1 + 88) = v6;
    v14 = *(__m128i **)(a1 + 96);
    *(_QWORD *)(a1 + 96) = v3;
    v3 = v14;
    ++*(_DWORD *)(a1 + 128);
    if ( *(_DWORD *)(a1 + 112) == 1 )
      *v12 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 120));
    v9 = 0;
  }
  if ( v3 )
  {
    if ( (_DWORD)v10 )
    {
      v15 = (__int64)v3;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>(v15);
        v15 += 16LL;
        --v10;
      }
      while ( v10 );
    }
    free(v3);
  }
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent();
  return (unsigned int)v9;
}
