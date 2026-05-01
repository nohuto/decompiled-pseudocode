/*
 * XREFs of _lambda_7e172f12ff20f7d48d0a79092595c49c_::__lambda_7e172f12ff20f7d48d0a79092595c49c_ @ 0x18016DBB4
 * Callers:
 *     _XamlAltTabViewHost::Show_::_1_::dtor$6 @ 0x1801F3CA1 (_XamlAltTabViewHost--Show_--_1_--dtor$6.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_7e172f12ff20f7d48d0a79092595c49c_::__lambda_7e172f12ff20f7d48d0a79092595c49c_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = a1[4];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v4 = a1[3];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = a1[2];
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return result;
}
