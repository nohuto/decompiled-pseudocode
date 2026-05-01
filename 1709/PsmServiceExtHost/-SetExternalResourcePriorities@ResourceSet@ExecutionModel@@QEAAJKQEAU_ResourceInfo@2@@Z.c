/*
 * XREFs of ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x1800124B4
 * Callers:
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x18001BF30 (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 * Callees:
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000EEC0 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B54C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::SetExternalResourcePriorities(
        struct _RM_ACTIVITY_HOST **this,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *const a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  struct ExecutionModel::_ResourceInfo *v5; // rdi
  int v7; // ecx
  struct ExecutionModel::_ResourceInfo *i; // rax
  struct ExecutionModel::ResourceManager *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  struct _RM_ACTIVITY_HOST *v13; // rdx
  struct _RM_ACTIVITY_HOST *v14; // rcx

  v3 = 0;
  v4 = a2;
  v5 = a3;
  if ( a2 && a3 )
  {
    v7 = 0;
    for ( i = a3; *(_DWORD *)i <= 0x31u; i = (struct ExecutionModel::_ResourceInfo *)((char *)i + 24) )
    {
      if ( ++v7 >= a2 )
      {
        RmpAcquireGlobalLock();
        if ( this[180] )
          ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(v9, 2u, v4, v5, this[180]);
        if ( (_DWORD)v4 )
        {
          v10 = v4;
          do
          {
            v11 = *(int *)v5;
            v12 = *((_DWORD *)v5 + 4);
            v5 = (struct ExecutionModel::_ResourceInfo *)((char *)v5 + 24);
            *((_DWORD *)this + v11 + 404) = v12;
            --v10;
          }
          while ( v10 );
        }
        v13 = this[180];
        if ( v13 )
          ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(this[3], v13);
        v14 = this[3];
        if ( (*((_BYTE *)v14 + 240) & 2) == 0 )
          TpPostWork(*((_QWORD *)v14 + 29));
        RmpReleaseGlobalLock();
        return v3;
      }
    }
  }
  return (unsigned int)-2147024809;
}
