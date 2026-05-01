/*
 * XREFs of ??_E?$XamlExplorerHostWindowCreatedCallback@V_lambda_439a64ed92fed00dbcb4e6e66f12d415_@@@@UEAAPEAXI@Z @ 0x18015FBA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_439a64ed92fed00dbcb4e6e66f12d415_::__lambda_439a64ed92fed00dbcb4e6e66f12d415_ @ 0x18015AA44 (_lambda_439a64ed92fed00dbcb4e6e66f12d415_--__lambda_439a64ed92fed00dbcb4e6e66f12d415_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall XamlExplorerHostWindowCreatedCallback<_lambda_439a64ed92fed00dbcb4e6e66f12d415_>::`vector deleting destructor'(
        __int64 *Block,
        char a2)
{
  __int64 v4; // rcx

  lambda_439a64ed92fed00dbcb4e6e66f12d415_::__lambda_439a64ed92fed00dbcb4e6e66f12d415_(Block + 7);
  *((_DWORD *)Block + 13) = -1073741823;
  v4 = Block[4];
  if ( v4 )
  {
    Block[4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
