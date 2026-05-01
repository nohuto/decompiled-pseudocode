/*
 * XREFs of ?ReplaceAll@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@@Z @ 0x180012820
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000C55C (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000C62C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        HSTRING *a3)
{
  HSTRING *v3; // r14
  unsigned int v5; // ebp
  HRESULT v8; // ebx
  __int64 v9; // rsi
  _DWORD *v10; // rbx
  unsigned int v11; // eax
  HSTRING *v12; // rax
  HSTRING *v13; // r15
  char v15; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = 0;
  if ( a2 )
  {
    v3 = (HSTRING *)malloc(8LL * a2);
    if ( !v3 )
      return (unsigned int)-2147024882;
    v5 = a2;
  }
  v9 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      v8 = WindowsDuplicateString(*a3, &v3[v9]);
      if ( v8 < 0 )
        break;
      v9 = (unsigned int)(v9 + 1);
      ++a3;
      if ( (unsigned int)v9 >= v5 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v10 = (_DWORD *)(a1 + 120);
    if ( *(_DWORD *)(a1 + 112) == 1 )
    {
      if ( !*v10 )
        *v10 = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 120));
    }
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v15);
    v11 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = v9;
    v9 = v11;
    *(_DWORD *)(a1 + 84) = v5;
    *(_DWORD *)(a1 + 88) = 0;
    v12 = *(HSTRING **)(a1 + 96);
    *(_QWORD *)(a1 + 96) = v3;
    v3 = v12;
    ++*(_DWORD *)(a1 + 128);
    if ( *(_DWORD *)(a1 + 112) == 1 )
      *v10 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 120));
    v8 = 0;
  }
  if ( v3 )
  {
    if ( (_DWORD)v9 )
    {
      v13 = v3;
      do
      {
        WindowsDeleteString(*v13);
        *v13++ = 0LL;
        --v9;
      }
      while ( v9 );
    }
    free(v3);
  }
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v8;
}
