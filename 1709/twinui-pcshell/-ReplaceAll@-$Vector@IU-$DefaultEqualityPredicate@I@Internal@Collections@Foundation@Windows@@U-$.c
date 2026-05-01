/*
 * XREFs of ?ReplaceAll@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJIPEAI@Z @ 0x1801C7FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801979C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180197A34 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  _DWORD *v3; // rsi
  unsigned int v5; // ebp
  unsigned int v9; // r15d
  _DWORD *v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdx
  _DWORD *v13; // rdi
  void *v14; // rbp
  char v15; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = 0;
  if ( a2 )
  {
    v3 = malloc(4LL * a2);
    if ( !v3 )
      return 2147942414LL;
    v5 = a2;
  }
  v9 = 0;
  if ( v5 )
  {
    v10 = v3;
    v9 = v5;
    v11 = a3 - (_QWORD)v3;
    v12 = v5;
    do
    {
      *v10 = *(_DWORD *)((char *)v10 + v11);
      ++v10;
      --v12;
    }
    while ( v12 );
  }
  v13 = (_DWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !*v13 )
      *v13 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v15);
  *(_DWORD *)(a1 + 40) = v9;
  *(_DWORD *)(a1 + 44) = v5;
  *(_DWORD *)(a1 + 48) = 0;
  v14 = *(void **)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v3;
  ++*(_DWORD *)(a1 + 88);
  if ( *(_DWORD *)(a1 + 72) == 1 )
    *v13 += 0x10000000;
  else
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
  if ( v14 )
    free(v14);
  return Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
}
