/*
 * XREFs of ??_G?$XamlExplorerHostWindowCreatedCallback@V_lambda_4d9498deded80cfab1ff9f78bf19bcab_@@@@UEAAPEAXI@Z @ 0x180131940
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4d9498deded80cfab1ff9f78bf19bcab_::__lambda_4d9498deded80cfab1ff9f78bf19bcab_ @ 0x18012E450 (_lambda_4d9498deded80cfab1ff9f78bf19bcab_--__lambda_4d9498deded80cfab1ff9f78bf19bcab_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall XamlExplorerHostWindowCreatedCallback<_lambda_4d9498deded80cfab1ff9f78bf19bcab_>::`scalar deleting destructor'(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx

  lambda_4d9498deded80cfab1ff9f78bf19bcab_::__lambda_4d9498deded80cfab1ff9f78bf19bcab_(Block + 5);
  *((_DWORD *)Block + 9) = -1073741823;
  v4 = Block[2];
  if ( v4 )
  {
    Block[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
