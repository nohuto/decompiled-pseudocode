/*
 * XREFs of ?SetAt@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIU_GUID@@@Z @ 0x18002D830
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000C690 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000C6A8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180043052 (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int128 *a3)
{
  __int128 v3; // xmm6
  _DWORD *v4; // r13
  __int64 v5; // r14
  RTL_SRWLOCK *v6; // rsi
  unsigned int v8; // ebp
  bool v9; // cf
  signed int v10; // ebx
  __int64 v11; // rcx
  const void *v12; // rdx
  int v13; // ebp
  _BYTE v15[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v16[16]; // [rsp+38h] [rbp-50h] BYREF

  v3 = *a3;
  v4 = (_DWORD *)(a1 + 104);
  v5 = a2;
  v6 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v6->Ptr) )
      LODWORD(v6->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  v8 = *(_DWORD *)(a1 + 72);
  v9 = (unsigned int)v5 < v8;
  if ( (unsigned int)v5 >= v8 )
  {
    RoOriginateError(2147483659LL, 0LL);
    v9 = (unsigned int)v5 < v8;
  }
  v10 = v9 ? 0 : 0x8000000B;
  if ( (unsigned int)v5 < v8 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v15);
    v12 = (const void *)(16 * v5 + *(_QWORD *)(a1 + 88));
    if ( v12 )
    {
      memmove(v16, v12, 0x10uLL);
      v13 = 0;
    }
    else
    {
      v13 = 22;
      *(_DWORD *)_o__errno(v11, 0LL) = 22;
      invalid_parameter_noinfo();
      RoOriginateError(2147549183LL, 0LL);
    }
    v10 = v13 != 0 ? 0x8000FFFF : 0;
    if ( !v13 )
    {
      *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v5) = v3;
      ++*(_DWORD *)(a1 + 120);
    }
  }
  if ( v4 )
  {
    if ( *v4 == 1 )
      LODWORD(v6->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v6);
  }
  if ( v10 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v10;
}
