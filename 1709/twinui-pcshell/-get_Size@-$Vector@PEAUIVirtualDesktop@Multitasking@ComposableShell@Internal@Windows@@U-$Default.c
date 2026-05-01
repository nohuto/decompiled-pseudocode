/*
 * XREFs of ?get_Size@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x180197730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  RTL_SRWLOCK *v2; // rbx

  *a2 = 0;
  v2 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( SLODWORD(v2->Ptr) >= 0 )
      ++LODWORD(v2->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  }
  *a2 = *(_DWORD *)(a1 + 40);
  if ( *(_DWORD *)(a1 + 72) == 1 )
    --LODWORD(v2->Ptr);
  else
    ReleaseSRWLockShared(v2);
  return 0LL;
}
