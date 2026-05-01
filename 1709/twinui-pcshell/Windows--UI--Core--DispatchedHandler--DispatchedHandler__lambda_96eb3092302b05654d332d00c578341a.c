/*
 * XREFs of Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_96eb3092302b05654d332d00c578341a___ @ 0x18015389C
 * Callers:
 *     ?UpdateWindowPositionInternal@XamlTaskbarProxy@@AEAAXXZ @ 0x180152994 (-UpdateWindowPositionInternal@XamlTaskbarProxy@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_96eb3092302b05654d332d00c578341a___(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-28h]

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Core::DispatchedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Core::DispatchedHandler::`vftable';
  a1[4] = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    v5 = *a2;
    v9 = *a2;
    v6 = (volatile signed __int32 *)a2[1];
    if ( v6 )
    {
      _InterlockedIncrement(v6 + 13);
      v5 = v9;
    }
    *v4 = &off_1802B37F0;
    a1[6] = v5;
    a1[7] = v6;
    if ( v6 )
    {
      _InterlockedIncrement(v6 + 13);
      if ( _InterlockedExchangeAdd(v6 + 13, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 72LL))(v6, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  a1[37] = v4;
  v7 = (volatile signed __int32 *)a2[1];
  if ( v7 )
  {
    a2[1] = 0LL;
    if ( _InterlockedExchangeAdd(v7 + 13, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 72LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return a1;
}
