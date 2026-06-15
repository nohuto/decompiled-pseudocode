/*
 * XREFs of ??1?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ @ 0x180006F14
 * Callers:
 *     _wil::details_abi::RecordWnfUsageIndex_::_1_::dtor$7 @ 0x180036531 (_wil--details_abi--RecordWnfUsageIndex_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, a2);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  return result;
}
