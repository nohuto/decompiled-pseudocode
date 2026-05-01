/*
 * XREFs of ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z @ 0x180031D04
 * Callers:
 *     ?RmSrvApplyTerminalResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180032A48 (-RmSrvApplyTerminalResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 * Callees:
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z @ 0x180001944 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z.c)
 *     ?RmpActivityHostFindProcessResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x1800033F0 (-RmpActivityHostFindProcessResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_SERVICE_GLOBAL.c)
 *     ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000EDB4 (-ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAP.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800154F0 (-RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyTerminalResourceSet(
        struct _RM_SERVICE_GLOBALS **this,
        DWORD a2)
{
  struct ExecutionModel::ResourceSet *v2; // rsi
  char *v3; // rbx
  struct ExecutionModel::ResourceSet *ProcessResourceSet; // rax
  ExecutionModel::ResourceSet *v7; // r14
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  struct _RM_ACTIVITY_HOST *v12; // [rsp+50h] [rbp+8h] BYREF
  struct ExecutionModel::ResourceSet *v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  RmpAcquireGlobalLock();
  ProcessResourceSet = RmpActivityHostFindProcessResourceSet(this[26], a2);
  v7 = ProcessResourceSet;
  if ( !ProcessResourceSet )
    goto LABEL_7;
  (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)ProcessResourceSet + 8LL))(ProcessResourceSet);
  if ( (*((_BYTE *)v7 + 1452) & 2) != 0 )
    goto LABEL_7;
  v8 = ExecutionModel::ResourceSet::CreateTerminalResourceSet(v7, &v13);
  v2 = v13;
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = ExecutionModel::ResourceManager::ApplyResourceSetWithoutEnforcement(
            (ExecutionModel::ResourceManager *)this,
            v13,
            a2,
            &v12);
    v3 = (char *)v12;
    v9 = v10;
    if ( v10 >= 0 )
    {
      if ( v12 )
      {
        RmpEnforcementWorkerSynchronize(v12);
LABEL_7:
        v9 = 0;
      }
    }
  }
  RmpReleaseGlobalLock();
  if ( v2 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v7 )
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v3 )
    RmpObjectRelease(v3);
  return v9;
}
