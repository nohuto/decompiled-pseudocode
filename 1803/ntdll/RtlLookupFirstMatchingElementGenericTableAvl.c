/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x1800888C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800674E0 @ 0x1800674E0 (sub_1800674E0.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

PVOID __cdecl RtlLookupFirstMatchingElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer, PVOID *RestartKey)
{
  _RTL_BALANCED_LINKS *RightChild; // rbx
  int v7; // eax
  _RTL_BALANCED_LINKS *v8; // rsi
  _RTL_BALANCED_LINKS *v9; // rax

  *RestartKey = 0LL;
  if ( !Table->NumberGenericTableElements )
    return 0LL;
  RightChild = Table->BalancedRoot.RightChild;
  while ( 1 )
  {
    v7 = ((__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID, _RTL_BALANCED_LINKS *))Table->CompareRoutine)(
           Table,
           Buffer,
           &RightChild[1]);
    if ( v7 )
      break;
    RightChild = RightChild->LeftChild;
LABEL_8:
    if ( !RightChild )
      return 0LL;
  }
  if ( v7 == 1 )
  {
    RightChild = RightChild->RightChild;
    goto LABEL_8;
  }
  do
  {
    v8 = RightChild;
    v9 = (_RTL_BALANCED_LINKS *)sub_1800674E0(RightChild);
    RightChild = v9;
  }
  while ( v9
       && ((unsigned int (__fastcall *)(PRTL_AVL_TABLE, PVOID, _RTL_BALANCED_LINKS *))Table->CompareRoutine)(
            Table,
            Buffer,
            &v9[1]) == 2 );
  *RestartKey = v8;
  return &v8[1];
}
