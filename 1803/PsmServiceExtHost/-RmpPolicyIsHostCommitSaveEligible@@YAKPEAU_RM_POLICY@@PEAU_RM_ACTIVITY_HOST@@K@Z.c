/*
 * XREFs of ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002DE24
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001A400 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DB50 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18002DEA8 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 */

__int64 __fastcall RmpPolicyIsHostCommitSaveEligible(struct _RM_POLICY *a1, struct _RM_ACTIVITY_HOST *a2, int a3)
{
  BOOL v4; // eax
  BOOL v5; // ebx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // r11d

  v4 = (*((_BYTE *)a2 + 1056) & 8) == 0 && (*((_BYTE *)a2 + 1058) & 8) == 0 && a3 == 0;
  v5 = 0;
  if ( (*((_WORD *)a2 + 732) & 0x200) == 0 )
    v5 = v4;
  v6 = ~(*((_DWORD *)a2 + 288) >> 3) & v5;
  if ( v6 )
  {
    v7 = RmpPolicyComputeDesiredEmptyState(a1, a2, 2LL);
    if ( ((unsigned __int8)v7 & (unsigned __int8)*((_DWORD *)a2 + 289) & 0x27) == v7 )
      return v6;
    return v8;
  }
  return v6;
}
