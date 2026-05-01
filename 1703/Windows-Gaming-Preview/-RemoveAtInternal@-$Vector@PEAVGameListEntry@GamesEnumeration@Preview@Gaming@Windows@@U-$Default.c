/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x180007DCC
 * Callers:
 *     ?RemoveAt@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x1800065B0 (-RemoveAt@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEquality.c)
 *     ?RemoveAtEnd@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x1800065D0 (-RemoveAtEnd@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqual.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000797C (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180007A1C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x1800089CC (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ?ResizeStorage@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180008FF4 (-ResizeStorage@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqu.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180009FF4 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     _invalid_parameter_noinfo @ 0x180029C30 (_invalid_parameter_noinfo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int128 v12; // xmm6
  __int64 v13; // r9
  int v14; // ecx
  size_t v15; // r8
  void *v16; // rcx
  __int64 v17; // rdx
  __int128 v19; // [rsp+40h] [rbp-30h] BYREF
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  int v21; // [rsp+90h] [rbp+20h] BYREF

  v21 = 0;
  *(_QWORD *)&v19 = 0LL;
  BYTE8(v19) = 0;
  XWinRT::SerializingLockPolicy::Write(&v20, a1 + 96, &v21);
  v8 = v21;
  if ( v21 >= 0 )
  {
    if ( a3 )
      a2 = *(_DWORD *)(a1 + 64) - 1;
    if ( a2 >= *(_DWORD *)(a1 + 64) )
    {
      v8 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v8 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v21);
      v8 = 0;
      v11 = *(_QWORD *)(a1 + 80);
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v11 + 16LL * a2), 8)) )
        --*(_DWORD *)(a1 + 72);
      v12 = *(_OWORD *)(v11 + 16LL * a2);
      XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v19, v9, v10);
      v19 = v12;
      v14 = *(_DWORD *)(a1 + 64);
      if ( a2 < v14 - 1 )
      {
        v15 = 16LL * (v14 - a2 - 1);
        v6 = *(_QWORD *)(a1 + 80);
        v16 = (void *)(v6 + 16LL * a2);
        if ( v15 )
        {
          if ( !v16 || !(v6 + 16LL * (a2 + 1)) )
          {
            *(_DWORD *)_o__errno(v16, v6, v15, v13) = 22;
            invalid_parameter_noinfo();
            v8 = -2147418113;
            RoOriginateError(2147549183LL, 0LL);
            goto LABEL_19;
          }
          memmove(v16, (const void *)(v6 + 16LL * (a2 + 1)), v15);
        }
      }
      ++*(_DWORD *)(a1 + 112);
      --*(_DWORD *)(a1 + 64);
      v7 = *(unsigned int *)(a1 + 68);
      LODWORD(v6) = (2863311531u * (unsigned __int64)(unsigned int)v7) >> 32;
      if ( *(_DWORD *)(a1 + 64) < (unsigned int)v7 / 3 )
      {
        v17 = (unsigned int)v7 - (unsigned int)v7 / 3;
        if ( (int)v7 - 1 < (unsigned int)v17 )
          v17 = (unsigned int)(v7 - 1);
        v8 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::ResizeStorage(
               a1,
               v17);
      }
    }
  }
LABEL_19:
  if ( v20 )
  {
    if ( *(_DWORD *)v20 == 1 )
      *(_DWORD *)(v20 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v20 + 8));
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v19, v6, v7);
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v8;
}
