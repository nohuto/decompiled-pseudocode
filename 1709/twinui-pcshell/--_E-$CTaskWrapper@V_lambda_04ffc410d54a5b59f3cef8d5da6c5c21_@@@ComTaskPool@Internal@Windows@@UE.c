/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_04ffc410d54a5b59f3cef8d5da6c5c21_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18001CAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_04ffc410d54a5b59f3cef8d5da6c5c21_>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx

  v4 = Block[3];
  if ( v4 )
  {
    Block[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
