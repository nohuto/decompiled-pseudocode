/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@EEAAXXZ @ 0x180098A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count_obj<SpatialInputControllerCollection::AsynchronousWorkItem>::_Destroy(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 result; // rax
  volatile signed __int32 *v6; // rbx
  signed __int32 v7; // eax
  bool v8; // zf

  v2 = a1 + 32;
  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  v6 = *(volatile signed __int32 **)(a1 + 24);
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF);
    v8 = v7 == 1;
    result = (unsigned int)(v7 - 1);
    if ( v8 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return result;
}
