/*
 * XREFs of ??_G?$CDelayedOperation@V_lambda_13c840c931e6c4b9015195fc4e60665a_@@@CDelayIAMOperations@@UEAAPEAXI@Z @ 0x18001A2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CDelayIAMOperations::CDelayedOperation<_lambda_13c840c931e6c4b9015195fc4e60665a_>::`scalar deleting destructor'(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx

  v4 = Block[2];
  if ( v4 )
  {
    Block[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *Block = &CDelayIAMOperations::COperation::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
