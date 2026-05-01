/*
 * XREFs of ?RemoveAtInternal@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18017B798
 * Callers:
 *     ?RemoveAt@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x18017ACF0 (-RemoveAt@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U-$De.c)
 *     ?RemoveAtEnd@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18017AD10 (-RemoveAtEnd@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U-.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18016245C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801624C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180162534 (-RaiseEvent@-$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0.c)
 *     ?ResizeStorage@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18017C13C (-ResizeStorage@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@.c)
 *     _invalid_parameter_noinfo @ 0x180194E10 (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  int v6; // edi
  int v7; // ecx
  __int64 v8; // rdx
  size_t v9; // r8
  void *v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF
  int v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0;
  XWinRT::SerializingLockPolicy::Write((__int64)v14, a1 + 72, &v15);
  v6 = v15;
  if ( v15 >= 0 )
  {
    if ( a3 )
      a2 = *(_DWORD *)(a1 + 40) - 1;
    if ( a2 >= *(_DWORD *)(a1 + 40) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v15);
      v7 = *(_DWORD *)(a1 + 40);
      v6 = 0;
      if ( a2 < v7 - 1 )
      {
        v8 = *(_QWORD *)(a1 + 56);
        v9 = 4LL * (v7 - a2 - 1);
        v10 = (void *)(v8 + 4LL * a2);
        if ( v9 )
        {
          if ( !v10 || !(v8 + 4LL * (a2 + 1)) )
          {
            *(_DWORD *)_o__errno(v10, v8) = 22;
            invalid_parameter_noinfo();
            v6 = -2147418113;
            RoOriginateError(2147549183LL, 0LL);
            goto LABEL_17;
          }
          memmove(v10, (const void *)(v8 + 4LL * (a2 + 1)), v9);
        }
      }
      v11 = *(_DWORD *)(a1 + 44);
      ++*(_DWORD *)(a1 + 88);
      if ( --*(_DWORD *)(a1 + 40) < v11 / 3 )
      {
        v12 = v11 - v11 / 3;
        if ( v11 - 1 < (unsigned int)v12 )
          v12 = v11 - 1;
        v6 = Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::ResizeStorage(
               a1,
               v12);
      }
    }
  }
LABEL_17:
  if ( v14[0] )
  {
    if ( *(_DWORD *)v14[0] == 1 )
      *(_DWORD *)(v14[0] + 8LL) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v14[0] + 8LL));
  }
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}
