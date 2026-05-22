/*
 * XREFs of ??1?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180067F2C
 * Callers:
 *     _Edges::AddOrUpdate_::_1_::dtor$5 @ 0x1800E700A (_Edges--AddOrUpdate_--_1_--dtor$5.c)
 *     _Edges::AddOrUpdate_::_1_::dtor$5_0 @ 0x1800E7058 (_Edges--AddOrUpdate_--_1_--dtor$5_0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::~ComPtr<EdgyControllerClientProxy>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (**(__int64 (__fastcall ***)(__int64))(result + 16))(result + 16);
  }
  return result;
}
