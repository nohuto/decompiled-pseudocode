/*
 * XREFs of ?RemoveAtInternal@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x180301ACC
 * Callers:
 *     ?RemoveAt@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x180301AB0 (-RemoveAt@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U-$De.c)
 *     ?RemoveAtEnd@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x180301AC0 (-RemoveAtEnd@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U-.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18005FC3C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18005FC50 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18023AAB4 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     memmove_s @ 0x180255F04 (memmove_s.c)
 *     ?ResizeStorage@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180301D70 (-ResizeStorage@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  RTL_SRWLOCK *v11; // rcx
  RTL_SRWLOCK *v13; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0;
  XWinRT::SerializingLockPolicy::Write((__int64)&v13, (RTL_SRWLOCK *)(a1 + 72), &v14);
  v6 = v14;
  if ( v14 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 40);
    if ( a3 )
      a2 = v7 - 1;
    if ( a2 >= v7 )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v14);
      v8 = *(_DWORD *)(a1 + 40);
      v6 = 0;
      if ( a2 < v8 - 1
        && memmove_s(
             (void *const)(*(_QWORD *)(a1 + 56) + 4LL * a2),
             4LL * (v8 - a2 - 1),
             (const void *const)(*(_QWORD *)(a1 + 56) + 4LL * (a2 + 1)),
             4LL * (v8 - a2 - 1)) )
      {
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        v9 = *(_DWORD *)(a1 + 44);
        ++*(_DWORD *)(a1 + 88);
        if ( --*(_DWORD *)(a1 + 40) < v9 / 3 )
        {
          v10 = 1;
          if ( v9 - 1 >= v9 - v9 / 3 )
            v10 = v9 / 3;
          v6 = Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::ResizeStorage(
                 a1,
                 v9 - v10);
        }
      }
    }
  }
  if ( v13 )
  {
    v11 = v13 + 1;
    if ( LODWORD(v13->Ptr) == 1 )
      LODWORD(v11->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v11);
  }
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}
