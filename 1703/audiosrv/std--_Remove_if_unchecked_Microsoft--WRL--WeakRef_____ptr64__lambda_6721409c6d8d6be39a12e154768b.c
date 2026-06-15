/*
 * XREFs of std::_Remove_if_unchecked_Microsoft::WRL::WeakRef_____ptr64__lambda_6721409c6d8d6be39a12e154768b61d2___ @ 0x1800A4A20
 * Callers:
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x18007A060 (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     _lambda_6721409c6d8d6be39a12e154768b61d2_::operator() @ 0x18007CE18 (_lambda_6721409c6d8d6be39a12e154768b61d2_--operator().c)
 */

__int64 *__fastcall std::_Remove_if_unchecked_Microsoft::WRL::WeakRef_____ptr64__lambda_6721409c6d8d6be39a12e154768b61d2___(
        __int64 a1,
        __int64 *a2)
{
  __int64 *i; // rbx
  __int64 *j; // rdi
  __int64 *v5; // rdx
  __int64 v6; // rax
  char v8; // [rsp+40h] [rbp+18h] BYREF

  for ( i = (__int64 *)a1; i != a2; ++i )
  {
    if ( lambda_6721409c6d8d6be39a12e154768b61d2_::operator()(a1, i) )
      break;
  }
  if ( i != a2 )
  {
    for ( j = i + 1; j != a2; ++j )
    {
      if ( !lambda_6721409c6d8d6be39a12e154768b61d2_::operator()(a1, j) )
      {
        v5 = i++;
        v6 = 0LL;
        if ( &v8 != (char *)j )
        {
          v6 = *j;
          *j = 0LL;
        }
        a1 = *v5;
        *v5 = v6;
        if ( a1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
      }
    }
  }
  return i;
}
