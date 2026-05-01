/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x180017A68
 * Callers:
 *     ?RemoveAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x180016D10 (-RemoveAt@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Inter_ea_180016D10.c)
 *     ?RemoveAtEnd@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x180016D30 (-RemoveAtEnd@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@In_ea_180016D30.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000C55C (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000C62C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?ResizeStorage@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180018424 (-ResizeStorage@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@_ea_180018424.c)
 *     _invalid_parameter_noinfo @ 0x18004204C (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  HSTRING v3; // rbx
  RTL_SRWLOCK *v4; // r14
  int v8; // esi
  int v9; // ecx
  __int64 v10; // rdx
  size_t v11; // r8
  void *v12; // rcx
  unsigned int v13; // r8d
  __int64 v14; // rdx
  char v16; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !LODWORD(v4->Ptr) )
      LODWORD(v4->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( a3 )
    a2 = *(_DWORD *)(a1 + 40) - 1;
  if ( a2 >= *(_DWORD *)(a1 + 40) )
  {
    v8 = -2147483637;
LABEL_14:
    RoOriginateError((unsigned int)v8, 0LL);
    goto LABEL_20;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v16);
  v8 = 0;
  v3 = *(HSTRING *)(*(_QWORD *)(a1 + 56) + 8LL * a2);
  WindowsDeleteString(0LL);
  v9 = *(_DWORD *)(a1 + 40);
  if ( a2 < v9 - 1 )
  {
    v10 = *(_QWORD *)(a1 + 56);
    v11 = 8LL * (v9 - a2 - 1);
    v12 = (void *)(v10 + 8LL * a2);
    if ( v11 )
    {
      if ( !v12 || !(v10 + 8LL * (a2 + 1)) )
      {
        *(_DWORD *)_o__errno(v12) = 22;
        invalid_parameter_noinfo();
        v8 = -2147418113;
        goto LABEL_14;
      }
      memmove(v12, (const void *)(v10 + 8LL * (a2 + 1)), v11);
    }
  }
  v13 = *(_DWORD *)(a1 + 44);
  ++*(_DWORD *)(a1 + 88);
  if ( --*(_DWORD *)(a1 + 40) < v13 / 3 )
  {
    v14 = v13 - v13 / 3;
    if ( v13 - 1 < (unsigned int)v14 )
      v14 = v13 - 1;
    v8 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::ResizeStorage(
           a1,
           v14);
  }
LABEL_20:
  if ( *(_DWORD *)(a1 + 72) == 1 )
    LODWORD(v4->Ptr) += 0x10000000;
  else
    ReleaseSRWLockExclusive(v4);
  WindowsDeleteString(v3);
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v8;
}
