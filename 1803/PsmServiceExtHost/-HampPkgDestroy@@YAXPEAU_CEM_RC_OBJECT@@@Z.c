/*
 * XREFs of ?HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800331D0
 * Callers:
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x18003320C (-HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z.c)
 */

void __fastcall HampPkgDestroy(struct _CEM_RC_OBJECT *a1)
{
  struct _CEM_RC_OBJECT *v2; // rcx

  HamRcNodeCleanup(a1);
  v2 = (struct _CEM_RC_OBJECT *)*((_QWORD *)a1 + 11);
  if ( v2 )
    CemRcObjectDereference(v2);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
