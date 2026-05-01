/*
 * XREFs of ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x18005B68C
 * Callers:
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x18005129C (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000230C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001D710 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
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
  struct _RM_ACTIVITY_HOST *v13; // rcx

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
        if ( *((_DWORD *)this + 350) )
        {
          ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(v9, 2u, v4, v5, this[180]);
          if ( (_DWORD)v4 )
          {
            v10 = v4;
            do
            {
              v11 = *(int *)v5;
              v12 = *((_DWORD *)v5 + 4);
              v5 = (struct ExecutionModel::_ResourceInfo *)((char *)v5 + 24);
              *((_DWORD *)this + v11 + 402) = v12;
              --v10;
            }
            while ( v10 );
          }
          ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(this[3], this[180]);
          v13 = this[3];
          if ( (*((_BYTE *)v13 + 184) & 2) == 0 )
            TpPostWork(*((_QWORD *)v13 + 22));
        }
        else
        {
          v3 = -2147220218;
        }
        RmpReleaseGlobalLock();
        return v3;
      }
    }
  }
  return (unsigned int)-2147024809;
}
