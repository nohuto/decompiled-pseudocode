/*
 * XREFs of ?HampManagerRemoveDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001A528
 * Callers:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001ABE8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180018FF8 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180019038 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampManagerRemoveDependencyGroup(struct _HOST_ACTIVITY_MANAGER *a1)
{
  __int64 v2; // rbx

  HampManagerAcquireLockExclusive(a1);
  v2 = --*((_QWORD *)a1 + 28);
  HampManagerReleaseLockExclusive(a1);
  if ( !v2 )
    RtlWakeAddressAll((char *)a1 + 224);
}
