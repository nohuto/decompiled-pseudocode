/*
 * XREFs of RmpResourceLimitsAreLegal @ 0x18000F9C4
 * Callers:
 *     RmpResourceSetPropertyOverridesAreSupported @ 0x18000F8E0 (RmpResourceSetPropertyOverridesAreSupported.c)
 *     RmCoreRpcSrvAcquireResourceSet @ 0x1800273D0 (RmCoreRpcSrvAcquireResourceSet.c)
 *     ?RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180051BB8 (-RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18005B890 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpResourceLimitsAreLegal(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  return *(_QWORD *)a1 < 0x400uLL
      && (!a2 || (*(_QWORD *)a1 & *a2) == *(_QWORD *)a1)
      && (!a3 || (*(_QWORD *)a1 & *a3) == *a3)
      && ((*(_BYTE *)a1 & 1) != 0 || *(_QWORD *)(a1 + 8) == -1LL)
      && ((*(_BYTE *)a1 & 2) != 0 || *(_QWORD *)(a1 + 16) == -1LL)
      && ((*(_BYTE *)a1 & 4) != 0 || *(_QWORD *)(a1 + 24) == -1LL)
      && ((*(_BYTE *)a1 & 8) != 0 || *(_QWORD *)(a1 + 32) == -1LL)
      && ((*(_BYTE *)a1 & 0x10) != 0 || *(_DWORD *)(a1 + 40) == 100)
      && ((*(_BYTE *)a1 & 0x20) != 0 || (*(_DWORD *)(a1 + 44) & 3) == 1)
      && ((*(_BYTE *)a1 & 0x40) != 0 || (*(_BYTE *)(a1 + 44) & 4) == 0)
      && (*(char *)a1 < 0 || (*(_BYTE *)(a1 + 44) & 8) == 0)
      && ((*(_QWORD *)a1 & 0x100LL) != 0 || (*(_BYTE *)(a1 + 44) & 0x10) == 0)
      && ((*(_QWORD *)a1 & 0x200LL) != 0 || (*(_BYTE *)(a1 + 44) & 0x20) == 0);
}
