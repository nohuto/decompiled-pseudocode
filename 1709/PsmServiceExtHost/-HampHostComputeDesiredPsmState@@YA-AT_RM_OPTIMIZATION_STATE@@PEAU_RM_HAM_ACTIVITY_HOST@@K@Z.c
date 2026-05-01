/*
 * XREFs of ?HampHostComputeDesiredPsmState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001A468
 * Callers:
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015900 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001A388 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019198 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A4C0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampHostComputeDesiredPsmState(__int64 a1, int a2)
{
  __int64 v2; // rsi
  unsigned int v5; // ebx

  v2 = *(_QWORD *)(a1 + 640);
  if ( !a2 )
    HampDepGroupAcquireLockExclusive(*(struct _HAM_DEPENDENCY_GROUP **)(a1 + 640));
  v5 = 0;
  if ( (*(_BYTE *)(a1 + 708) & 1) != 0 )
  {
    if ( *(_QWORD *)(v2 + 96) >= *(_QWORD *)(a1 + 600) )
    {
      if ( (*(_DWORD *)(a1 + 628) & 0x4000) != 0 )
      {
        if ( *(_DWORD *)(v2 + 84) )
          v5 = *(_DWORD *)(a1 + 948) & 0x180;
      }
      else
      {
        v5 = 384;
      }
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 948) & 0x180;
    }
  }
  if ( !a2 )
    HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v2);
  return v5;
}
