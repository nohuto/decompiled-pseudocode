/*
 * XREFs of ?Clear@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x1800065E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000797C (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180007A1C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?_EraseAll@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@PEAI@Z @ 0x18000819C (-_EraseAll@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqualit.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x1800089CC (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180009FF4 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::Clear(
        __int64 a1)
{
  bool v2; // r12
  char *v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // edi
  int v8; // ebx
  char *v9; // r14
  __int64 v11[3]; // [rsp+38h] [rbp-18h] BYREF
  int v12; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+48h] BYREF
  char *v14; // [rsp+A0h] [rbp+50h] BYREF

  v2 = 0;
  v3 = 0LL;
  v14 = 0LL;
  v4 = 0LL;
  v13 = 0;
  XWinRT::SerializingLockPolicy::Write(v11, a1 + 96, &v12);
  v7 = v12;
  if ( v12 >= 0 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v12, *(unsigned __int8 *)(a1 + 117), a1 + 120);
    v7 = 0;
    v8 = *(_DWORD *)(a1 + 64);
    Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::_EraseAll(
      a1,
      &v14,
      &v13);
    v2 = v8 != 0;
    v3 = v14;
    v4 = v13;
  }
  if ( v11[0] )
  {
    if ( *(_DWORD *)v11[0] == 1 )
      *(_DWORD *)(v11[0] + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v11[0] + 8));
  }
  if ( v3 )
  {
    if ( (_DWORD)v4 )
    {
      v9 = v3;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(v9, v5, v6);
        v9 += 16;
        --v4;
      }
      while ( v4 );
    }
    free(v3);
  }
  if ( v7 >= 0 && v2 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent(
                           (unsigned __int8)v12,
                           *(unsigned __int8 *)(a1 + 116),
                           a1,
                           0LL,
                           0);
  return (unsigned int)v7;
}
