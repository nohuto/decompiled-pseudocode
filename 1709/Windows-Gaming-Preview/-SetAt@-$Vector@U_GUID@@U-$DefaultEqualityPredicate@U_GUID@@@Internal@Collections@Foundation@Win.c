/*
 * XREFs of ?SetAt@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIU_GUID@@@Z @ 0x18002CA80
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000C55C (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000C62C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x18004204C (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int128 *a3)
{
  RTL_SRWLOCK *v3; // rdi
  __int128 v4; // xmm6
  __int64 v5; // rbp
  int v7; // esi
  __int64 v8; // rcx
  const void *v9; // rdx
  _BYTE v11[8]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v12[16]; // [rsp+38h] [rbp-40h] BYREF

  v3 = (RTL_SRWLOCK *)(a1 + 120);
  v4 = *a3;
  v5 = a2;
  if ( *(_DWORD *)(a1 + 112) == 1 )
  {
    if ( !LODWORD(v3->Ptr) )
      LODWORD(v3->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 120));
  }
  if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 80) )
  {
    v7 = -2147483637;
LABEL_9:
    RoOriginateError((unsigned int)v7, 0LL);
    goto LABEL_11;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v11);
  v7 = 0;
  v9 = (const void *)(16 * v5 + *(_QWORD *)(a1 + 96));
  if ( !v9 )
  {
    *(_DWORD *)_o__errno(v8) = 22;
    invalid_parameter_noinfo();
    v7 = -2147418113;
    goto LABEL_9;
  }
  memmove(v12, v9, 0x10uLL);
  *(_OWORD *)(16 * v5 + *(_QWORD *)(a1 + 96)) = v4;
  ++*(_DWORD *)(a1 + 128);
LABEL_11:
  if ( *(_DWORD *)(a1 + 112) == 1 )
    LODWORD(v3->Ptr) += 0x10000000;
  else
    ReleaseSRWLockExclusive(v3);
  if ( v7 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v7;
}
