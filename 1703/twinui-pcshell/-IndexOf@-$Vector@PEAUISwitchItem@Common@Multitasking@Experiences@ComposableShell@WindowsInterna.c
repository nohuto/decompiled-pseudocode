/*
 * XREFs of ?IndexOf@?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@UEAAJPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAIPEAE@Z @ 0x180162BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IndexOfInternal@?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@IPEAU6789ComposableShell@WindowsInternal@@PEAIPEAE@Z @ 0x180162A5C (-IndexOfInternal@-$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Window.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180162E38 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194F9C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>::IndexOf(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int *a3,
        _BYTE *a4)
{
  __int64 (__fastcall ****v8)(_QWORD, GUID *, __int64 *); // r14
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // edi
  unsigned __int64 v14; // rax
  __int64 v15; // rbp
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 v20[3]; // [rsp+38h] [rbp-40h] BYREF
  int v21; // [rsp+80h] [rbp+8h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  XWinRT::SerializingLockPolicy::Read(v20, a1 + 72, &v21);
  v12 = -1LL;
  v13 = v21;
  if ( v21 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      v14 = 8LL * *(unsigned int *)(a1 + 40);
      if ( !is_mul_ok(*(unsigned int *)(a1 + 40), 8uLL) )
        v14 = -1LL;
      v8 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))operator new[](
                                                                   v14,
                                                                   (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        v15 = 0LL;
        if ( *(_DWORD *)(a1 + 40) )
        {
          v13 = 0;
          do
          {
            v16 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 56) + 8 * v15);
            v8[v15] = v16;
            if ( v16 )
              ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v16)[1])(v16);
            v9 = (unsigned int)(v9 + 1);
            v15 = (unsigned int)(v15 + 1);
          }
          while ( (unsigned int)v15 < *(_DWORD *)(a1 + 40) );
        }
      }
      else
      {
        v13 = -2147024882;
      }
    }
    else
    {
      v13 = Windows::Foundation::Collections::Internal::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>::IndexOfInternal(
              v11,
              *(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(a1 + 56),
              *(_DWORD *)(a1 + 40),
              a2,
              a3,
              a4);
    }
    v12 = -1LL;
  }
  v17 = v20[0];
  if ( v20[0] )
  {
    if ( *(_DWORD *)v20[0] == 1 )
      --*(_DWORD *)(v20[0] + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v20[0] + 8));
    v20[0] = 0LL;
  }
  if ( v13 >= 0 )
  {
    if ( !(_DWORD)v9 )
      goto LABEL_27;
    v13 = Windows::Foundation::Collections::Internal::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>::IndexOfInternal(
            v17,
            v8,
            v9,
            a2,
            a3,
            a4);
  }
  if ( (_DWORD)v9 )
  {
    v18 = v8;
    do
    {
      if ( *v18 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v18 + 16LL))(*v18, v10, v12);
        *v18 = 0LL;
      }
      ++v18;
      --v9;
    }
    while ( v9 );
  }
LABEL_27:
  operator delete(v8);
  return (unsigned int)v13;
}
