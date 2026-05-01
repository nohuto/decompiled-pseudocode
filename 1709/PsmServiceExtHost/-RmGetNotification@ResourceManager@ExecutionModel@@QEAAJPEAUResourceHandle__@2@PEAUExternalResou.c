/*
 * XREFs of ?RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x1800325A8
 * Callers:
 *     RmgrSrv_RmGetNotification @ 0x1800300E0 (RmgrSrv_RmGetNotification.c)
 * Callees:
 *     ?GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExternalResourceSet@2@@Z @ 0x180002E34 (-GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExt.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?GetNextMessage@ExternalResourceSet@ExecutionModel@@QEAAJPEAUExternalResourceNotification@2@@Z @ 0x18003D088 (-GetNextMessage@ExternalResourceSet@ExecutionModel@@QEAAJPEAUExternalResourceNotification@2@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmGetNotification(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceHandle__ *a2,
        struct ExecutionModel::ExternalResourceNotification *a3)
{
  ExecutionModel::ResourceManager *v3; // rbx
  int ResourceSetFromHandle; // eax
  ExecutionModel::ExternalResourceSet *v7; // rbx
  int NextMessage; // eax
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  DWORD v12; // ebx
  unsigned int v14; // [rsp+30h] [rbp-89h] BYREF
  ExecutionModel::ExternalResourceSet *v15; // [rsp+38h] [rbp-81h] BYREF
  struct ExecutionModel::ResourceHandle__ *v16; // [rsp+40h] [rbp-79h] BYREF
  char v17[80]; // [rsp+50h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-19h] BYREF
  unsigned int *v19; // [rsp+C0h] [rbp+7h]
  const GUID *v20; // [rsp+C8h] [rbp+Fh]
  struct ExecutionModel::ResourceHandle__ **v21; // [rsp+D0h] [rbp+17h]
  __int64 v22; // [rsp+D8h] [rbp+1Fh]
  ExecutionModel::ExternalResourceSet **v23; // [rsp+E0h] [rbp+27h]
  const GUID *v24; // [rsp+E8h] [rbp+2Fh]

  v3 = g_pResourceManager;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  v15 = 0LL;
  RmpAcquireGlobalLock();
  ResourceSetFromHandle = ExecutionModel::ResourceManager::GetResourceSetFromHandle(v3, a2, &v15);
  v7 = v15;
  v14 = ResourceSetFromHandle;
  if ( ResourceSetFromHandle >= 0 )
  {
    NextMessage = ExecutionModel::ExternalResourceSet::GetNextMessage(v15, a3);
    if ( NextMessage >= 0 )
      NextMessage = 0;
    v14 = NextMessage;
  }
  RmpReleaseGlobalLock();
  if ( v7 )
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v20 = v11;
    v19 = &v14;
    v21 = &v16;
    LODWORD(v15) = *(_DWORD *)a3;
    v23 = &v15;
    v16 = a2;
    v22 = 8LL;
    v24 = v11;
    TlgWrite(v9, &unk_180055D6B, v10, v11, 5u, &pData);
  }
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v12, 0LL);
  }
  return v14;
}
