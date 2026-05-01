/*
 * XREFs of ?RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z @ 0x1800027F8
 * Callers:
 *     RmgrSrv_RmReleaseResources @ 0x180001CA0 (RmgrSrv_RmReleaseResources.c)
 *     ContextRmResourceHandle_rundown @ 0x18004CD70 (ContextRmResourceHandle_rundown.c)
 * Callees:
 *     ?GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExternalResourceSet@2@@Z @ 0x1800024B8 (-GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExt.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x180003258 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmReleaseResources(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceHandle__ *a2)
{
  ExecutionModel::ResourceManager *v2; // rbx
  struct ExecutionModel::ExternalResourceSet *v4; // rbx
  const struct _TlgProvider_t *v5; // rcx
  UINT32 cData; // r9d
  DWORD v7; // ebx
  int ResourceSetFromHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct ExecutionModel::ExternalResourceSet *v10; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v11[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *p_ResourceSetFromHandle; // [rsp+F0h] [rbp-10h]
  UINT32 v14; // [rsp+F8h] [rbp-8h]
  int v15; // [rsp+FCh] [rbp-4h]
  struct ExecutionModel::ExternalResourceSet **v16; // [rsp+100h] [rbp+0h]
  int v17; // [rsp+108h] [rbp+8h]
  int v18; // [rsp+10Ch] [rbp+Ch]

  v2 = g_pResourceManager;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  RmpAcquireGlobalLock();
  ResourceSetFromHandle = ExecutionModel::ResourceManager::GetResourceSetFromHandle(v2, a2, &v10);
  if ( ResourceSetFromHandle >= 0 )
  {
    v4 = v10;
    ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v10);
    (*(void (__fastcall **)(struct ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v4 + 16LL))(v4);
    ResourceSetFromHandle = 0;
  }
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v15 = 0;
    v18 = 0;
    p_ResourceSetFromHandle = &ResourceSetFromHandle;
    v16 = &v10;
    v14 = cData;
    v10 = a2;
    v17 = 8;
    TlgWrite(v5, &unk_18007C69A, 0LL, 0LL, cData, &pData);
  }
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
  return (unsigned int)ResourceSetFromHandle;
}
