/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_9d1d8d58343981d67c57f7f39dcd56a0_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801103D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_9d1d8d58343981d67c57f7f39dcd56a0_>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  volatile signed __int32 *v2; // rbx

  v2 = (volatile signed __int32 *)Block[4];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
