/*
 * XREFs of ??1?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAA@XZ @ 0x180029AA0
 * Callers:
 *     _CGenericWorkItem::CGenericWorkItem_::_1_::dtor$2 @ 0x180037951 (_CGenericWorkItem--CGenericWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::shared_ptr<std::function<void (void)>>::~shared_ptr<std::function<void (void)>>(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return result;
}
