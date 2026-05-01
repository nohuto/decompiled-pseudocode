/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@_N@Z @ 0x18000C8E8
 * Callers:
 *     ?GetResults@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@5@@Z @ 0x180009034 (-GetResults@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAU-$IVectorView@.c)
 *     ?InsertAt@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x18000B3E0 (-InsertAt@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEquality.c)
 *     ?Append@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x18000B400 (-Append@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqualityPr.c)
 *     _lambda_e55ccab858df802f1f19496ef6f8fbee_::operator() @ 0x18001ADAC (_lambda_e55ccab858df802f1f19496ef6f8fbee_--operator().c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000C55C (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000C62C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000D74C (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@1@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000D7C8 (--$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@X.c)
 *     ?ResizeStorage@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18000E2A4 (-ResizeStorage@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqu.c)
 *     _invalid_parameter_noinfo @ 0x18004204C (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::InsertAtInternal(
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
  void *v12; // rcx
  const void *v13; // rdx
  size_t v14; // r8
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v19[8]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v20; // [rsp+38h] [rbp-30h] BYREF

  *(_QWORD *)&v20 = 0LL;
  BYTE8(v20) = 0;
  v7 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(&v20, a3);
  if ( v7 < 0 )
  {
    *(_QWORD *)&v20 = 0LL;
    BYTE8(v20) = 0;
    goto LABEL_34;
  }
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
    if ( *(_DWORD *)(a1 + 80) >= 0x7FFFFFFFu )
    {
      v7 = -2147024882;
      goto LABEL_29;
    }
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v19);
    v7 = 0;
    v9 = *(_DWORD *)(a1 + 84);
    if ( *(_DWORD *)(a1 + 80) + 1 > v9 )
    {
      v10 = v9 >> 1;
      if ( v9 + 1 > (v9 >> 1) + v9 )
        v10 = 1;
      v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::ResizeStorage(
             a1,
             v9 + v10);
      if ( v7 < 0 )
        goto LABEL_29;
    }
    v11 = *(_DWORD *)(a1 + 80);
    if ( a2 < v11 )
    {
      v12 = (void *)(*(_QWORD *)(a1 + 96) + 16LL * (a2 + 1));
      v13 = (const void *)(*(_QWORD *)(a1 + 96) + 16LL * a2);
      v14 = 16LL * (v11 - a2);
      if ( v14 )
      {
        if ( v12 && v13 )
        {
          if ( 16 * (unsigned __int64)(*(_DWORD *)(a1 + 84) - a2 - 1) >= v14 )
          {
            memmove(v12, v13, v14);
            goto LABEL_26;
          }
          *(_DWORD *)_o__errno(v12) = 34;
        }
        else
        {
          *(_DWORD *)_o__errno(v12) = 22;
        }
        invalid_parameter_noinfo();
        v7 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
    }
LABEL_26:
    if ( v7 >= 0 )
    {
      v15 = v20;
      v16 = *(_QWORD *)(a1 + 96);
      *(_QWORD *)&v20 = 0LL;
      BYTE8(v20) = 0;
      *(_OWORD *)(v16 + 16LL * a2) = v15;
      v17 = *(_QWORD *)(a1 + 96);
      ++*(_DWORD *)(a1 + 80);
      ++*(_DWORD *)(a1 + 128);
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v17 + 16LL * a2), 8)) )
        ++*(_DWORD *)(a1 + 88);
    }
    goto LABEL_29;
  }
  v7 = -2147483637;
  RoOriginateError(2147483659LL, 0LL);
LABEL_29:
  if ( *(_DWORD *)(a1 + 112) == 1 )
    *v8 += 0x10000000;
  else
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 120));
  if ( v7 >= 0 )
    v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
LABEL_34:
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v20);
  return (unsigned int)v7;
}
