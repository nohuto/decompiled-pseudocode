/*
 * XREFs of ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x1800A4B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A52A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 *     Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&___ptr64_ @ 0x1800A8270 (Microsoft--WRL--Details--Make__CortanaExperienceManagerNotification--OnShown_--_2_--CCortanaShow.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_8241ab7c54b4c0e48d4fcc85deacecc3__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64___ @ 0x1800A956C (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_8241ab7c54b4c0e48d4fcc85deacecc3__Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnShown(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdi
  RTL_SRWLOCK *v4; // rax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 **v6; // r14
  RTL_SRWLOCK *v7; // rsi
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-20h]
  __int128 v10; // [rsp+40h] [rbp-10h] BYREF
  __int64 v11; // [rsp+90h] [rbp+40h] BYREF
  RTL_SRWLOCK *v12; // [rsp+98h] [rbp+48h] BYREF

  if ( *(_QWORD *)(a1 + 48) && *(_BYTE *)(a1 + 40) )
  {
    v2 = (__int64 *)Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_____ptr64_(&v11);
    v3 = *v2;
    *v2 = 0LL;
    if ( v11 )
    {
      v11 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release();
    }
    v4 = *(RTL_SRWLOCK **)(a1 + 48);
    v5 = 0LL;
    v12 = v4;
    v8 = v3;
    v6 = (volatile signed __int32 **)&v4[6];
    *(_QWORD *)&v9 = &v12;
    v7 = v4 + 7;
    *((_QWORD *)&v9 + 1) = &v8;
    AcquireSRWLockExclusive(v4 + 7);
    if ( *v6 )
    {
      v5 = *v6;
      _InterlockedIncrement(*v6 + 3);
    }
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    if ( v5 )
    {
      v10 = v9;
      Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_8241ab7c54b4c0e48d4fcc85deacecc3__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64___(
        &v10,
        v5,
        v6);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
