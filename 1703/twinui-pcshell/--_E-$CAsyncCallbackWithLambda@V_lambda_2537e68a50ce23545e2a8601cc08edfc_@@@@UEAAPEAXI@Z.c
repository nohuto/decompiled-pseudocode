/*
 * XREFs of ??_E?$CAsyncCallbackWithLambda@V_lambda_2537e68a50ce23545e2a8601cc08edfc_@@@@UEAAPEAXI@Z @ 0x1800E1500
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CAsyncCallbackWithLambda<_lambda_2537e68a50ce23545e2a8601cc08edfc_>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  __int64 v3; // rcx

  Block[9] = -1073741823;
  v3 = *((_QWORD *)Block + 3);
  if ( v3 )
  {
    *((_QWORD *)Block + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
