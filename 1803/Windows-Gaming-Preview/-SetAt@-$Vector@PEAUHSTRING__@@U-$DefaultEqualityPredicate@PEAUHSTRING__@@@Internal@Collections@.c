/*
 * XREFs of ?SetAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUHSTRING__@@@Z @ 0x180012890
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000C690 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000C6A8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     _invalid_parameter_noinfo @ 0x180043052 (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        HSTRING a3)
{
  __int64 v3; // r12
  HSTRING v5; // rbx
  signed int v6; // edi
  _DWORD *v7; // rsi
  unsigned int v8; // r15d
  bool v9; // cf
  __int64 v10; // rcx
  const void *v11; // rdx
  int v12; // r15d
  HSTRING v14; // [rsp+80h] [rbp+18h] BYREF
  HSTRING string; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  v5 = 0LL;
  v6 = WindowsDuplicateString(a3, &string);
  if ( v6 >= 0 )
  {
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
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v14);
      v11 = (const void *)(*(_QWORD *)(a1 + 88) + 8 * v3);
      if ( v11 )
      {
        memmove(&v14, v11, 8uLL);
        v12 = 0;
      }
      else
      {
        v12 = 22;
        *(_DWORD *)_o__errno(v10, 0LL) = 22;
        invalid_parameter_noinfo();
        RoOriginateError(2147549183LL, 0LL);
      }
      v6 = v12 != 0 ? 0x8000FFFF : 0;
      if ( !v12 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v3) = string;
        string = 0LL;
        ++*(_DWORD *)(a1 + 120);
        v5 = v14;
        WindowsDeleteString(0LL);
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
    string = 0LL;
  }
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v5);
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v6;
}
