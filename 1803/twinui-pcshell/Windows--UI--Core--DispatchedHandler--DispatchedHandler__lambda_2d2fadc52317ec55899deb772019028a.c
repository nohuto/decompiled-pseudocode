/*
 * XREFs of Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_2d2fadc52317ec55899deb772019028a___ @ 0x180202608
 * Callers:
 *     ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x18020A708 (-DestroyInternal@MonitorFrame@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1801FA548 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_ @ 0x18027BA6C (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_2d2fadc52317ec55899deb772019028a___(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rbx
  __int64 *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v9; // [rsp+28h] [rbp-30h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Core::DispatchedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Core::DispatchedHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  v9 = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    v5 = (__int64 *)lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_(&v9, a2);
    *v4 = &off_180431E40;
    lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_(a1 + 6, v5);
    v6 = *v5;
    if ( *v5 )
    {
      *v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
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
