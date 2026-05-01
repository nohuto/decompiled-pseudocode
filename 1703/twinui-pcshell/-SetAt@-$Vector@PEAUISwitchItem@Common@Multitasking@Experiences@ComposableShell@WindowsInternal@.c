/*
 * XREFs of ?SetAt@?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1801611A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18016245C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801624C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180162534 (-RaiseEvent@-$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0.c)
 *     _invalid_parameter_noinfo @ 0x180194E10 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rdi
  int v7; // esi
  const void *v8; // rdx
  _QWORD v10[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v11; // [rsp+90h] [rbp+18h] BYREF
  __int64 v12; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = 0LL;
  v12 = 0LL;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  LODWORD(v11) = 0;
  XWinRT::SerializingLockPolicy::Write(v10, a1 + 72, &v11);
  v7 = v11;
  if ( (int)v11 >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 40) )
    {
      v7 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v7 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v11, *(unsigned __int8 *)(a1 + 93), a1 + 96);
      v7 = 0;
      v8 = (const void *)(*(_QWORD *)(a1 + 56) + 8 * v4);
      if ( v8 )
      {
        memmove(&v11, v8, 8uLL);
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4) = v3;
        v3 = 0LL;
        ++*(_DWORD *)(a1 + 88);
        v6 = v11;
        v12 = v11;
      }
      else
      {
        *(_DWORD *)_o__errno() = 22;
        invalid_parameter_noinfo();
        v7 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
    }
  }
  if ( v10[0] )
  {
    if ( *(_DWORD *)v10[0] == 1 )
      *(_DWORD *)(v10[0] + 8LL) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v10[0] + 8LL));
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,0,0,0>::RaiseEvent(
                           (unsigned __int8)v11,
                           *(unsigned __int8 *)(a1 + 92),
                           a1,
                           3LL,
                           v4);
  return (unsigned int)v7;
}
