/*
 * XREFs of _lambda_595b6875358bb48b4963d1a32745e1c2_::__lambda_595b6875358bb48b4963d1a32745e1c2_ @ 0x180141588
 * Callers:
 *     _XamlSnapAssistViewHost::Show_::_1_::dtor$13 @ 0x1801A382D (_XamlSnapAssistViewHost--Show_--_1_--dtor$13.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_595b6875358bb48b4963d1a32745e1c2_::__lambda_595b6875358bb48b4963d1a32745e1c2_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = a1[5];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v4 = a1[4];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = a1[3];
  if ( v5 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = a1[2];
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return result;
}
