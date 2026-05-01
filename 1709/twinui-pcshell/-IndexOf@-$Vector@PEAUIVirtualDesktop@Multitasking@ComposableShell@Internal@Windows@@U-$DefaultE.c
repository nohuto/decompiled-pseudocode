/*
 * XREFs of ?IndexOf@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@25@PEAIPEAE@Z @ 0x180196180
 * Callers:
 *     <none>
 * Callees:
 *     ?IndexOfInternal@?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@5@IPEAU67895@PEAIPEAE@Z @ 0x180196018 (-IndexOfInternal@-$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U-$DefaultE.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E3058 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::IndexOf(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int *a3,
        _BYTE *a4)
{
  unsigned int *v5; // r12
  __int64 (__fastcall ****v7)(_QWORD, GUID *, __int64 *); // r15
  unsigned int v8; // esi
  _DWORD *v9; // r14
  RTL_SRWLOCK *v10; // rbx
  int v11; // ebp
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // r12
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp+10h]

  v18 = a2;
  v5 = a3;
  *a3 = 0;
  *a4 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = (_DWORD *)(a1 + 72);
  v10 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( SLODWORD(v10->Ptr) >= 0 )
      ++LODWORD(v10->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
    a2 = v18;
  }
  v11 = 0;
  if ( *(_DWORD *)(a1 + 48) )
  {
    v13 = 8LL * *(unsigned int *)(a1 + 40);
    if ( !is_mul_ok(*(unsigned int *)(a1 + 40), 8uLL) )
      v13 = -1LL;
    v7 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))operator new[](
                                                                 v13,
                                                                 (const struct std::nothrow_t *)&std::nothrow);
    if ( v7 )
    {
      v14 = 0LL;
      if ( *(_DWORD *)(a1 + 40) )
      {
        v11 = 0;
        do
        {
          v12 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v14);
          v7[v14] = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v12;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          ++v8;
          v14 = (unsigned int)(v14 + 1);
        }
        while ( (unsigned int)v14 < *(_DWORD *)(a1 + 40) );
      }
      v5 = a3;
    }
    else
    {
      v11 = -2147024882;
    }
  }
  else
  {
    v11 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::IndexOfInternal(
            a1,
            *(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(a1 + 56),
            *(_DWORD *)(a1 + 40),
            a2,
            v5,
            a4);
  }
  if ( *v9 == 1 )
    --LODWORD(v10->Ptr);
  else
    ReleaseSRWLockShared(v10);
  if ( v11 >= 0 )
  {
    if ( !v8 )
      goto LABEL_28;
    v11 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::IndexOfInternal(
            v12,
            v7,
            v8,
            v18,
            v5,
            a4);
  }
  if ( v8 )
  {
    v15 = v7;
    v16 = v8;
    do
    {
      if ( *v15 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 16LL))(*v15);
        *v15 = 0LL;
      }
      ++v15;
      --v16;
    }
    while ( v16 );
  }
LABEL_28:
  operator delete(v7);
  return (unsigned int)v11;
}
