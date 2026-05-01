/*
 * XREFs of ?HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180046750
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectCleanup @ 0x1800492B8 (CemRcObjectCleanup.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 */

void __fastcall HampPkgDestroy(struct _CEM_RC_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  v5 = *((_QWORD *)a1 + 31);
  if ( v5 )
    CemRcObjectDereference(v5, a2, a3, a4);
  CemRcObjectCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
