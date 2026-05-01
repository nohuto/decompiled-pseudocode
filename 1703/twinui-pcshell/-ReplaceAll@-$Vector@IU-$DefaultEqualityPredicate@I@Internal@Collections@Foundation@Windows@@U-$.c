/*
 * XREFs of ?ReplaceAll@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJIPEAI@Z @ 0x18017AF90
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18016245C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801624C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180162534 (-RaiseEvent@-$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  _DWORD *v3; // rdi
  unsigned int v4; // ebp
  int v8; // ebx
  unsigned int v9; // r15d
  _DWORD *v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdx
  _DWORD *v13; // rax
  __int64 v15[5]; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v16 = 0;
  v3 = 0LL;
  v4 = 0;
  if ( a2 )
  {
    v3 = malloc(4LL * a2);
    if ( !v3 )
      return (unsigned int)-2147024882;
    v4 = a2;
  }
  v9 = 0;
  if ( v4 )
  {
    v16 = 0;
    v10 = v3;
    v11 = a3 - (_QWORD)v3;
    v9 = v4;
    v12 = v4;
    do
    {
      *v10 = *(_DWORD *)((char *)v10 + v11);
      ++v10;
      --v12;
    }
    while ( v12 );
  }
  XWinRT::SerializingLockPolicy::Write((__int64)v15, a1 + 72, &v16);
  v8 = v16;
  if ( v16 >= 0 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v16);
    *(_DWORD *)(a1 + 40) = v9;
    v8 = 0;
    *(_DWORD *)(a1 + 44) = v4;
    *(_DWORD *)(a1 + 48) = 0;
    v13 = *(_DWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v3;
    v3 = v13;
    ++*(_DWORD *)(a1 + 88);
  }
  if ( v15[0] )
  {
    if ( *(_DWORD *)v15[0] == 1 )
      *(_DWORD *)(v15[0] + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v15[0] + 8));
    v15[0] = 0LL;
  }
  if ( v3 )
    free(v3);
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,0,0,0>::RaiseEvent();
  return (unsigned int)v8;
}
