/*
 * XREFs of VrpDestroyNamespaceNodeList @ 0x1406A5CD8
 * Callers:
 *     VrpCleanupNamespace @ 0x1406A30B8 (VrpCleanupNamespace.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ULongLongMult @ 0x1401E5E10 (ULongLongMult.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VrpDestroyNamespaceNode @ 0x1406A5A34 (VrpDestroyNamespaceNode.c)
 */

void *__fastcall VrpDestroyNamespaceNodeList(ULONGLONG *a1)
{
  ULONGLONG i; // rax
  ULONGLONG v3; // rcx
  __int64 *v4; // rdx
  void *v5; // rcx
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  for ( i = a1[6]; i; i = a1[6] )
  {
    if ( ULongLongMult(a1[5], 0LL, &pullResult) < 0
      || (v3 = a1[9], v4 = (__int64 *)(v3 + pullResult), v3 + pullResult < v3) )
    {
      v4 = 0LL;
    }
    VrpDestroyNamespaceNode(a1, *v4);
  }
  v5 = (void *)a1[9];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72615452u);
  return memset(a1 + 4, 0, 0x30uLL);
}
