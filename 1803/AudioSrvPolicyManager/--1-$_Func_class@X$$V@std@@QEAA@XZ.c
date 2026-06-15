/*
 * XREFs of ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18000B028
 * Callers:
 *     _QueueGenericWorkItem_::_1_::dtor$0 @ 0x1800378C6 (_QueueGenericWorkItem_--_1_--dtor$0.c)
 *     _QueueGenericWorkItem_::_1_::dtor$4 @ 0x1800378F4 (_QueueGenericWorkItem_--_1_--dtor$4.c)
 *     _CGenericWorkItem::CGenericWorkItem_::_1_::dtor$0 @ 0x180037939 (_CGenericWorkItem--CGenericWorkItem_--_1_--dtor$0.c)
 *     _CGenericWorkItem::CGenericWorkItem_::_1_::dtor$15 @ 0x1800379AA (_CGenericWorkItem--CGenericWorkItem_--_1_--dtor$15.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,>::~_Func_class<void,>(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
