/*
 * XREFs of _lambda_fa0e79952f59bb2c7a7313aae2613e96_::operator() @ 0x18016AB2C
 * Callers:
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x18016BFF4 (-InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_fa0e79952f59bb2c7a7313aae2613e96_::operator()(_QWORD **a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 176LL))(a2, **a1);
  return result;
}
