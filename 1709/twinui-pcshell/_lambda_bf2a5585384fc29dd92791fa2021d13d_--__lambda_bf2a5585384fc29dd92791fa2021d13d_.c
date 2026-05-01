/*
 * XREFs of _lambda_bf2a5585384fc29dd92791fa2021d13d_::__lambda_bf2a5585384fc29dd92791fa2021d13d_ @ 0x180157CC8
 * Callers:
 *     _MonitorFrame::DismissAnimated_::_1_::dtor$7 @ 0x1801F0E36 (_MonitorFrame--DismissAnimated_--_1_--dtor$7.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bf2a5585384fc29dd92791fa2021d13d____::_1_::dtor$0 @ 0x1801F193C (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_bf2a5585384fc29dd92791fa2021d13.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_bf2a5585384fc29dd92791fa2021d13d_::__lambda_bf2a5585384fc29dd92791fa2021d13d_(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1[1];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
