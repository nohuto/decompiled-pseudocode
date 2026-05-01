/*
 * XREFs of ?SetAt@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x18000B210
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000C55C (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000C62C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000D74C (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@1@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000D7C8 (--$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@X.c)
 *     _invalid_parameter_noinfo @ 0x18004204C (_invalid_parameter_noinfo.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r12
  int v5; // edi
  _DWORD *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r15
  const void *v9; // rdx
  __int128 v10; // xmm6
  __int128 v12; // [rsp+40h] [rbp-21h] BYREF
  __int128 v13; // [rsp+58h] [rbp-9h] BYREF
  __int128 v14; // [rsp+68h] [rbp+7h] BYREF
  __int64 v15; // [rsp+78h] [rbp+17h]
  int v16; // [rsp+80h] [rbp+1Fh]
  unsigned __int8 v17; // [rsp+E0h] [rbp+7Fh] BYREF

  v3 = a2;
  *(_QWORD *)&v14 = 0LL;
  BYTE8(v14) = 0;
  *(_QWORD *)&v12 = 0LL;
  BYTE8(v12) = 0;
  v5 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(&v12, a3);
  if ( v5 < 0 )
  {
    *(_QWORD *)&v12 = 0LL;
    BYTE8(v12) = 0;
    goto LABEL_19;
  }
  v15 = a1 + 112;
  v6 = (_DWORD *)(a1 + 120);
  if ( *(_DWORD *)(a1 + 112) == 1 )
  {
    if ( !*v6 )
      *v6 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 120));
  }
  v16 = 0;
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 80) )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v17, *(unsigned __int8 *)(a1 + 133), a1 + 136);
    v5 = 0;
    *(_QWORD *)&v13 = 0LL;
    BYTE8(v13) = 0;
    v8 = 16 * v3;
    v9 = (const void *)(16 * v3 + *(_QWORD *)(a1 + 96));
    if ( v9 )
    {
      memmove(&v13, v9, 0x10uLL);
      *(_OWORD *)(v8 + *(_QWORD *)(a1 + 96)) = v12;
      *(_QWORD *)&v12 = 0LL;
      BYTE8(v12) = 0;
      ++*(_DWORD *)(a1 + 128);
      v10 = v13;
      XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v14);
      v14 = v10;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v8 + *(_QWORD *)(a1 + 96)), 8)) )
        ++*(_DWORD *)(a1 + 88);
      if ( BYTE8(v13) )
        --*(_DWORD *)(a1 + 88);
      goto LABEL_16;
    }
    *(_DWORD *)_o__errno(v7) = 22;
    invalid_parameter_noinfo();
    v5 = -2147418113;
  }
  else
  {
    v5 = -2147483637;
  }
  RoOriginateError((unsigned int)v5, 0LL);
LABEL_16:
  if ( *(_DWORD *)(a1 + 112) == 1 )
    *v6 += 0x10000000;
  else
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 120));
LABEL_19:
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v12);
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v14);
  if ( v5 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent(
                           v17,
                           *(unsigned __int8 *)(a1 + 132),
                           a1,
                           3LL,
                           v3);
  return (unsigned int)v5;
}
