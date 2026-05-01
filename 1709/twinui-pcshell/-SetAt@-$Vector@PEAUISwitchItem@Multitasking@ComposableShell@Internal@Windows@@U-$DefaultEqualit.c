/*
 * XREFs of ?SetAt@?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUISwitchItem@Multitasking@ComposableShell@25@@Z @ 0x180196310
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801979C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180197A34 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     _invalid_parameter_noinfo @ 0x1801E2E30 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v6; // rdi
  _DWORD *v7; // r14
  int v8; // ebp
  __int64 v9; // rcx
  const void *v10; // rdx
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF
  __int64 v13; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = 0LL;
  v13 = 0LL;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v7 = (_DWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !*v7 )
      *v7 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 40) )
  {
    v8 = -2147483637;
LABEL_11:
    RoOriginateError((unsigned int)v8, 0LL);
    goto LABEL_13;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v12, *(unsigned __int8 *)(a1 + 93), a1 + 96);
  v8 = 0;
  v10 = (const void *)(*(_QWORD *)(a1 + 56) + 8 * v4);
  if ( !v10 )
  {
    *(_DWORD *)_o__errno(v9) = 22;
    invalid_parameter_noinfo();
    v8 = -2147418113;
    goto LABEL_11;
  }
  memmove(&v12, v10, 8uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4) = v3;
  v3 = 0LL;
  ++*(_DWORD *)(a1 + 88);
  v6 = v12;
  v13 = v12;
LABEL_13:
  if ( *(_DWORD *)(a1 + 72) == 1 )
    *v7 += 0x10000000;
  else
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent(
                           (unsigned __int8)v12,
                           *(unsigned __int8 *)(a1 + 92),
                           a1,
                           3LL,
                           v4);
  return (unsigned int)v8;
}
