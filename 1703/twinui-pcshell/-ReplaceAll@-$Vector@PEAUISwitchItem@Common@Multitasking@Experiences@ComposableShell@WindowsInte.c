/*
 * XREFs of ?ReplaceAll@?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180161620
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18016245C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801624C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180162534 (-RaiseEvent@-$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned int v4; // r14d
  int v8; // edi
  __int64 v9; // rbp
  _QWORD *v10; // rdi
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rcx
  unsigned int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // r14
  __int64 v18[7]; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0;
  v3 = 0LL;
  v4 = 0;
  if ( a2 )
  {
    v3 = malloc(8LL * a2);
    if ( !v3 )
      return (unsigned int)-2147024882;
    v4 = a2;
  }
  v9 = 0LL;
  if ( v4 )
  {
    v19 = 0;
    v10 = v3;
    v11 = a3 - (_QWORD)v3;
    v9 = v4;
    v12 = v4;
    do
    {
      v13 = *(_QWORD *)((char *)v10 + v11);
      *v10 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      ++v10;
      --v12;
    }
    while ( v12 );
  }
  XWinRT::SerializingLockPolicy::Write(v18, a1 + 72, &v19);
  v8 = v19;
  if ( v19 >= 0 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v19, *(unsigned __int8 *)(a1 + 93), a1 + 96);
    v14 = *(_DWORD *)(a1 + 40);
    v8 = 0;
    *(_DWORD *)(a1 + 40) = v9;
    v9 = v14;
    *(_DWORD *)(a1 + 44) = v4;
    *(_DWORD *)(a1 + 48) = 0;
    v15 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v3;
    v3 = v15;
    ++*(_DWORD *)(a1 + 88);
  }
  if ( v18[0] )
  {
    if ( *(_DWORD *)v18[0] == 1 )
      *(_DWORD *)(v18[0] + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v18[0] + 8));
    v18[0] = 0LL;
  }
  if ( v3 )
  {
    if ( (_DWORD)v9 )
    {
      v16 = v3;
      do
      {
        if ( *v16 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 16LL))(*v16);
          *v16 = 0LL;
        }
        ++v16;
        --v9;
      }
      while ( v9 );
    }
    free(v3);
  }
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,0,0,0>::RaiseEvent(
                           (unsigned __int8)v19,
                           *(unsigned __int8 *)(a1 + 92),
                           a1,
                           0LL,
                           0);
  return (unsigned int)v8;
}
