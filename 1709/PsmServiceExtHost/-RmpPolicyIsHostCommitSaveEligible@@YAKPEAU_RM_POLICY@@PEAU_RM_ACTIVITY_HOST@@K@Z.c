/*
 * XREFs of ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800184E4
 * Callers:
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015900 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x180018568 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 */

__int64 __fastcall RmpPolicyIsHostCommitSaveEligible(struct _RM_POLICY *a1, struct _RM_ACTIVITY_HOST *a2, int a3)
{
  bool v4; // dl
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // r11d

  v4 = (*((_BYTE *)a2 + 864) & 8) == 0 && (*((_BYTE *)a2 + 866) & 8) == 0 && a3 == 0;
  v5 = *(_DWORD *)&v4 & ~(*((_DWORD *)a2 + 252) >> 3) & ((unsigned __int16)~*((_WORD *)a2 + 660) >> 9);
  if ( v5 )
  {
    v6 = RmpPolicyComputeDesiredEmptyState(a1, a2, 2LL);
    LOBYTE(v7) = ((unsigned __int8)v6 & (unsigned __int8)*((_DWORD *)a2 + 253) & 0x27) == v6;
    v5 &= v7;
  }
  return v5;
}
