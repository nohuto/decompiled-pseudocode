/*
 * XREFs of ?Apply@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x18001FF14
 * Callers:
 *     ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x180025500 (-RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18001CEA0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::Apply(ExecutionModel::ResourceSet *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  ExecutionModel::ResourceManager *v4; // rcx
  int v5; // eax

  RmpAcquireGlobalLock();
  v2 = *((_DWORD *)this + 350);
  v3 = 0;
  if ( v2 == 1 )
  {
    v5 = -2147220219;
  }
  else if ( v2 )
  {
    if ( *((_BYTE *)this + 12) )
    {
      v5 = -2147220220;
    }
    else
    {
      v4 = (ExecutionModel::ResourceManager *)*((_QWORD *)this + 3);
      *((_DWORD *)this + 363) |= 0x40u;
      v5 = ExecutionModel::ResourceManager::ApplyResourceSet_Modern(v4, this);
      if ( v5 >= 0 )
        v5 = 0;
    }
  }
  else
  {
    v5 = -2147220218;
  }
  *((_DWORD *)this + 363) &= ~0x40u;
  if ( v5 < 0 )
    v3 = v5;
  RmpReleaseGlobalLock();
  return v3;
}
