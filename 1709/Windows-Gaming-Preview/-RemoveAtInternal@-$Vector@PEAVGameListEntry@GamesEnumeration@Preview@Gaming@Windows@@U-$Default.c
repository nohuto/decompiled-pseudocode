/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18000CB00
 * Callers:
 *     ?RemoveAt@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x18000B3F0 (-RemoveAt@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEquality.c)
 *     ?RemoveAtEnd@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18000B410 (-RemoveAtEnd@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqual.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000C55C (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000C62C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000D74C (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ?ResizeStorage@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18000E2A4 (-ResizeStorage@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqu.c)
 *     _invalid_parameter_noinfo @ 0x18004204C (_invalid_parameter_noinfo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  _DWORD *v6; // r14
  RTL_SRWLOCK *v7; // rsi
  int v8; // edi
  __int64 v9; // rcx
  __int128 v10; // xmm6
  int v11; // ecx
  size_t v12; // r8
  __int64 v13; // rdx
  void *v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int128 v18; // [rsp+40h] [rbp-48h] BYREF
  __int64 v19; // [rsp+50h] [rbp-38h]
  int v20; // [rsp+58h] [rbp-30h]
  char v21; // [rsp+90h] [rbp+8h] BYREF

  *(_QWORD *)&v18 = 0LL;
  BYTE8(v18) = 0;
  v6 = (_DWORD *)(a1 + 112);
  v19 = a1 + 112;
  v7 = (RTL_SRWLOCK *)(a1 + 120);
  if ( *(_DWORD *)(a1 + 112) == 1 )
  {
    if ( !LODWORD(v7->Ptr) )
      LODWORD(v7->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 120));
  }
  v20 = 0;
  if ( a3 )
    a2 = *(_DWORD *)(a1 + 80) - 1;
  if ( a2 >= *(_DWORD *)(a1 + 80) )
  {
    v8 = -2147483637;
LABEL_16:
    RoOriginateError((unsigned int)v8, 0LL);
    goto LABEL_22;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v21);
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 96);
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v9 + 16LL * a2), 8)) )
    --*(_DWORD *)(a1 + 88);
  v10 = *(_OWORD *)(v9 + 16LL * a2);
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v18);
  v18 = v10;
  v11 = *(_DWORD *)(a1 + 80);
  if ( a2 < v11 - 1 )
  {
    v12 = 16LL * (v11 - a2 - 1);
    v13 = *(_QWORD *)(a1 + 96);
    v14 = (void *)(v13 + 16LL * a2);
    if ( v12 )
    {
      if ( !v14 || !(v13 + 16LL * (a2 + 1)) )
      {
        *(_DWORD *)_o__errno(v14) = 22;
        invalid_parameter_noinfo();
        v8 = -2147418113;
        goto LABEL_16;
      }
      memmove(v14, (const void *)(v13 + 16LL * (a2 + 1)), v12);
    }
  }
  ++*(_DWORD *)(a1 + 128);
  --*(_DWORD *)(a1 + 80);
  v15 = *(_DWORD *)(a1 + 84);
  if ( *(_DWORD *)(a1 + 80) < v15 / 3 )
  {
    v16 = v15 - v15 / 3;
    if ( v15 - 1 < (unsigned int)v16 )
      v16 = v15 - 1;
    v8 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::ResizeStorage(
           a1,
           v16);
  }
LABEL_22:
  if ( *v6 == 1 )
    LODWORD(v7->Ptr) += 0x10000000;
  else
    ReleaseSRWLockExclusive(v7);
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v18);
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v8;
}
