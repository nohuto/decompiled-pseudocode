/*
 * XREFs of ??_E?$CDelayedOperation@V_lambda_af154e0da4f5cefd6500f7ba4b7c8077_@@@CDelayIAMOperations@@UEAAPEAXI@Z @ 0x18001AFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CDelayIAMOperations::CDelayedOperation<_lambda_af154e0da4f5cefd6500f7ba4b7c8077_>::`vector deleting destructor'(
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
  *Block = &CDelayIAMOperations::COperation::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
