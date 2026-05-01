/*
 * XREFs of ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180046570
 * Callers:
 *     <none>
 * Callees:
 *     ?HampPkgDisableServicing@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180046790 (-HampPkgDisableServicing@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcObjectCleanup @ 0x1800492B8 (CemRcObjectCleanup.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 */

void __fastcall HampClientPkgDestroy(struct _HAM_PACKAGE **a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  CemRcObjectCleanup(a1);
  if ( ((_BYTE)a1[8] & 1) != 0 )
    HampPkgDisableServicing(a1[7]);
  CemRcObjectDereference(a1[7], v2, v3, v4);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
