/*
 * XREFs of ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015900
 * Callers:
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180015680 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180016A30 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006868 (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800184E4 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x180018568 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?HampHostComputeDesiredPsmState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001A468 (-HampHostComputeDesiredPsmState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpPolicyComputeDesiredState(__int64 a1)
{
  int v1; // ebp
  unsigned int v3; // ebx
  int v4; // r15d
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  unsigned int v8; // r8d
  int v9; // r8d
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // dx
  unsigned int v12; // r14d
  int v13; // ecx
  __int64 v15; // rbp
  unsigned int v16; // edi
  unsigned int v17; // r8d
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 772) & 1) != 0 )
    v3 = HampHostComputeDesiredPsmState(a1 + 64, 0LL);
  else
    v3 = 0;
  v4 = 1;
  v5 = *(_DWORD *)(a1 + 832);
  if ( (__ROL4__(1, 1) & 3) != 0 )
    v5 += *(_DWORD *)(a1 + 856);
  if ( !v5 )
    return v3;
  v6 = *(_DWORD *)(a1 + 56);
  if ( !v6 )
  {
    v7 = *(_DWORD *)(a1 + 624);
    if ( v7 != 2 )
    {
      if ( v7 == 4 )
      {
        if ( (*(_BYTE *)(a1 + 1008) & 2) != 0 )
          v3 |= 0x40u;
      }
      else if ( v7 != 8 )
      {
        return v3;
      }
    }
  }
  v8 = *(_DWORD *)(a1 + 1012);
  if ( v6 == 1 )
  {
    v17 = v8 >> 6;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 772) & 1) == 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 56LL)
                                                                              + 200LL))(
        a1 + 552,
        *(unsigned int *)(a1 + 620),
        a1 + 88,
        *(unsigned int *)(a1 + 624),
        *(_QWORD *)(a1 + 24),
        &v18);
      v9 = v18 == 7;
      goto LABEL_11;
    }
    v17 = v8 >> 8;
  }
  v9 = v17 & 1;
LABEL_11:
  v10 = *(_WORD *)(a1 + 866);
  v11 = *(_WORD *)(a1 + 864);
  v12 = (v11 & v10 & 4) == 0 || !v9;
  v13 = v12 ^ 1;
  if ( v6 == 1 )
  {
    if ( ((v10 | v11) & 1) != 0 )
      v4 = v12 ^ 1;
    v13 = v4;
    if ( (v10 & 4) != 0 || (*(_BYTE *)(a1 + 1008) & 2) != 0 )
      v1 = 64;
    v3 = v1 | v3 & 0xFFFFFFBF;
  }
  if ( !v13 )
    return v3;
  v15 = *(_QWORD *)(a1 + 40) + 400LL;
  v16 = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(8 * *(_DWORD *)(v15 + 104))) & 8 | RmpPolicyComputeDesiredEmptyState(
                                                                                           v15,
                                                                                           a1,
                                                                                           0LL);
  if ( !v12 )
    v16 |= RmpPolicyGetDesiredEmptyOptimizationsForHost(v15, a1);
  if ( RmpPolicyIsHostCommitSaveEligible((struct _RM_POLICY *)v15, (struct _RM_ACTIVITY_HOST *)a1, v12) )
    return v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(8 * *(_DWORD *)(v15 + 108))) & 0x10;
  else
    return v16;
}
