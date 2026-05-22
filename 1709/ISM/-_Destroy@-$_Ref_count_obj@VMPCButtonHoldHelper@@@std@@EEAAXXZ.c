/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VMPCButtonHoldHelper@@@std@@EEAAXXZ @ 0x180060A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count_obj<MPCButtonHoldHelper>::_Destroy(__int64 a1)
{
  return (**(__int64 (__fastcall ***)(__int64, _QWORD))(a1 + 16))(a1 + 16, 0LL);
}
