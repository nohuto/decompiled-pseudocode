/*
 * XREFs of ?GetAt@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x180065A00
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V123@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@5Collections@Foundation@8@@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@2@PEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x180066FDC (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UITargetedContentTriggerInternal@Internal@T.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __int64 v4; // r15
  _DWORD *v6; // rsi
  RTL_SRWLOCK *v7; // rbx
  int v8; // edi
  __int64 v10; // [rsp+28h] [rbp-38h] BYREF
  char v11; // [rsp+30h] [rbp-30h]
  _DWORD *v12; // [rsp+38h] [rbp-28h]
  int v13; // [rsp+40h] [rbp-20h]
  __m128i v14; // [rsp+50h] [rbp-10h]

  v4 = a2;
  *a3 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v6 = (_DWORD *)(a1 + 112);
  v12 = (_DWORD *)(a1 + 112);
  v7 = (RTL_SRWLOCK *)(a1 + 120);
  if ( *(_DWORD *)(a1 + 112) == 1 )
  {
    if ( SLODWORD(v7->Ptr) >= 0 )
      ++LODWORD(v7->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 120));
  }
  v13 = 0;
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 80) )
  {
    if ( *a3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
      *a3 = 0LL;
    }
    v14 = *(__m128i *)(*(_QWORD *)(a1 + 96) + 16 * v4);
    v11 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 8));
    if ( v11 )
    {
      v10 = v14.m128i_i64[0];
      _InterlockedIncrement((volatile signed __int32 *)v14.m128i_i64[0]);
      v6 = v12;
    }
    else
    {
      v10 = v14.m128i_i64[0];
      if ( v14.m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14.m128i_i64[0] + 8LL))(v14.m128i_i64[0]);
    }
    v8 = 0;
  }
  else
  {
    v8 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  if ( *v6 == 1 )
    --LODWORD(v7->Ptr);
  else
    ReleaseSRWLockShared(v7);
  if ( v8 >= 0 )
    return (unsigned int)XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>::ResolveDemand(
                           &v10,
                           a3);
  return (unsigned int)v8;
}
