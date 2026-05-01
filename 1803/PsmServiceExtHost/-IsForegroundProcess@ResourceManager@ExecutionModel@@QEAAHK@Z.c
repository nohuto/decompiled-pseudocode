/*
 * XREFs of ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x18004EEA4
 * Callers:
 *     ?HasLowerPrecedenceThan@ExternalResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z @ 0x18005C390 (-HasLowerPrecedenceThan@ExternalResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005460C (-RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostQueryByTokenPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180054730 (-RmpActivityHostQueryByTokenPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

_BOOL8 __fastcall ExecutionModel::ResourceManager::IsForegroundProcess(
        ExecutionModel::ResourceManager *this,
        unsigned int a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rcx
  BOOL v3; // ebx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RM_SERVICE_GLOBALS *)*((_QWORD *)this + 19);
  P = 0LL;
  v3 = (int)RmpActivityHostQueryByTokenPsmInfo(v2, a2, (struct _RM_ACTIVITY_HOST **)&P) >= 0
    && RmpActivityHostGetForegroundSet((struct _RM_ACTIVITY_HOST *)P) != 0LL;
  if ( P )
    RmpObjectRelease((char *)P);
  return v3;
}
