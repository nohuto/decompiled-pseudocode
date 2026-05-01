/*
 * XREFs of ?GetResourceManagementValue@ResourceManager@ExecutionModel@@QEAAJKKPEA_K@Z @ 0x180031F50
 * Callers:
 *     RmgrSrv_SHGetResourceManagementValue @ 0x180030310 (RmgrSrv_SHGetResourceManagementValue.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z @ 0x180031ED4 (-GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetResourceManagementValue(
        ExecutionModel::ResourceManager *this,
        int a2,
        int a3,
        unsigned __int64 *a4)
{
  ExecutionModel::ResourceManager *v4; // rbp
  int ProcessMemoryCaps; // edi
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  bool v15; // zf
  unsigned __int64 v16; // rax

  v4 = g_pResourceManager;
  ProcessMemoryCaps = 0;
  RmpAcquireGlobalLock();
  v9 = a3 - 1;
  if ( !v9 )
  {
    v16 = *((_QWORD *)v4 + 7);
    goto LABEL_19;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v16 = *((_QWORD *)v4 + 5);
    goto LABEL_19;
  }
  v11 = v10 - 1;
  if ( !v11 || (v12 = v11 - 1) == 0 )
  {
    v16 = *((unsigned int *)v4 + 22);
    goto LABEL_19;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v16 = (unsigned int)(3 * *((_DWORD *)v4 + 22));
LABEL_19:
    *a4 = v16;
    goto LABEL_20;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( v14 != 2 )
    {
      ProcessMemoryCaps = -2147024809;
      goto LABEL_20;
    }
    ProcessMemoryCaps = ExecutionModel::ResourceManager::GetProcessMemoryCaps(
                          (struct _RM_SERVICE_GLOBALS **)v4,
                          a2,
                          a4,
                          0LL);
    if ( ProcessMemoryCaps < 0 )
      goto LABEL_20;
    v15 = *a4 == 0;
  }
  else
  {
    ProcessMemoryCaps = ExecutionModel::ResourceManager::GetProcessMemoryCaps(
                          (struct _RM_SERVICE_GLOBALS **)v4,
                          a2,
                          0LL,
                          a4);
    if ( ProcessMemoryCaps < 0 )
      goto LABEL_20;
    v15 = a4 == 0LL;
  }
  if ( v15 )
    ProcessMemoryCaps = 1;
LABEL_20:
  RmpReleaseGlobalLock();
  return (unsigned int)ProcessMemoryCaps;
}
