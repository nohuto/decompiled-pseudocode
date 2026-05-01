/*
 * XREFs of ?SetAt@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJII@Z @ 0x18017ABD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18016245C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801624C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180162534 (-RaiseEvent@-$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0.c)
 *     _invalid_parameter_noinfo @ 0x180194E10 (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::SetAt(
        __int64 a1,
        unsigned int a2,
        int a3)
{
  __int64 v4; // rsi
  int v6; // ebx
  __int64 v7; // rcx
  const void *v8; // rdx
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = 0;
  v4 = a2;
  XWinRT::SerializingLockPolicy::Write((__int64)v10, a1 + 72, &v11);
  v6 = v11;
  if ( v11 >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 40) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v11);
      v6 = 0;
      v8 = (const void *)(*(_QWORD *)(a1 + 56) + 4 * v4);
      if ( v8 )
      {
        memmove(&v11, v8, 4uLL);
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4 * v4) = a3;
        ++*(_DWORD *)(a1 + 88);
      }
      else
      {
        *(_DWORD *)_o__errno(v7, 0LL) = 22;
        invalid_parameter_noinfo();
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
    }
  }
  if ( v10[0] )
  {
    if ( *(_DWORD *)v10[0] == 1 )
      *(_DWORD *)(v10[0] + 8LL) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v10[0] + 8LL));
  }
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}
