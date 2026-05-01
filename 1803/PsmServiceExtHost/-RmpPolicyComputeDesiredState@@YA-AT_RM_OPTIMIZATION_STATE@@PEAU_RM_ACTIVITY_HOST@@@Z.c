/*
 * XREFs of ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DB50
 * Callers:
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DAA0 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024CF0 (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002DC44 (-RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsJobFrozen@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DC64 (-RmpActivityHostIsJobFrozen@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002DCD4 (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostComputeDesiredPsmAndSwapState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002DCFC (-HampHostComputeDesiredPsmAndSwapState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002DE24 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18002DEA8 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 */

__int64 __fastcall RmpPolicyComputeDesiredState(__int64 a1)
{
  unsigned int v2; // ebx
  bool v3; // zf
  int v4; // eax
  unsigned int IsJobFrozen; // eax
  int v6; // esi
  unsigned int v8; // eax
  __int64 v9; // rbp
  int v10; // eax
  int v11; // edx

  if ( (*(_BYTE *)(a1 + 804) & 1) != 0 )
  {
    v8 = HampHostComputeDesiredPsmAndSwapState(a1 + 64);
    v3 = *(_QWORD *)(a1 + 640) == 0LL;
    v2 = v8;
  }
  else
  {
    v2 = 0;
    v3 = RmpActivityHostGetResourceSetCount((struct _RM_ACTIVITY_HOST *)a1, 3u) == 0;
  }
  if ( !v3 )
  {
    v4 = *(_DWORD *)(a1 + 624);
    if ( v4 != 2 )
    {
      if ( v4 == 4 )
      {
        if ( (*(_BYTE *)(a1 + 1152) & 2) != 0 )
          v2 |= 0x40u;
      }
      else if ( v4 != 8 )
      {
        return v2;
      }
    }
    if ( (*(_BYTE *)(a1 + 804) & 1) != 0 )
    {
      v6 = (v2 >> 3) & 1;
    }
    else
    {
      IsJobFrozen = RmpActivityHostIsJobFrozen((struct _RM_ACTIVITY_HOST *)a1);
      v6 = RmpActivityHostIsRunnable((struct _RM_ACTIVITY_HOST *)a1, IsJobFrozen) == 0;
    }
    if ( v6 )
    {
      v9 = *(_QWORD *)(a1 + 48) + 424LL;
      v10 = RmpPolicyComputeDesiredEmptyState(v9, a1, 0LL);
      v11 = v2 | 8;
      if ( (*(_DWORD *)(a1 + 804) & 1) != 0 )
        v11 = v2;
      v2 = RmpPolicyGetDesiredEmptyOptimizationsForHost(v9, a1) | v11 | v10;
      if ( RmpPolicyIsHostCommitSaveEligible((struct _RM_POLICY *)v9, (struct _RM_ACTIVITY_HOST *)a1, v6 ^ 1) )
        v2 ^= ((unsigned __int8)v2 ^ (unsigned __int8)(8 * *(_DWORD *)(v9 + 108))) & 0x10;
    }
  }
  return v2;
}
