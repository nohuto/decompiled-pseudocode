/*
 * XREFs of ?SynchronizeWithTerminationNeeded@HAM_ACTIVITY_RM_CONTEXT@@QEAAKXZ @ 0x180045F28
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000FAF0 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010B70 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall HAM_ACTIVITY_RM_CONTEXT::SynchronizeWithTerminationNeeded(HAM_ACTIVITY_RM_CONTEXT *this)
{
  HAM_ACTIVITY_RM_CONTEXT *v1; // rbx
  __int64 v2; // rcx

  v1 = this;
  HampHostAcquireLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(*((_QWORD *)this + 1) + 72LL), 0);
  v2 = *((_QWORD *)v1 + 1);
  LODWORD(v1) = (*(_DWORD *)(v2 + 104) & 0x100) == 0;
  HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(v2 + 72));
  return (unsigned int)v1;
}
