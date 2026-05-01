/*
 * XREFs of ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001BAA8
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000E420 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800319C0 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x1800320F4 (-OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007988 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E3CC (-RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800107F0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180016998 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@Z @ 0x18001BE88 (-RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180036268 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800438BC (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpActivityHostZeroProcessNotification(char *P)
{
  char *v2; // rdi
  char *v3; // rdi
  __int64 v4; // r8
  char *v5; // rsi
  __int64 (__fastcall *v6)(ExecutionModel::BaseResourceSet *); // rax
  __int64 (__fastcall *v7)(ExecutionModel::ResourceSet *); // rax
  unsigned int v8; // edx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx

  ExecutionModel::ResourceManager::RemoveExternalResources(
    *(ExecutionModel::ResourceManager **)(*((_QWORD *)P + 5) + 1896LL),
    0,
    (struct _RM_ACTIVITY_HOST *)P);
  v2 = (char *)*((_QWORD *)P + 105);
  if ( v2 != P + 840 )
  {
    v3 = v2 - 1416;
    if ( v3 )
    {
      do
      {
        v4 = *((_QWORD *)v3 + 177);
        v5 = 0LL;
        if ( v4 != *((_QWORD *)v3 + 180) + 24 * (*((int *)v3 + 362) + 34LL) )
          v5 = (char *)(v4 - 1416);
        if ( *((_DWORD *)P + 14) || (*((_DWORD *)v3 + 363) & 4) != 0 )
        {
          v6 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v3 + 8LL);
          if ( v6 == ExecutionModel::BaseResourceSet::AddRef )
            ExecutionModel::BaseResourceSet::AddRef((ExecutionModel::BaseResourceSet *)v3);
          else
            v6((ExecutionModel::BaseResourceSet *)v3);
          RmpActivityHostUnapplyResourceSet((struct _RM_ACTIVITY_HOST *)P, (struct ExecutionModel::ResourceSet *)v3, 0);
          v7 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v3 + 16LL);
          if ( v7 == ExecutionModel::ResourceSet::Release )
            ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v3);
          else
            v7((ExecutionModel::ResourceSet *)v3);
        }
        v3 = v5;
      }
      while ( v5 );
    }
  }
  *((_QWORD *)P + 143) = 0LL;
  *((_QWORD *)P + 152) = 0LL;
  *((_QWORD *)P + 153) = 0LL;
  *((_DWORD *)P + 308) = 0;
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(P + 64), 0);
  if ( (P[772] & 1) != 0 && (*((_DWORD *)P + 173) & 0x800) == 0 )
    HampHostNotifyZeroProcess((struct _RM_HAM_ACTIVITY_HOST *)(P + 64));
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(P + 64), v8);
  RmpActivityHostResourceSetsChanged((struct _RM_ACTIVITY_HOST *)P, 2);
  RmpActivityHostComputeAndApplyEnforcementSettings((struct _RM_ACTIVITY_HOST *)P);
  v9 = P + 1056;
  v10 = *((_QWORD *)P + 132);
  if ( v10 )
  {
    if ( *(_QWORD **)(v10 + 8) != v9 || (v11 = (_QWORD *)*((_QWORD *)P + 133), (_QWORD *)*v11 != v9) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *v9 = 0LL;
    *((_QWORD *)P + 133) = 0LL;
    RmpObjectRelease(P);
  }
  if ( *((_QWORD *)P + 160) )
    RmpActivityHostRemoveFromRemediationGroup(P, 1u);
  else
    SetEvent(*(HANDLE *)(*((_QWORD *)P + 6) + 80LL));
  RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)P);
}
