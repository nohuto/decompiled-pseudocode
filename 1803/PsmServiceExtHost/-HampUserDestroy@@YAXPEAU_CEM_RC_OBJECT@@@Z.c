/*
 * XREFs of ?HampUserDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180035380
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x18003320C (-HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z.c)
 */

void __fastcall HampUserDestroy(struct _CEM_RC_OBJECT *a1)
{
  struct _CEM_RC_OBJECT *v2; // rcx

  HamRcNodeCleanup(a1);
  v2 = (struct _CEM_RC_OBJECT *)*((_QWORD *)a1 + 20);
  if ( v2 )
    CemRcObjectDereference(v2);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
