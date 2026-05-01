/*
 * XREFs of ?HampHostComputeDesiredPsmAndSwapState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002DCFC
 * Callers:
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DB50 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006460 (-HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x18000BF04 (-HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F450 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4B8 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180041DDC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall HampHostComputeDesiredPsmAndSwapState(__int64 a1)
{
  struct _HAM_DEPENDENCY_GROUP *v1; // rbp
  int v3; // esi
  __int64 v4; // rdx
  int v5; // r12d
  BOOL v6; // r14d
  BOOL v7; // r15d
  unsigned int v8; // ebx
  bool v9; // al
  unsigned int v10; // edx
  unsigned __int64 v11; // rax
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  char v14; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(struct _HAM_DEPENDENCY_GROUP **)(a1 + 664);
  v3 = 1;
  if ( v1 )
  {
    HampDepGroupAcquireLockExclusive(*(struct _HAM_DEPENDENCY_GROUP **)(a1 + 664));
    v4 = *(_QWORD *)(a1 + 664);
    v5 = 1;
    v6 = *(_QWORD *)(v4 + 104) < *(_QWORD *)(a1 + 600);
    v7 = *(_DWORD *)(v4 + 92) != 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    v5 = 0;
  }
  v8 = 0;
  if ( (*(_BYTE *)(a1 + 740) & 1) != 0 )
  {
    RmHamHostGetCurrentState(
      (struct _RM_HAM_ACTIVITY_HOST *)a1,
      (union _RM_OPTIMIZATION_STATE *)&v13,
      (union _RM_OPTIMIZATION_STATE *)&v14);
    v9 = HampPkgSnapshotDebugState(*(struct _HAM_PACKAGE **)(*(_QWORD *)(a1 + 744) + 88LL));
    v10 = v13;
    if ( !v9 || (*(_BYTE *)(a1 + 638) & 1) != 0 )
      goto LABEL_12;
    if ( (v13 & 0x80u) != 0 || v14 < 0 )
      v3 = 0;
    if ( HampHostIsTerminateQueued((struct _RM_HAM_ACTIVITY_HOST *)a1) || !v3 )
    {
LABEL_12:
      if ( v6 )
      {
        v8 = v10 & 0x188;
      }
      else
      {
        v11 = *(_QWORD *)(a1 + 632);
        if ( (v11 & 0x2000000000LL) != 0 )
        {
          if ( v7 )
            v8 = v10;
        }
        else
        {
          v8 = ~(unsigned __int8)(v11 >> 37) & 8 | 0x180;
        }
      }
    }
  }
  if ( v5 )
    HampDepGroupReleaseLockExclusive(v1);
  return v8;
}
