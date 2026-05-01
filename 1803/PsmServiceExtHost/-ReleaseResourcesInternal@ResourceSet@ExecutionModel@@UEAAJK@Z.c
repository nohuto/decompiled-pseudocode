/*
 * XREFs of ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180020220
 * Callers:
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180023600 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B850 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001D710 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18001F380 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800219F0 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180021A70 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180023B80 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025D6C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002DCD4 (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ReleaseResourcesInternal(ExecutionModel::ResourceSet *this, char a2)
{
  __int64 v2; // rdi
  char v3; // r11
  unsigned int v5; // esi
  char v6; // r14
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax

  v2 = *((_QWORD *)this + 180);
  v3 = a2;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 16)) <= 1 )
    __fastfail(0xEu);
  v5 = 0;
  if ( *((_DWORD *)this + 350) )
  {
    if ( (a2 & 2) != 0
      && *((_BYTE *)this + 12)
      && RmpActivityHostGetResourceSetCount((struct _RM_ACTIVITY_HOST *)v2, 2u) < 2 )
    {
      v5 = -2147220221;
    }
    else
    {
      v6 = *((_BYTE *)this + 12);
      v7 = (v6 != 0) + 1;
      ExecutionModel::ResourceSet::PerformReleaseResources(this, v3);
      RmpActivityHostUpdateDigests((struct _RM_ACTIVITY_HOST *)v2, v7);
      RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v2, v7);
      QueryUnbiasedInterruptTime((PULONGLONG)(v2 + 1456));
      if ( RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v2) )
        SetEvent(*(HANDLE *)(*(_QWORD *)(v2 + 56) + 88LL));
      if ( (v7 & 2) != 0 )
      {
        v8 = *(_QWORD *)(v2 + 48);
        *(_QWORD *)(v2 + 1112) = 0LL;
        v9 = *(_QWORD *)(v8 + 2232);
        v10 = *(_DWORD *)(v9 + 184);
        if ( (v10 & 3) == 0 )
        {
          *(_DWORD *)(v9 + 184) = v10 | 1;
          TpPostWork(*(_QWORD *)(v9 + 168));
        }
      }
      if ( v6 )
      {
        if ( (*(_BYTE *)(v2 + 804) & 1) == 0 )
          RmpActivityHostComputeAndApplyEnforcementSettings((struct _RM_ACTIVITY_HOST *)v2);
        ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
          *((ExecutionModel::ResourceManager **)this + 3),
          (struct _RM_ACTIVITY_HOST *)v2);
      }
      if ( RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)v2) )
      {
        HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(v2 + 64), 0);
        HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)(v2 + 64), 1);
        HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(v2 + 64));
      }
    }
  }
  RmpObjectRelease((PVOID)v2);
  return v5;
}
