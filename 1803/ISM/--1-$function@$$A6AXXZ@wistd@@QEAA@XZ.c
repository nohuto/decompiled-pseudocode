/*
 * XREFs of ??1?$function@$$A6AXXZ@wistd@@QEAA@XZ @ 0x1800152C8
 * Callers:
 *     _wil::details_abi::RecordWnfUsageIndex_::_1_::dtor$7 @ 0x1800E3DCF (_wil--details_abi--RecordWnfUsageIndex_--_1_--dtor$7.c)
 *     _MPCHeadUpdateListener::Initialize_::_1_::dtor$0 @ 0x1800E6C04 (_MPCHeadUpdateListener--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<void (void)>::~function<void (void)>(__int64 a1, __int64 a2)
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
