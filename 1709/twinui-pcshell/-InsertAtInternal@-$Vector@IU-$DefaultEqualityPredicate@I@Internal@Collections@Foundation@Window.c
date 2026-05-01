/*
 * XREFs of ?InsertAtInternal@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJII_N@Z @ 0x1801C850C
 * Callers:
 *     ?InsertAt@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJII@Z @ 0x1801C7E10 (-InsertAt@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U-$De.c)
 *     ?Append@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x1801C7E30 (-Append@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U-$Defa.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801979C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180197A34 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     ?ResizeStorage@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1801C8F04 (-ResizeStorage@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@.c)
 *     _invalid_parameter_noinfo @ 0x1801E2E30 (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4)
{
  RTL_SRWLOCK *v4; // rsi
  int v9; // edi
  unsigned int v10; // r8d
  int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // rdx
  size_t v14; // r8
  void *v15; // rcx
  char v17; // [rsp+60h] [rbp+18h] BYREF

  v4 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !LODWORD(v4->Ptr) )
      LODWORD(v4->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( a4 )
    a2 = *(_DWORD *)(a1 + 40);
  if ( a2 > *(_DWORD *)(a1 + 40) )
  {
    v9 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
    goto LABEL_26;
  }
  if ( *(_DWORD *)(a1 + 40) >= 0x7FFFFFFFu )
  {
    v9 = -2147024882;
    goto LABEL_26;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v17);
  v9 = 0;
  v10 = *(_DWORD *)(a1 + 44);
  if ( *(_DWORD *)(a1 + 40) + 1 <= v10 )
    goto LABEL_15;
  v11 = v10 >> 1;
  if ( v10 + 1 > (v10 >> 1) + v10 )
    v11 = 1;
  v9 = Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::ResizeStorage(
         a1,
         v10 + v11);
  if ( v9 >= 0 )
  {
LABEL_15:
    v12 = *(_DWORD *)(a1 + 40);
    if ( a2 < v12 )
    {
      v13 = *(_QWORD *)(a1 + 56);
      v14 = 4LL * (v12 - a2);
      v15 = (void *)(v13 + 4LL * (a2 + 1));
      if ( v14 )
      {
        if ( !v15 || !(v13 + 4LL * a2) )
        {
          *(_DWORD *)_o__errno(v15) = 22;
LABEL_22:
          invalid_parameter_noinfo();
          v9 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
          goto LABEL_24;
        }
        if ( 4 * (unsigned __int64)(*(_DWORD *)(a1 + 44) - a2 - 1) < v14 )
        {
          *(_DWORD *)_o__errno(v15) = 34;
          goto LABEL_22;
        }
        memmove(v15, (const void *)(v13 + 4LL * a2), v14);
      }
    }
LABEL_24:
    if ( v9 >= 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL * a2) = a3;
      ++*(_DWORD *)(a1 + 40);
      ++*(_DWORD *)(a1 + 88);
    }
  }
LABEL_26:
  if ( *(_DWORD *)(a1 + 72) == 1 )
    LODWORD(v4->Ptr) += 0x10000000;
  else
    ReleaseSRWLockExclusive(v4);
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v9;
}
