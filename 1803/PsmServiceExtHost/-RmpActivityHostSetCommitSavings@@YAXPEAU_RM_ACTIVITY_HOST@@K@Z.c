/*
 * XREFs of ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180054B88
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180009D04 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000AC4C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180013630 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 */

void __fastcall RmpActivityHostSetCommitSavings(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  int v3; // edx
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v4) = a2;
  RmHamHostActOnProcesses(
    a1,
    8193,
    1,
    (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostCommitSavingsCallback,
    &v4);
  v3 = v4;
  *((_DWORD *)a1 + 289) ^= (*((_DWORD *)a1 + 289) ^ (16 * v4)) & 0x10;
  if ( !v3 )
    *((_DWORD *)a1 + 288) &= ~0x10u;
}
