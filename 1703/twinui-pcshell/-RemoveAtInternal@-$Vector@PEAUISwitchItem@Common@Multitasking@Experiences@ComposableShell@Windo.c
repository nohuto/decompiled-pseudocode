/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x180161348
 * Callers:
 *     ?RemoveAt@?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x180161340 (-RemoveAt@-$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIntern.c)
 *     ?RemoveAtEnd@?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x1801614D0 (-RemoveAtEnd@-$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18016245C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801624C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?ResizeStorage@?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1801624D8 (-ResizeStorage@-$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsI.c)
 *     ?RaiseEvent@?$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180162534 (-RaiseEvent@-$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0.c)
 *     _invalid_parameter_noinfo @ 0x180194E10 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  __int64 v6; // rbx
  int v7; // esi
  __int64 v8; // rdx
  __int64 *v9; // r9
  int v10; // ecx
  __int64 v11; // rcx
  size_t v12; // r8
  const void *v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rdx
  _QWORD v17[3]; // [rsp+38h] [rbp-30h] BYREF
  int v18; // [rsp+70h] [rbp+8h] BYREF

  v18 = 0;
  v6 = 0LL;
  XWinRT::SerializingLockPolicy::Write(v17, a1 + 72, &v18);
  v7 = v18;
  if ( v18 >= 0 )
  {
    if ( a3 )
      a2 = *(_DWORD *)(a1 + 40) - 1;
    if ( a2 >= *(_DWORD *)(a1 + 40) )
    {
      v7 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v7 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v18, *(unsigned __int8 *)(a1 + 93), a1 + 96);
      v7 = 0;
      v8 = *(_QWORD *)(a1 + 56);
      v9 = (__int64 *)(v8 + 8LL * a2);
      v6 = *v9;
      v10 = *(_DWORD *)(a1 + 40);
      if ( a2 < v10 - 1 )
      {
        v11 = v10 - a2;
        v12 = 8LL * (unsigned int)(v11 - 1);
        v13 = (const void *)(v8 + 8LL * (a2 + 1));
        if ( v12 )
        {
          if ( !v9 || !v13 )
          {
            *(_DWORD *)_o__errno(v11, v13) = 22;
            invalid_parameter_noinfo();
            v7 = -2147418113;
            RoOriginateError(2147549183LL, 0LL);
            goto LABEL_17;
          }
          memmove(v9, v13, v12);
        }
      }
      ++*(_DWORD *)(a1 + 88);
      --*(_DWORD *)(a1 + 40);
      v14 = *(_DWORD *)(a1 + 44);
      if ( *(_DWORD *)(a1 + 40) < v14 / 3 )
      {
        v15 = v14 - v14 / 3;
        if ( v14 - 1 < (unsigned int)v15 )
          v15 = v14 - 1;
        v7 = Windows::Foundation::Collections::Internal::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>::ResizeStorage(
               a1,
               v15);
      }
    }
  }
LABEL_17:
  if ( v17[0] )
  {
    if ( *(_DWORD *)v17[0] == 1 )
      *(_DWORD *)(v17[0] + 8LL) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v17[0] + 8LL));
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,0,0,0>::RaiseEvent(
                           (unsigned __int8)v18,
                           *(unsigned __int8 *)(a1 + 92),
                           a1,
                           2LL,
                           a2);
  return (unsigned int)v7;
}
