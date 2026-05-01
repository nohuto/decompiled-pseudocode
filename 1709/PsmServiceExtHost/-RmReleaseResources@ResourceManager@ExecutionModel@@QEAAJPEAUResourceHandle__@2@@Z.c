/*
 * XREFs of ?RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z @ 0x18000285C
 * Callers:
 *     RmgrSrv_RmReleaseResources @ 0x180002740 (RmgrSrv_RmReleaseResources.c)
 *     ContextRmResourceHandle_rundown @ 0x18002FDB0 (ContextRmResourceHandle_rundown.c)
 * Callees:
 *     ?GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExternalResourceSet@2@@Z @ 0x180002E34 (-GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExt.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x1800035A8 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmReleaseResources(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceHandle__ *a2)
{
  ExecutionModel::ResourceManager *v2; // rbx
  struct ExecutionModel::ExternalResourceSet *v4; // rbx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *cData; // r9
  DWORD v8; // ebx
  int ResourceSetFromHandle; // [rsp+30h] [rbp-59h] BYREF
  struct ExecutionModel::ExternalResourceSet *v11; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v12[80]; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp+7h] BYREF
  int *p_ResourceSetFromHandle; // [rsp+B0h] [rbp+27h]
  int v15; // [rsp+B8h] [rbp+2Fh]
  int v16; // [rsp+BCh] [rbp+33h]
  struct ExecutionModel::ExternalResourceSet **v17; // [rsp+C0h] [rbp+37h]
  int v18; // [rsp+C8h] [rbp+3Fh]
  int v19; // [rsp+CCh] [rbp+43h]

  v2 = g_pResourceManager;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  RmpAcquireGlobalLock();
  ResourceSetFromHandle = ExecutionModel::ResourceManager::GetResourceSetFromHandle(v2, a2, &v11);
  if ( ResourceSetFromHandle >= 0 )
  {
    v4 = v11;
    ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v11);
    (*(void (__fastcall **)(struct ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v4 + 16LL))(v4);
    ResourceSetFromHandle = 0;
  }
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v16 = 0;
    v19 = 0;
    p_ResourceSetFromHandle = &ResourceSetFromHandle;
    v17 = &v11;
    v15 = (int)cData;
    v11 = a2;
    v18 = 8;
    TlgWrite(v5, &unk_180055FFB, v6, cData, (UINT32)cData, &pData);
  }
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v8, 0LL);
  }
  return (unsigned int)ResourceSetFromHandle;
}
