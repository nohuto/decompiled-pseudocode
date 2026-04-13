/*
 * XREFs of ?GetMany@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIAppInstallInfoRecord@ContentManagement@@PEAI@Z @ 0x18001A730
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@PEAUIAppInstallInfoRecord@ContentManagement@@V123@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@2@PEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18001C804 (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@.c)
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@@Z @ 0x18001EA5C (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0EA8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800C1147 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5)
{
  _QWORD *v5; // r12
  unsigned int v8; // esi
  unsigned int v9; // ebp
  unsigned __int64 v10; // rbx
  char *v11; // r14
  _DWORD *v12; // r13
  RTL_SRWLOCK *v13; // rcx
  unsigned __int64 v14; // rax
  char *v15; // rax
  int v16; // edi
  unsigned int v17; // eax
  unsigned int v18; // edi
  char *v19; // rbx
  unsigned int v20; // r12d
  char v21; // al
  unsigned int v22; // ebx
  unsigned int v23; // r13d
  __int64 i; // rbx
  __int64 v25; // rbx
  char *v26; // rbx
  __int64 v27; // rsi
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-80h]
  __m128i v30; // [rsp+50h] [rbp-68h]
  __m128i v31; // [rsp+50h] [rbp-68h]
  _DWORD *v32; // [rsp+60h] [rbp-58h]
  unsigned int v35; // [rsp+D0h] [rbp+18h]

  v5 = a4;
  v8 = 0;
  v9 = 0;
  v35 = 0;
  v10 = a3;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v11 = 0LL;
  v12 = (_DWORD *)(a1 + 104);
  v32 = (_DWORD *)(a1 + 104);
  v13 = (RTL_SRWLOCK *)(a1 + 112);
  SRWLock = (PSRWLOCK)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( SLODWORD(v13->Ptr) >= 0 )
      ++LODWORD(v13->Ptr);
  }
  else
  {
    AcquireSRWLockShared(v13);
  }
  if ( *(_DWORD *)(a1 + 80) )
  {
    v14 = 16 * v10;
    if ( !is_mul_ok(v10, 0x10uLL) )
      v14 = -1LL;
    v15 = (char *)operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v15;
    if ( v15 )
    {
      if ( a3 )
      {
        do
        {
          *(_QWORD *)v15 = 0LL;
          v15[8] = 0;
          v15 += 16;
          --v10;
        }
        while ( v10 );
      }
    }
    else
    {
      v11 = 0LL;
    }
    if ( !v11 )
    {
      v16 = -2147024882;
LABEL_19:
      RoOriginateError((unsigned int)v16, 0LL);
      goto LABEL_41;
    }
  }
  v17 = *(_DWORD *)(a1 + 72);
  v35 = v17;
  if ( a2 > v17 )
  {
    v16 = -2147483637;
    goto LABEL_19;
  }
  if ( *(_DWORD *)(a1 + 80) )
  {
    if ( a3 )
    {
      v18 = a2;
      v19 = v11;
      v20 = v17;
      do
      {
        if ( v18 >= v20 )
          break;
        v30 = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * v18);
        *(_QWORD *)v19 = 0LL;
        v21 = _mm_cvtsi128_si32(_mm_srli_si128(v30, 8));
        v19[8] = v21;
        if ( v21 )
        {
          *(_QWORD *)v19 = v30.m128i_i64[0];
          _InterlockedIncrement((volatile signed __int32 *)v30.m128i_i64[0]);
        }
        else
        {
          *(_QWORD *)v19 = v30.m128i_i64[0];
          if ( v30.m128i_i64[0] )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30.m128i_i64[0] + 8LL))(v30.m128i_i64[0]);
        }
        ++v9;
        ++v18;
        v19 += 16;
      }
      while ( v9 < a3 );
      v12 = v32;
      v5 = a4;
    }
    v16 = 0;
  }
  else
  {
    v16 = 0;
    if ( a3 )
    {
      v22 = a2;
      v23 = v17;
      do
      {
        if ( v22 >= v23 )
          break;
        v31 = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * v22);
        v16 = 0;
        if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v31, 8)) )
        {
          *v5 = 0LL;
          v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_18017C180 + 40LL))(
                  qword_18017C180,
                  *(unsigned int *)(v31.m128i_i64[0] + 4),
                  &GUID_82929d2b_e4ba_49a3_af91_dadf7766d476,
                  v5);
        }
        else
        {
          *v5 = v31.m128i_i64[0];
          if ( v31.m128i_i64[0] )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31.m128i_i64[0] + 8LL))(v31.m128i_i64[0]);
        }
        if ( v16 < 0 )
          break;
        ++v8;
        ++v22;
        ++v5;
      }
      while ( v8 < a3 );
      v9 = 0;
      v12 = v32;
      v5 = a4;
    }
  }
LABEL_41:
  if ( v12 )
  {
    if ( *v12 == 1 )
      --LODWORD(SRWLock->Ptr);
    else
      ReleaseSRWLockShared(SRWLock);
  }
  if ( v16 < 0 )
  {
LABEL_52:
    if ( v8 )
    {
      v25 = v8;
      do
      {
        if ( *v5 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
          *v5 = 0LL;
        }
        ++v5;
        --v25;
      }
      while ( v25 );
    }
    if ( v8 < v9 )
    {
      v26 = &v11[16 * v8];
      v27 = v9 - v8;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(v26);
        v26 += 16;
        --v27;
      }
      while ( v27 );
    }
  }
  else
  {
    if ( v9 )
    {
      for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i + a2 >= v35 )
          break;
        v16 = XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,ContentManagement::IAppInstallInfoRecord *,XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>>::ResolveDemand(
                &v11[16 * (unsigned int)i],
                &v5[i]);
        if ( v16 < 0 )
          goto LABEL_52;
        ++v8;
      }
    }
    *a5 = v8;
  }
  operator delete[](v11);
  return (unsigned int)v16;
}
