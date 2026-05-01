/*
 * XREFs of ?SetAt@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x1800063E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000797C (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180007A1C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x1800089CC (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@1@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x180008A48 (--$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@X.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180009FF4 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     _invalid_parameter_noinfo @ 0x180029C30 (_invalid_parameter_noinfo.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // r8
  const void *v8; // rdx
  __int128 v9; // xmm6
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int128 v15; // [rsp+40h] [rbp-11h] BYREF
  __int128 v16; // [rsp+58h] [rbp+7h] BYREF
  __int128 v17; // [rsp+68h] [rbp+17h] BYREF
  _QWORD v18[4]; // [rsp+78h] [rbp+27h] BYREF
  int v19; // [rsp+D0h] [rbp+7Fh] BYREF

  v3 = a2;
  *(_QWORD *)&v17 = 0LL;
  BYTE8(v17) = 0;
  *(_QWORD *)&v15 = 0LL;
  BYTE8(v15) = 0;
  v6 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(&v15, a3);
  v19 = v6;
  if ( v6 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(v18, a1 + 96, &v19);
    v6 = v19;
    if ( v19 >= 0 )
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 64) )
      {
        v6 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
      if ( v6 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v19, *(unsigned __int8 *)(a1 + 117), a1 + 120);
        v6 = 0;
        *(_QWORD *)&v16 = 0LL;
        BYTE8(v16) = 0;
        v8 = (const void *)(16 * v3 + *(_QWORD *)(a1 + 80));
        if ( v8 )
        {
          memmove(&v16, v8, 0x10uLL);
          *(_OWORD *)(*(_QWORD *)(a1 + 80) + 16 * v3) = v15;
          *(_QWORD *)&v15 = 0LL;
          BYTE8(v15) = 0;
          ++*(_DWORD *)(a1 + 112);
          v9 = v16;
          XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v17, v10, v11);
          v17 = v9;
          if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 80) + 16 * v3), 8)) )
            ++*(_DWORD *)(a1 + 72);
          if ( BYTE8(v16) )
            --*(_DWORD *)(a1 + 72);
        }
        else
        {
          *(_DWORD *)_o__errno() = 22;
          invalid_parameter_noinfo();
          v6 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
        }
      }
    }
    if ( v18[0] )
    {
      if ( *(_DWORD *)v18[0] == 1 )
        *(_DWORD *)(v18[0] + 8LL) += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(v18[0] + 8LL));
    }
  }
  else
  {
    *(_QWORD *)&v15 = 0LL;
    BYTE8(v15) = 0;
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v15, v5, v7);
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v17, v12, v13);
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent(
                           (unsigned __int8)v19,
                           *(unsigned __int8 *)(a1 + 116),
                           a1,
                           3LL,
                           v3);
  return (unsigned int)v6;
}
