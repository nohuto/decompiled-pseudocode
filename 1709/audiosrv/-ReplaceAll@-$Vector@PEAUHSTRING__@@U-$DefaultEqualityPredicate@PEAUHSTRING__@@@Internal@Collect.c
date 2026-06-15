/*
 * XREFs of ?ReplaceAll@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@@Z @ 0x1800E4CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1800E20AC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x1800E46B8 (-RaiseEvent@-$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800E530C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        HSTRING *a3)
{
  HSTRING *v3; // rsi
  unsigned int v4; // r14d
  int v8; // ebx
  __int64 v9; // rdi
  unsigned int v10; // eax
  HSTRING *v11; // rax
  HSTRING *v12; // r14
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF
  HRESULT v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0;
  v3 = 0LL;
  v4 = 0;
  if ( a2 )
  {
    v3 = (HSTRING *)malloc(8LL * a2);
    if ( !v3 )
      return (unsigned int)-2147024882;
    v4 = a2;
  }
  v9 = 0LL;
  if ( v4 )
  {
    while ( 1 )
    {
      v15 = WindowsDuplicateString(*a3, &v3[v9]);
      v8 = v15;
      if ( v15 < 0 )
        break;
      v9 = (unsigned int)(v9 + 1);
      ++a3;
      if ( (unsigned int)v9 >= v4 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    XWinRT::SerializingLockPolicy::Write(v14, a1 + 112, &v15);
    v8 = v15;
    if ( v15 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v15);
      v10 = *(_DWORD *)(a1 + 80);
      v8 = 0;
      *(_DWORD *)(a1 + 80) = v9;
      v9 = v10;
      *(_DWORD *)(a1 + 84) = v4;
      *(_DWORD *)(a1 + 88) = 0;
      v11 = *(HSTRING **)(a1 + 96);
      *(_QWORD *)(a1 + 96) = v3;
      v3 = v11;
      ++*(_DWORD *)(a1 + 128);
    }
    if ( v14[0] )
    {
      if ( *(_DWORD *)v14[0] == 1 )
        *(_DWORD *)(v14[0] + 8) += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(v14[0] + 8));
    }
  }
  if ( v3 )
  {
    if ( (_DWORD)v9 )
    {
      v12 = v3;
      do
      {
        WindowsDeleteString(*v12);
        *v12++ = 0LL;
        --v9;
      }
      while ( v9 );
    }
    free(v3);
  }
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>::RaiseEvent();
  return (unsigned int)v8;
}
