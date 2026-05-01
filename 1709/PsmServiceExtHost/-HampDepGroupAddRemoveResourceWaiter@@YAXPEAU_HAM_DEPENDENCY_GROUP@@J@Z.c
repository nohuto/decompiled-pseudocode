/*
 * XREFs of ?HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z @ 0x180044658
 * Callers:
 *     ?HampHostEvaluatePendState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043720 (-HampHostEvaluatePendState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A4C0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampDepGroupAddRemoveResourceWaiter(struct _HAM_DEPENDENCY_GROUP *a1, int a2)
{
  HampDepGroupAcquireLockExclusive(a1);
  *((_DWORD *)a1 + 21) += a2;
  HampDepGroupReleaseLockExclusive(a1);
}
