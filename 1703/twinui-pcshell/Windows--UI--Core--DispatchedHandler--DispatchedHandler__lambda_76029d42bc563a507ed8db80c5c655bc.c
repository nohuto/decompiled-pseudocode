/*
 * XREFs of Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_76029d42bc563a507ed8db80c5c655bc___ @ 0x180130D00
 * Callers:
 *     ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x18012C720 (-DestroyInternal@MonitorFrame@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_76029d42bc563a507ed8db80c5c655bc___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rcx

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
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*a2);
    v6 = a2[1];
    *v4 = &off_180240B20;
    a1[6] = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    a1[7] = v6;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  a1[37] = v4;
  v7 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return a1;
}
