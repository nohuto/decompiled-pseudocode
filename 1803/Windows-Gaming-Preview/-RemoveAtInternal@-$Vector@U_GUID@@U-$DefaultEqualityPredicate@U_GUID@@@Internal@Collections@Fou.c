/*
 * XREFs of ?RemoveAtInternal@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18002FC74
 * Callers:
 *     ?RemoveAt@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x18002D9C0 (-RemoveAt@-$Vector@U_GUID@@U-$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@.c)
 *     ?RemoveAtEnd@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18002DA00 (-RemoveAtEnd@-$Vector@U_GUID@@U-$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundati.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000C690 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000C6A8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?ResizeStorage@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18000E698 (-ResizeStorage@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqu.c)
 *     _invalid_parameter_noinfo @ 0x180043052 (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  _DWORD *v3; // r15
  RTL_SRWLOCK *v4; // r14
  unsigned int v8; // esi
  bool v9; // cf
  int v10; // ebx
  __int64 v11; // rcx
  void *v12; // rax
  const void *v13; // rdx
  size_t v14; // r8
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  unsigned int v17; // edx
  char v19; // [rsp+60h] [rbp+8h] BYREF

  v3 = (_DWORD *)(a1 + 104);
  v4 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v4->Ptr) )
      LODWORD(v4->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  v8 = *(_DWORD *)(a1 + 72);
  if ( a3 )
    a2 = v8 - 1;
  v9 = a2 < v8;
  if ( a2 >= v8 )
  {
    RoOriginateError(2147483659LL, 0LL);
    v9 = a2 < v8;
  }
  v10 = v9 ? 0 : 0x8000000B;
  if ( a2 < v8 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v19);
    v11 = *(unsigned int *)(a1 + 72);
    v10 = 0;
    if ( a2 < (int)v11 - 1 )
    {
      v12 = (void *)(*(_QWORD *)(a1 + 88) + 16LL * a2);
      v13 = (const void *)(*(_QWORD *)(a1 + 88) + 16LL * (a2 + 1));
      v14 = 16LL * ((unsigned int)v11 - a2 - 1);
      if ( v14 )
      {
        if ( !v12 || !v13 )
        {
          *(_DWORD *)_o__errno(v11, v13) = 22;
          invalid_parameter_noinfo();
          v10 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
          goto LABEL_20;
        }
        memmove(v12, v13, v14);
        LODWORD(v11) = *(_DWORD *)(a1 + 72);
      }
    }
    ++*(_DWORD *)(a1 + 120);
    v15 = *(_DWORD *)(a1 + 76);
    v16 = v11 - 1;
    *(_DWORD *)(a1 + 72) = v16;
    v17 = v15 / 3;
    if ( v16 < v15 / 3 )
    {
      if ( v15 - 1 < v15 - v17 )
        v17 = 1;
      v10 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::ResizeStorage(
              a1,
              v15 - v17);
    }
  }
LABEL_20:
  if ( v3 )
  {
    if ( *v3 == 1 )
      LODWORD(v4->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v4);
  }
  if ( v10 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v10;
}
