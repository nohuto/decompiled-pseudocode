/*
 * XREFs of ?InsertAtInternal@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJII_N@Z @ 0x18017B5F8
 * Callers:
 *     ?InsertAt@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJII@Z @ 0x18017ACE0 (-InsertAt@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U-$De.c)
 *     ?Append@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x18017AD00 (-Append@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U-$Defa.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18016245C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801624C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180162534 (-RaiseEvent@-$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0.c)
 *     ?ResizeStorage@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18017C13C (-ResizeStorage@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@.c)
 *     _invalid_parameter_noinfo @ 0x180194E10 (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4)
{
  int v8; // ebx
  unsigned int v9; // ecx
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rdx
  size_t v13; // r8
  void *v14; // rcx
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = 0;
  XWinRT::SerializingLockPolicy::Write((__int64)v16, a1 + 72, &v17);
  v8 = v17;
  if ( v17 >= 0 )
  {
    if ( a4 )
      a2 = *(_DWORD *)(a1 + 40);
    if ( a2 > *(_DWORD *)(a1 + 40) )
    {
      v8 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      goto LABEL_24;
    }
    if ( *(_DWORD *)(a1 + 40) >= 0x7FFFFFFFu )
      v8 = -2147024882;
    if ( v8 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v17);
      v8 = 0;
      v9 = *(_DWORD *)(a1 + 44);
      if ( *(_DWORD *)(a1 + 40) + 1 <= v9 )
        goto LABEL_13;
      v10 = v9 + (v9 >> 1);
      if ( v9 + 1 > (unsigned int)v10 )
        v10 = v9 + 1;
      v8 = Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::ResizeStorage(
             a1,
             v10);
      if ( v8 >= 0 )
      {
LABEL_13:
        v11 = *(_DWORD *)(a1 + 40);
        if ( a2 < v11 )
        {
          v12 = *(_QWORD *)(a1 + 56);
          v13 = 4LL * (v11 - a2);
          v14 = (void *)(v12 + 4LL * (a2 + 1));
          if ( v13 )
          {
            if ( !v14 || !(v12 + 4LL * a2) )
            {
              *(_DWORD *)_o__errno(v14, v12) = 22;
LABEL_20:
              invalid_parameter_noinfo();
              v8 = -2147418113;
              RoOriginateError(2147549183LL, 0LL);
              goto LABEL_22;
            }
            if ( 4 * (unsigned __int64)(*(_DWORD *)(a1 + 44) - a2 - 1) < v13 )
            {
              *(_DWORD *)_o__errno(v14, v12) = 34;
              goto LABEL_20;
            }
            memmove(v14, (const void *)(v12 + 4LL * a2), v13);
          }
        }
LABEL_22:
        if ( v8 >= 0 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL * a2) = a3;
          ++*(_DWORD *)(a1 + 40);
          ++*(_DWORD *)(a1 + 88);
        }
      }
    }
  }
LABEL_24:
  if ( v16[0] )
  {
    if ( *(_DWORD *)v16[0] == 1 )
      *(_DWORD *)(v16[0] + 8LL) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v16[0] + 8LL));
  }
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,0,0,0>::RaiseEvent();
  return (unsigned int)v8;
}
