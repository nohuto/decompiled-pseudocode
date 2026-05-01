/*
 * XREFs of ?HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180046050
 * Callers:
 *     <none>
 * Callees:
 *     ?HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@1@Z @ 0x180046ECC (-HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@.c)
 *     CemRcObjectCleanup @ 0x1800492B8 (CemRcObjectCleanup.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 */

void __fastcall HampAppDestroy(struct _CEM_RC_OBJECT *a1)
{
  __int64 v1; // r8
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx

  v1 = *((unsigned int *)a1 + 148);
  if ( (_DWORD)v1 != 4 )
    HampPkgUpdateApplicationStateCounters(*((_QWORD *)a1 + 6), 4LL, v1);
  CemRcObjectCleanup(a1);
  v6 = *((_QWORD *)a1 + 6);
  if ( v6 )
    CemRcObjectDereference(v6, v3, v4, v5);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
