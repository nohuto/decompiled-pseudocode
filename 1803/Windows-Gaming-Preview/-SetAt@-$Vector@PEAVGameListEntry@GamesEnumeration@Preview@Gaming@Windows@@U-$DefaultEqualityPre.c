/*
 * XREFs of ?SetAt@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x18000B500
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000C690 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000C6A8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000D90C (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@1@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000D990 (--$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@X.c)
 *     _invalid_parameter_noinfo @ 0x180043052 (_invalid_parameter_noinfo.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r12
  int v5; // r13d
  signed int v6; // ebx
  _DWORD *v7; // rsi
  unsigned int v8; // r15d
  bool v9; // cf
  const void *v10; // rdx
  __int64 v11; // rbx
  __int128 v12; // xmm6
  __int128 v14; // [rsp+40h] [rbp-21h] BYREF
  __int128 v15; // [rsp+58h] [rbp-9h] BYREF
  __int128 v16; // [rsp+68h] [rbp+7h] BYREF
  __int64 v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+1Fh]
  __int64 v19; // [rsp+E0h] [rbp+7Fh] BYREF

  v3 = a2;
  v5 = 0;
  *(_QWORD *)&v16 = 0LL;
  BYTE8(v16) = 0;
  *(_QWORD *)&v14 = 0LL;
  BYTE8(v14) = 0;
  v6 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(&v14, a3);
  if ( v6 >= 0 )
  {
    v17 = a1 + 104;
    v7 = (_DWORD *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 104) == 1 )
    {
      if ( !*v7 )
        *v7 = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
    }
    v18 = 0;
    v8 = *(_DWORD *)(a1 + 72);
    v9 = (unsigned int)v3 < v8;
    if ( (unsigned int)v3 >= v8 )
    {
      RoOriginateError(2147483659LL, 0LL);
      v9 = (unsigned int)v3 < v8;
    }
    v6 = v9 ? 0 : 0x8000000B;
    if ( (unsigned int)v3 < v8 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v19, *(unsigned __int8 *)(a1 + 125), a1 + 128);
      *(_QWORD *)&v15 = 0LL;
      BYTE8(v15) = 0;
      v19 = 16 * v3;
      v10 = (const void *)(16 * v3 + *(_QWORD *)(a1 + 88));
      if ( v10 )
      {
        memmove(&v15, v10, 0x10uLL);
      }
      else
      {
        v5 = 22;
        *(_DWORD *)_o__errno(16 * v3, 0LL) = 22;
        invalid_parameter_noinfo();
        RoOriginateError(2147549183LL, 0LL);
      }
      v6 = v5 != 0 ? 0x8000FFFF : 0;
      if ( !v5 )
      {
        v11 = v19;
        *(_OWORD *)(v19 + *(_QWORD *)(a1 + 88)) = v14;
        *(_QWORD *)&v14 = 0LL;
        BYTE8(v14) = 0;
        ++*(_DWORD *)(a1 + 120);
        v12 = v15;
        XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v16);
        v16 = v12;
        if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v11 + *(_QWORD *)(a1 + 88)), 8)) )
          ++*(_DWORD *)(a1 + 80);
        v6 = v5 != 0 ? 0x8000FFFF : 0;
        if ( BYTE8(v15) )
          --*(_DWORD *)(a1 + 80);
      }
    }
    if ( a1 != -104 )
    {
      if ( *(_DWORD *)(a1 + 104) == 1 )
        *v7 += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 112));
    }
  }
  else
  {
    *(_QWORD *)&v14 = 0LL;
    BYTE8(v14) = 0;
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v14);
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v16);
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent(
                           (unsigned __int8)v19,
                           *(unsigned __int8 *)(a1 + 124),
                           a1,
                           3LL,
                           v3);
  return (unsigned int)v6;
}
