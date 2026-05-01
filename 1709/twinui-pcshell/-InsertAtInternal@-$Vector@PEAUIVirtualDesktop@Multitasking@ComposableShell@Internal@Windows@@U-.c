/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIVirtualDesktop@Multitasking@ComposableShell@25@_N@Z @ 0x180197A4C
 * Callers:
 *     ?InsertAt@?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@5@@Z @ 0x180196480 (-InsertAt@-$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U-$DefaultEquality.c)
 *     ?Append@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@25@@Z @ 0x180197C30 (-Append@-$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultEq.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801979C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?ResizeStorage@?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1801979D8 (-ResizeStorage@-$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$Defaul.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180197A34 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     _invalid_parameter_noinfo @ 0x1801E2E30 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rbx
  _DWORD *v8; // r14
  int v9; // esi
  unsigned int v10; // r8d
  int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // rdx
  size_t v14; // r8
  void *v15; // rcx
  char v17; // [rsp+60h] [rbp+18h] BYREF

  v5 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v8 = (_DWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !*v8 )
      *v8 = -268435456;
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
    goto LABEL_28;
  }
  if ( *(_DWORD *)(a1 + 40) >= 0x7FFFFFFFu )
  {
    v9 = -2147024882;
    goto LABEL_28;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v17);
  v9 = 0;
  v10 = *(_DWORD *)(a1 + 44);
  if ( *(_DWORD *)(a1 + 40) + 1 <= v10 )
    goto LABEL_17;
  v11 = v10 >> 1;
  if ( v10 + 1 > (v10 >> 1) + v10 )
    v11 = 1;
  v9 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>>::ResizeStorage(
         a1,
         v10 + v11);
  if ( v9 >= 0 )
  {
LABEL_17:
    v12 = *(_DWORD *)(a1 + 40);
    if ( a2 < v12 )
    {
      v13 = *(_QWORD *)(a1 + 56);
      v14 = 8LL * (v12 - a2);
      v15 = (void *)(v13 + 8LL * (a2 + 1));
      if ( v14 )
      {
        if ( !v15 || !(v13 + 8LL * a2) )
        {
          *(_DWORD *)_o__errno(v15) = 22;
LABEL_24:
          invalid_parameter_noinfo();
          v9 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
          goto LABEL_26;
        }
        if ( 8 * (unsigned __int64)(*(_DWORD *)(a1 + 44) - a2 - 1) < v14 )
        {
          *(_DWORD *)_o__errno(v15) = 34;
          goto LABEL_24;
        }
        memmove(v15, (const void *)(v13 + 8LL * a2), v14);
      }
    }
LABEL_26:
    if ( v9 >= 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a2) = v5;
      v5 = 0LL;
      ++*(_DWORD *)(a1 + 40);
      ++*(_DWORD *)(a1 + 88);
    }
  }
LABEL_28:
  if ( *(_DWORD *)(a1 + 72) == 1 )
    *v8 += 0x10000000;
  else
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
  if ( v9 >= 0 )
    v9 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v9;
}
