/*
 * XREFs of ?InsertAtInternal@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJII_N@Z @ 0x180301388
 * Callers:
 *     ?Append@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x180300680 (-Append@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U-$Defa.c)
 *     ?InsertAt@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJII@Z @ 0x180301380 (-InsertAt@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U-$De.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18005FC3C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18005FC50 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18023AAB4 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     memmove_s @ 0x180255F04 (memmove_s.c)
 *     ?ResizeStorage@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180301D70 (-ResizeStorage@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4)
{
  int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // r9d
  int v11; // edx
  unsigned int v12; // eax
  RTL_SRWLOCK *v13; // rcx
  RTL_SRWLOCK *v15; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = 0;
  XWinRT::SerializingLockPolicy::Write((__int64)&v15, (RTL_SRWLOCK *)(a1 + 72), &v16);
  v8 = v16;
  if ( v16 >= 0 )
  {
    v9 = *(_DWORD *)(a1 + 40);
    if ( a4 )
      a2 = *(_DWORD *)(a1 + 40);
    if ( a2 <= v9 )
    {
      if ( v9 >= 0x7FFFFFFF )
        v8 = -2147024882;
      if ( v8 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v16);
        v8 = 0;
        v10 = *(_DWORD *)(a1 + 44);
        if ( *(_DWORD *)(a1 + 40) + 1 <= v10 )
          goto LABEL_13;
        v11 = 1;
        if ( v10 + 1 <= (v10 >> 1) + v10 )
          v11 = v10 >> 1;
        v8 = Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::ResizeStorage(
               a1,
               v10 + v11);
        if ( v8 >= 0 )
        {
LABEL_13:
          v12 = *(_DWORD *)(a1 + 40);
          if ( a2 < v12
            && memmove_s(
                 (void *const)(*(_QWORD *)(a1 + 56) + 4LL * (a2 + 1)),
                 4LL * (*(_DWORD *)(a1 + 44) - a2 - 1),
                 (const void *const)(*(_QWORD *)(a1 + 56) + 4LL * a2),
                 4LL * (v12 - a2)) )
          {
            v8 = -2147418113;
            RoOriginateError(2147549183LL, 0LL);
          }
          if ( v8 >= 0 )
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL * a2) = a3;
            ++*(_DWORD *)(a1 + 40);
            ++*(_DWORD *)(a1 + 88);
          }
        }
      }
    }
    else
    {
      v8 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
  }
  if ( v15 )
  {
    v13 = v15 + 1;
    if ( LODWORD(v15->Ptr) == 1 )
      LODWORD(v13->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v13);
  }
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v8;
}
