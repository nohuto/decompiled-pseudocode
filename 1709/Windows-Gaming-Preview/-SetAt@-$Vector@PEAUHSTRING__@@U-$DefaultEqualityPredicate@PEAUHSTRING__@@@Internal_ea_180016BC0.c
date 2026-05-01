/*
 * XREFs of ?SetAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUHSTRING__@@@Z @ 0x180016BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000C55C (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000C62C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     _invalid_parameter_noinfo @ 0x18004204C (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::SetAt(
        __int64 a1,
        unsigned int a2,
        HSTRING a3)
{
  __int64 v3; // rbp
  HSTRING v5; // rbx
  HRESULT v6; // esi
  _DWORD *v7; // r14
  __int64 v8; // rcx
  const void *v9; // rdx
  HSTRING v11; // [rsp+70h] [rbp+18h] BYREF
  HSTRING newString; // [rsp+78h] [rbp+20h] BYREF

  v3 = a2;
  v5 = 0LL;
  v6 = WindowsDuplicateString(a3, &newString);
  if ( v6 < 0 )
  {
    newString = 0LL;
    goto LABEL_16;
  }
  v7 = (_DWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !*v7 )
      *v7 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 40) )
  {
    v6 = -2147483637;
LABEL_11:
    RoOriginateError((unsigned int)v6, 0LL);
    goto LABEL_13;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v11);
  v6 = 0;
  v9 = (const void *)(*(_QWORD *)(a1 + 56) + 8 * v3);
  if ( !v9 )
  {
    *(_DWORD *)_o__errno(v8) = 22;
    invalid_parameter_noinfo();
    v6 = -2147418113;
    goto LABEL_11;
  }
  memmove(&v11, v9, 8uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v3) = newString;
  newString = 0LL;
  ++*(_DWORD *)(a1 + 88);
  v5 = v11;
  WindowsDeleteString(0LL);
LABEL_13:
  if ( *(_DWORD *)(a1 + 72) == 1 )
    *v7 += 0x10000000;
  else
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
LABEL_16:
  WindowsDeleteString(newString);
  newString = 0LL;
  WindowsDeleteString(v5);
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v6;
}
