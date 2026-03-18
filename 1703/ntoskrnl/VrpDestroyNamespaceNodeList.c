/*
 * XREFs of VrpDestroyNamespaceNodeList @ 0x14067B510
 * Callers:
 *     VrpCleanupNamespace @ 0x14067909C (VrpCleanupNamespace.c)
 * Callees:
 *     ULongLongMult @ 0x1401E1D04 (ULongLongMult.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     VrpDestroyNamespaceNode @ 0x14067B280 (VrpDestroyNamespaceNode.c)
 */

void *__fastcall VrpDestroyNamespaceNodeList(ULONGLONG *a1)
{
  ULONGLONG i; // rax
  __int64 *v3; // rdx
  void *v4; // rcx
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  for ( i = a1[6]; i; i = a1[6] )
  {
    if ( ULongLongMult(a1[5], 0LL, &pullResult) < 0
      || (v3 = (__int64 *)(a1[9] + pullResult), (unsigned __int64)v3 < a1[9]) )
    {
      v3 = 0LL;
    }
    VrpDestroyNamespaceNode(a1, *v3);
  }
  v4 = (void *)a1[9];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72615452u);
  return memset(a1 + 4, 0, 0x30uLL);
}
