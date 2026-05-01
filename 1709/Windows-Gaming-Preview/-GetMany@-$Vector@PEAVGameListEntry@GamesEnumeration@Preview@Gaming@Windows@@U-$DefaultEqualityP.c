/*
 * XREFs of ?GetMany@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@PEAI@Z @ 0x18000B520
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@V123@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@8@@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@2@PEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000C4AC (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Ga.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000D74C (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041990 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x18004207E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        char *a4,
        unsigned int *a5)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // r15
  unsigned int v7; // edi
  unsigned int v8; // r14d
  char *v9; // r12
  _DWORD *v10; // rbx
  RTL_SRWLOCK *v11; // r13
  int v12; // esi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rax
  char *v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // esi
  char *v18; // rbx
  unsigned int v19; // edi
  unsigned int v20; // r15d
  _QWORD *v21; // r14
  unsigned int v22; // r13d
  __int64 v23; // rbx
  _QWORD *v24; // r15
  __int64 v25; // rbx
  char *v26; // rbx
  __int64 v27; // rdi
  RTL_SRWLOCK *v29; // [rsp+38h] [rbp-80h]
  __int128 v30; // [rsp+50h] [rbp-68h]
  __m128i v31; // [rsp+50h] [rbp-68h]
  _DWORD *v32; // [rsp+60h] [rbp-58h]
  unsigned int v34; // [rsp+C8h] [rbp+10h]
  unsigned int v35; // [rsp+D0h] [rbp+18h]

  v34 = a2;
  v5 = a3;
  v6 = a1;
  v7 = 0;
  v8 = 0;
  v35 = 0;
  if ( a3 )
    memset(a4, 0, 8LL * a3);
  *a5 = 0;
  v9 = 0LL;
  v10 = (_DWORD *)(v6 + 112);
  v32 = (_DWORD *)(v6 + 112);
  v11 = (RTL_SRWLOCK *)(v6 + 120);
  v29 = (RTL_SRWLOCK *)(v6 + 120);
  if ( *(_DWORD *)(v6 + 112) == 1 )
  {
    if ( SLODWORD(v11->Ptr) >= 0 )
      ++LODWORD(v11->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(v6 + 120));
  }
  v12 = 0;
  if ( *(_DWORD *)(v6 + 88) )
  {
    v13 = v5;
    v14 = 16 * v5;
    if ( !is_mul_ok(v5, 0x10uLL) )
      v14 = -1LL;
    v15 = (char *)operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v15;
    if ( v15 )
    {
      if ( (_DWORD)v5 )
      {
        do
        {
          *(_QWORD *)v15 = 0LL;
          v15[8] = 0;
          v15 += 16;
          --v13;
        }
        while ( v13 );
      }
    }
    else
    {
      v9 = 0LL;
    }
    if ( !v9 )
    {
      v12 = -2147024882;
LABEL_20:
      RoOriginateError((unsigned int)v12, 0LL);
      goto LABEL_44;
    }
    v6 = a1;
  }
  v16 = *(_DWORD *)(v6 + 80);
  v35 = v16;
  if ( v34 > v16 )
  {
    v12 = -2147483637;
    goto LABEL_20;
  }
  if ( *(_DWORD *)(v6 + 88) )
  {
    if ( (_DWORD)v5 )
    {
      v17 = v34;
      v18 = v9;
      v19 = *(_DWORD *)(v6 + 80);
      do
      {
        if ( v17 >= v19 )
          break;
        v30 = *(_OWORD *)(*(_QWORD *)(v6 + 96) + 16LL * v17);
        if ( v18 )
        {
          *(_QWORD *)v18 = 0LL;
          v18[8] = 0;
        }
        v18[8] = BYTE8(v30);
        if ( BYTE8(v30) )
        {
          *(_QWORD *)v18 = v30;
          _InterlockedIncrement((volatile signed __int32 *)v30);
        }
        else
        {
          *(_QWORD *)v18 = v30;
          if ( (_QWORD)v30 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v30 + 8LL))(v30);
        }
        ++v8;
        ++v17;
        v18 += 16;
      }
      while ( v8 < (unsigned int)v5 );
      v10 = v32;
      v7 = 0;
    }
    v12 = 0;
  }
  else if ( (_DWORD)v5 )
  {
    v20 = v34;
    v21 = a4;
    v22 = v16;
    do
    {
      if ( v20 >= v22 )
        break;
      v31 = *(__m128i *)(*(_QWORD *)(a1 + 96) + 16LL * v20);
      v12 = 0;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v31, 8)) )
      {
        *v21 = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_18005BDB8 + 40LL))(
                qword_18005BDB8,
                *(unsigned int *)(v31.m128i_i64[0] + 4),
                &GUID_735924d3_811f_4494_b69c_c641a0c61543,
                v21);
      }
      else
      {
        *v21 = v31.m128i_i64[0];
        if ( v31.m128i_i64[0] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31.m128i_i64[0] + 8LL))(v31.m128i_i64[0]);
      }
      if ( v12 < 0 )
        break;
      ++v7;
      ++v20;
      ++v21;
    }
    while ( v7 < (unsigned int)v5 );
    v10 = v32;
    v8 = 0;
    v11 = v29;
  }
LABEL_44:
  if ( *v10 == 1 )
    --LODWORD(v11->Ptr);
  else
    ReleaseSRWLockShared(v11);
  if ( v12 < 0 )
  {
    v24 = a4;
LABEL_56:
    if ( v7 )
    {
      v25 = v7;
      do
      {
        if ( *v24 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v24 + 16LL))(*v24);
          *v24 = 0LL;
        }
        ++v24;
        --v25;
      }
      while ( v25 );
    }
    if ( v7 < v8 )
    {
      v26 = &v9[16 * v7];
      v27 = v8 - v7;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(v26);
        v26 += 16;
        --v27;
      }
      while ( v27 );
    }
  }
  else
  {
    if ( v8 )
    {
      v23 = 0LL;
      if ( (_DWORD)v5 )
      {
        v24 = a4;
        do
        {
          if ( (unsigned int)v23 + v34 >= v35 )
            break;
          v12 = XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *,XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::ResolveDemand(
                  &v9[16 * (unsigned int)v23],
                  &a4[8 * v23]);
          if ( v12 < 0 )
            goto LABEL_56;
          ++v7;
          v23 = (unsigned int)(v23 + 1);
        }
        while ( (unsigned int)v23 < (unsigned int)v5 );
      }
    }
    *a5 = v7;
  }
  operator delete(v9, a2);
  return (unsigned int)v12;
}
