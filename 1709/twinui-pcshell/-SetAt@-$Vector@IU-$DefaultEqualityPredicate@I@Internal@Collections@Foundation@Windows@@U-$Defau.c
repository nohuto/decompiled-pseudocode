/*
 * XREFs of ?SetAt@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJII@Z @ 0x1801C7D10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801979C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180197A34 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     _invalid_parameter_noinfo @ 0x1801E2E30 (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::SetAt(
        __int64 a1,
        unsigned int a2,
        int a3)
{
  RTL_SRWLOCK *v3; // rdi
  __int64 v5; // rbp
  int v7; // esi
  __int64 v8; // rcx
  const void *v9; // rdx
  char v11; // [rsp+60h] [rbp+18h] BYREF

  v3 = (RTL_SRWLOCK *)(a1 + 80);
  v5 = a2;
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !LODWORD(v3->Ptr) )
      LODWORD(v3->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 40) )
  {
    v7 = -2147483637;
LABEL_9:
    RoOriginateError((unsigned int)v7, 0LL);
    goto LABEL_11;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v11);
  v7 = 0;
  v9 = (const void *)(*(_QWORD *)(a1 + 56) + 4 * v5);
  if ( !v9 )
  {
    *(_DWORD *)_o__errno(v8) = 22;
    invalid_parameter_noinfo();
    v7 = -2147418113;
    goto LABEL_9;
  }
  memmove(&v11, v9, 4uLL);
  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4 * v5) = a3;
  ++*(_DWORD *)(a1 + 88);
LABEL_11:
  if ( *(_DWORD *)(a1 + 72) == 1 )
    LODWORD(v3->Ptr) += 0x10000000;
  else
    ReleaseSRWLockExclusive(v3);
  if ( v7 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v7;
}
