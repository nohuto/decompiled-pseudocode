/*
 * XREFs of ?OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x1800A4820
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_8241ab7c54b4c0e48d4fcc85deacecc3__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64___ @ 0x1800A956C (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_8241ab7c54b4c0e48d4fcc85deacecc3__Windo.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnFocusNavigate(__int64 a1, int a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  volatile signed __int32 *v7; // rdi
  volatile signed __int32 **v8; // r14
  RTL_SRWLOCK *v9; // rsi
  _QWORD *v10; // [rsp+20h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-20h]
  __int128 v12; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v13; // [rsp+90h] [rbp+40h]
  RTL_SRWLOCK *v14; // [rsp+98h] [rbp+48h] BYREF

  if ( *(_QWORD *)(a1 + 48) && *(_BYTE *)(a1 + 40) )
  {
    v4 = 0LL;
    v13 = 0LL;
    v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( v5 )
    {
      v5[3] = 1LL;
      *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs>::`vftable'{for `Windows::Internal::Shell::Experience::IFocusNavigateEventArgs'};
      v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_DWORD *)v6 + 8) = a2;
      *v6 = off_180202998;
      v4 = v6;
      v13 = v6;
      v6[1] = off_1802029D8;
    }
    v7 = 0LL;
    v14 = *(RTL_SRWLOCK **)(a1 + 48);
    v10 = v4;
    v8 = (volatile signed __int32 **)&v14[24];
    *(_QWORD *)&v11 = &v14;
    v9 = v14 + 25;
    *((_QWORD *)&v11 + 1) = &v10;
    AcquireSRWLockExclusive(v14 + 25);
    if ( *v8 )
    {
      v7 = *v8;
      _InterlockedIncrement(*v8 + 3);
      v4 = v13;
    }
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    if ( v7 )
    {
      v12 = v11;
      Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_8241ab7c54b4c0e48d4fcc85deacecc3__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64___(
        &v12,
        v7,
        v8);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      v4 = v13;
    }
    if ( v4 )
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  }
}
