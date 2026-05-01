/*
 * XREFs of ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180011C00
 * Callers:
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180016320 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 * Callees:
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180006840 (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007988 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000EEC0 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800121D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180016998 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@Z @ 0x18001BE88 (-RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ReleaseResourcesInternal(
        ExecutionModel::ResourceSet *this,
        unsigned int a2)
{
  struct _RM_ACTIVITY_HOST *v2; // rbx
  unsigned int v5; // edi

  v2 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)this + 180);
  if ( v2 )
    RmpObjectAddRef(*((struct _RM_OBJECT_HEADER **)this + 180));
  if ( !*((_DWORD *)this + 350) )
    goto LABEL_10;
  if ( (a2 & 2) != 0 )
  {
    if ( !*((_BYTE *)this + 12) )
      goto LABEL_14;
    if ( (unsigned int)RmpActivityHostGetResourceSetCount(v2, 2) < 2 )
      goto LABEL_18;
  }
  if ( !*((_BYTE *)this + 12) )
  {
LABEL_14:
    ExecutionModel::ResourceSet::PerformReleaseResources(this, a2);
    if ( !v2 )
    {
LABEL_10:
      v5 = 0;
      goto LABEL_11;
    }
    RmpActivityHostResourceSetsChanged(v2, 1u);
LABEL_8:
    if ( v2 )
      RmpActivityHostCheckQueueDelete(v2);
    goto LABEL_10;
  }
  if ( *((_DWORD *)this + 34) )
  {
    RmpActivityHostUnapplyResourceSet(v2, this, a2);
    RmpActivityHostResourceSetsChanged(v2, 2u);
    RmpActivityHostComputeAndApplyEnforcementSettings(v2);
    ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
      *((ExecutionModel::ResourceManager **)this + 3),
      v2);
    goto LABEL_8;
  }
LABEL_18:
  v5 = -2147220221;
LABEL_11:
  if ( v2 )
    RmpObjectRelease((char *)v2);
  return v5;
}
