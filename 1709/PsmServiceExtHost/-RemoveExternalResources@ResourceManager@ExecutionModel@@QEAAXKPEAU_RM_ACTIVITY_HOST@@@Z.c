/*
 * XREFs of ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E3CC
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001BAA8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x1800320F4 (-OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x1800035A8 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x18003D3D4 (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::RemoveExternalResources(
        ExecutionModel::ResourceManager *this,
        int a2,
        struct _RM_ACTIVITY_HOST *a3)
{
  char *v3; // r14
  char *v5; // rbx
  HANDLE *v7; // rdi
  HANDLE v8; // rcx

  v3 = (char *)this + 168;
  v5 = (char *)*((_QWORD *)this + 21);
  while ( v5 != v3 )
  {
    v7 = (HANDLE *)*((_QWORD *)v5 + 4);
    (*((void (__fastcall **)(HANDLE *))*v7 + 1))(v7);
    v5 = *(char **)v5;
    if ( *((_DWORD *)v7 + 2) == a2 && a2 || a3 && a3 == v7[182] )
    {
      v8 = v7[182];
      if ( v8 )
      {
        RmpObjectRelease(v8);
        v7[182] = 0LL;
      }
      if ( (*((unsigned __int8 (__fastcall **)(HANDLE *))*v7 + 7))(v7) )
        ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v7);
      else
        ExecutionModel::ExternalResourceSet::Revoke(v7, 2LL);
    }
    (*((void (__fastcall **)(HANDLE *))*v7 + 2))(v7);
  }
}
