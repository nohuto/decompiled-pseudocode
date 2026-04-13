/*
 * XREFs of ?GetAt@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x180019FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@PEAUIAppInstallInfoRecord@ContentManagement@@V123@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@2@PEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18001C804 (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::GetAt(
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
    return (unsigned int)XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,ContentManagement::IAppInstallInfoRecord *,XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>>::ResolveDemand(
                           &v13,
                           a3);
  return (unsigned int)v11;
}
