/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@_N@Z @ 0x180067968
 * Callers:
 *     ?InsertAt@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x180065F80 (-InsertAt@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@.c)
 *     ?Append@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x180065FA0 (-Append@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf___ @ 0x180066488 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_09a62.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf__&___ptr64_ @ 0x180068848 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__ea_180068848.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180019F7C (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18001A040 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@@Z @ 0x18001BE8C (--$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$G.c)
 *     ?ResizeStorage@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18001C44C (-ResizeStorage@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Win.c)
 *     ??$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@1@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x1800686D8 (--$Construct@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Interf.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  int v7; // edi
  _DWORD *v8; // rsi
  unsigned int v9; // r8d
  int v10; // edx
  unsigned int v11; // eax
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  _BYTE v16[8]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v17; // [rsp+38h] [rbp-30h] BYREF

  *(_QWORD *)&v17 = 0LL;
  BYTE8(v17) = 0;
  v7 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>(
         &v17,
         a3);
  if ( v7 >= 0 )
  {
    v8 = (_DWORD *)(a1 + 120);
    if ( *(_DWORD *)(a1 + 112) == 1 )
    {
      if ( !*v8 )
        *v8 = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 120));
    }
    if ( a4 )
      a2 = *(_DWORD *)(a1 + 80);
    if ( a2 <= *(_DWORD *)(a1 + 80) )
    {
      if ( *(_DWORD *)(a1 + 80) < 0x7FFFFFFFu )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v16);
        v7 = 0;
        v9 = *(_DWORD *)(a1 + 84);
        if ( *(_DWORD *)(a1 + 80) + 1 <= v9 )
          goto LABEL_17;
        v10 = v9 >> 1;
        if ( v9 + 1 > (v9 >> 1) + v9 )
          v10 = 1;
        v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::ResizeStorage(
               a1,
               v9 + v10);
        if ( v7 >= 0 )
        {
LABEL_17:
          v11 = *(_DWORD *)(a1 + 80);
          if ( a2 < v11
            && memmove_s(
                 (void *const)(*(_QWORD *)(a1 + 96) + 16LL * (a2 + 1)),
                 16LL * (*(_DWORD *)(a1 + 84) - a2 - 1),
                 (const void *const)(*(_QWORD *)(a1 + 96) + 16LL * a2),
                 16LL * (v11 - a2)) )
          {
            v7 = -2147418113;
            RoOriginateError(2147549183LL, 0LL);
          }
          if ( v7 >= 0 )
          {
            v12 = v17;
            v13 = *(_QWORD *)(a1 + 96);
            *(_QWORD *)&v17 = 0LL;
            BYTE8(v17) = 0;
            *(_OWORD *)(v13 + 16LL * a2) = v12;
            v14 = *(_QWORD *)(a1 + 96);
            ++*(_DWORD *)(a1 + 80);
            ++*(_DWORD *)(a1 + 128);
            if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v14 + 16LL * a2), 8)) )
              ++*(_DWORD *)(a1 + 88);
          }
        }
      }
      else
      {
        v7 = -2147024882;
      }
    }
    else
    {
      v7 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( *(_DWORD *)(a1 + 112) == 1 )
      *v8 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 120));
    if ( v7 >= 0 )
      v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent();
  }
  else
  {
    *(_QWORD *)&v17 = 0LL;
    BYTE8(v17) = 0;
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>((__int64)&v17);
  return (unsigned int)v7;
}
