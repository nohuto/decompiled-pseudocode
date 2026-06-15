/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_6721409c6d8d6be39a12e154768b61d2___ @ 0x1800C7CA4
 * Callers:
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x180095EDC (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800B2F68 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x1800999C0 (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 */

_QWORD *__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_6721409c6d8d6be39a12e154768b61d2___(
        __int64 a1,
        char *a2,
        char *a3)
{
  char *v4; // rdi
  _QWORD *i; // r14
  char *j; // rsi
  __int64 v7; // rax
  _QWORD *result; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  for ( i = (_QWORD *)a1; v4 != a3; v4 += 8 )
  {
    if ( lambda_ce21942885de90a1a6198292e021f395_::operator()(a1, v4) )
      break;
  }
  if ( v4 != a3 )
  {
    for ( j = v4 + 8; j != a3; j += 8 )
    {
      if ( !lambda_ce21942885de90a1a6198292e021f395_::operator()(a1, j) )
      {
        v7 = 0LL;
        if ( &v9 != j )
        {
          v7 = *(_QWORD *)j;
          *(_QWORD *)j = 0LL;
        }
        a1 = *(_QWORD *)v4;
        *(_QWORD *)v4 = v7;
        if ( a1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        v4 += 8;
      }
    }
  }
  result = i;
  *i = v4;
  return result;
}
