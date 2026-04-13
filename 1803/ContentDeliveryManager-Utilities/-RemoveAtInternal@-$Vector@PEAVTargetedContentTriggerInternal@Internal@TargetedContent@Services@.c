/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x180066380
 * Callers:
 *     ?RemoveAt@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x180064E90 (-RemoveAt@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@.c)
 *     ?RemoveAtEnd@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x180064EB0 (-RemoveAtEnd@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windo.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18001C7EC (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18001C8B8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@@Z @ 0x18001EA5C (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 *     ?ResizeStorage@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18001F138 (-ResizeStorage@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@Targeted_ea_18001F138.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  _DWORD *v6; // r15
  RTL_SRWLOCK *v7; // r14
  unsigned int v8; // esi
  bool v9; // cf
  int v10; // edi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int128 v13; // xmm6
  int v14; // ecx
  unsigned int v15; // r8d
  unsigned int v16; // edx
  __int128 v18; // [rsp+40h] [rbp-58h] BYREF
  __int64 v19; // [rsp+50h] [rbp-48h]
  int v20; // [rsp+58h] [rbp-40h]
  char v21; // [rsp+A0h] [rbp+8h] BYREF

  *(_QWORD *)&v18 = 0LL;
  BYTE8(v18) = 0;
  v6 = (_DWORD *)(a1 + 104);
  v19 = a1 + 104;
  v7 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v7->Ptr) )
      LODWORD(v7->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  v20 = 0;
  v8 = *(_DWORD *)(a1 + 72);
  if ( a3 )
    a2 = v8 - 1;
  v9 = a2 < v8;
  if ( a2 >= v8 )
  {
    RoOriginateError(2147483659LL, 0LL);
    v9 = a2 < v8;
  }
  v10 = v9 ? 0 : 0x8000000B;
  if ( a2 < v8 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v21);
    v10 = 0;
    v11 = 16LL * a2;
    v12 = *(_QWORD *)(a1 + 88);
    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v11 + v12), 8)) )
      --*(_DWORD *)(a1 + 80);
    v13 = *(_OWORD *)(v11 + v12);
    XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>((__int64)&v18);
    v18 = v13;
    v14 = *(_DWORD *)(a1 + 72);
    if ( a2 < v14 - 1
      && memmove_s(
           (void *const)(v11 + *(_QWORD *)(a1 + 88)),
           16LL * (v14 - a2 - 1),
           (const void *const)(*(_QWORD *)(a1 + 88) + 16LL * (a2 + 1)),
           16LL * (v14 - a2 - 1)) )
    {
      v10 = -2147418113;
      RoOriginateError(2147549183LL, 0LL);
    }
    else
    {
      ++*(_DWORD *)(a1 + 120);
      --*(_DWORD *)(a1 + 72);
      v15 = *(_DWORD *)(a1 + 76);
      v16 = v15 / 3;
      if ( *(_DWORD *)(a1 + 72) < v15 / 3 )
      {
        if ( v15 - 1 < v15 - v16 )
          v16 = 1;
        v10 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::ResizeStorage(
                a1,
                v15 - v16);
      }
    }
  }
  if ( v6 )
  {
    if ( *v6 == 1 )
      LODWORD(v7->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v7);
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>((__int64)&v18);
  if ( v10 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent();
  return (unsigned int)v10;
}
