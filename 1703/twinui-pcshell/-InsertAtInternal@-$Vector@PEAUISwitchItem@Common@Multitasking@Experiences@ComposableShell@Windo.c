/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@_N@Z @ 0x18016254C
 * Callers:
 *     ?InsertAt@?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180161330 (-InsertAt@-$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIntern.c)
 *     ?Append@?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@UEAAJPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180162720 (-Append@-$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18016245C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801624C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?ResizeStorage@?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1801624D8 (-ResizeStorage@-$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsI.c)
 *     ?RaiseEvent@?$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180162534 (-RaiseEvent@-$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0.c)
 *     _invalid_parameter_noinfo @ 0x180194E10 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rbx
  int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // eax
  __int64 v12; // rdx
  size_t v13; // r8
  void *v14; // rcx
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v5 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
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
      goto LABEL_26;
    }
    if ( *(_DWORD *)(a1 + 40) >= 0x7FFFFFFFu )
      v8 = -2147024882;
    if ( v8 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v17);
      v8 = 0;
      v9 = *(_DWORD *)(a1 + 44);
      if ( *(_DWORD *)(a1 + 40) + 1 <= v9 )
        goto LABEL_15;
      v10 = v9 + (v9 >> 1);
      if ( v9 + 1 > v10 )
        v10 = v9 + 1;
      v8 = Windows::Foundation::Collections::Internal::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>::ResizeStorage(
             a1,
             v10);
      if ( v8 >= 0 )
      {
LABEL_15:
        v11 = *(_DWORD *)(a1 + 40);
        if ( a2 < v11 )
        {
          v12 = *(_QWORD *)(a1 + 56);
          v13 = 8LL * (v11 - a2);
          v14 = (void *)(v12 + 8LL * (a2 + 1));
          if ( v13 )
          {
            if ( !v14 || !(v12 + 8LL * a2) )
            {
              *(_DWORD *)_o__errno(v14, v12) = 22;
LABEL_22:
              invalid_parameter_noinfo();
              v8 = -2147418113;
              RoOriginateError(2147549183LL, 0LL);
              goto LABEL_24;
            }
            if ( 8 * (unsigned __int64)(*(_DWORD *)(a1 + 44) - a2 - 1) < v13 )
            {
              *(_DWORD *)_o__errno(v14, v12) = 34;
              goto LABEL_22;
            }
            memmove(v14, (const void *)(v12 + 8LL * a2), v13);
          }
        }
LABEL_24:
        if ( v8 >= 0 )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a2) = v5;
          v5 = 0LL;
          ++*(_DWORD *)(a1 + 40);
          ++*(_DWORD *)(a1 + 88);
        }
      }
    }
  }
LABEL_26:
  if ( v16[0] )
  {
    if ( *(_DWORD *)v16[0] == 1 )
      *(_DWORD *)(v16[0] + 8LL) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v16[0] + 8LL));
  }
  if ( v8 >= 0 )
    v8 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,0,0,0>::RaiseEvent();
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v8;
}
