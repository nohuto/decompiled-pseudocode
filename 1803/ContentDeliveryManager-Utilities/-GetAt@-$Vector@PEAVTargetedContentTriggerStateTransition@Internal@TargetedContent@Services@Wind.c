/*
 * XREFs of ?GetAt@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@@Z @ 0x18005A200
 * Callers:
 *     ?get_StateTransitions@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAU?$IVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@@Z @ 0x180059700 (-get_StateTransitions@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAA.c)
 * Callees:
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@PEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V123@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@5Collections@Foundation@8@@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@2@PEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Z @ 0x18005B868 (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UITargetedContentTriggerStateTransition@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __int64 v4; // r15
  __int64 v6; // r13
  _DWORD *v7; // r12
  RTL_SRWLOCK *v8; // rdi
  unsigned int v9; // esi
  bool v10; // cf
  signed int v11; // ebx
  __int64 v13; // [rsp+28h] [rbp-38h] BYREF
  char v14; // [rsp+30h] [rbp-30h]
  _DWORD *v15; // [rsp+38h] [rbp-28h]
  int v16; // [rsp+40h] [rbp-20h]
  __m128i v17; // [rsp+50h] [rbp-10h]

  v4 = a2;
  *a3 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v6 = a1 + 104;
  v7 = (_DWORD *)(a1 + 104);
  v15 = (_DWORD *)(a1 + 104);
  v8 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( SLODWORD(v8->Ptr) >= 0 )
      ++LODWORD(v8->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  v16 = 0;
  v9 = *(_DWORD *)(a1 + 72);
  v10 = (unsigned int)v4 < v9;
  if ( (unsigned int)v4 >= v9 )
  {
    RoOriginateError(2147483659LL, 0LL);
    v10 = (unsigned int)v4 < v9;
  }
  v11 = v10 ? 0 : 0x8000000B;
  if ( (unsigned int)v4 < v9 )
  {
    if ( *a3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
      *a3 = 0LL;
    }
    v17 = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16 * v4);
    v14 = _mm_cvtsi128_si32(_mm_srli_si128(v17, 8));
    if ( v14 )
    {
      v13 = v17.m128i_i64[0];
      _InterlockedIncrement((volatile signed __int32 *)v17.m128i_i64[0]);
      v7 = v15;
    }
    else
    {
      v13 = v17.m128i_i64[0];
      if ( v17.m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17.m128i_i64[0] + 8LL))(v17.m128i_i64[0]);
    }
    v11 = 0;
  }
  if ( v6 )
  {
    if ( *v7 == 1 )
      --LODWORD(v8->Ptr);
    else
      ReleaseSRWLockShared(v8);
  }
  if ( v11 >= 0 )
    return (unsigned int)XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition *,XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::ResolveDemand(
                           &v13,
                           a3);
  return (unsigned int)v11;
}
