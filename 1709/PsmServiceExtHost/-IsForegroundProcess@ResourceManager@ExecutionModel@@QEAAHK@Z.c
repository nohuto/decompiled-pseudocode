/*
 * XREFs of ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x1800320A0
 * Callers:
 *     ?HasLowerPrecedenceThan@ExternalResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z @ 0x18003D130 (-HasLowerPrecedenceThan@ExternalResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z.c)
 * Callees:
 *     ?RmpActivityHostQueryByPidOrPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180001B94 (-RmpActivityHostQueryByPidOrPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005A38 (-RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

_BOOL8 __fastcall ExecutionModel::ResourceManager::IsForegroundProcess(
        ExecutionModel::ResourceManager *this,
        unsigned int a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rcx
  BOOL v3; // ebx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RM_SERVICE_GLOBALS *)*((_QWORD *)this + 26);
  P = 0LL;
  v3 = (int)RmpActivityHostQueryByPidOrPsmInfo(v2, a2, (struct _RM_ACTIVITY_HOST **)&P) >= 0
    && RmpActivityHostGetForegroundSet((struct _RM_ACTIVITY_HOST *)P) != 0LL;
  if ( P )
    RmpObjectRelease((char *)P);
  return v3;
}
