/*
 * XREFs of ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x18005129C
 * Callers:
 *     RmtSrv_RS_SetExternalResourcePriorities @ 0x18004D3F0 (RmtSrv_RS_SetExternalResourcePriorities.c)
 *     ?SetExternalResourcePriorities@RmpRpExtResourceSetThunk@@UEAAJKQEAU_ResourceInfo@ExecutionModel@@@Z @ 0x18004DA80 (-SetExternalResourcePriorities@RmpRpExtResourceSetThunk@@UEAAJKQEAU_ResourceInfo@ExecutionModel@.c)
 *     ?HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z @ 0x1800661EC (-HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z.c)
 *     ?HampRmContextSetExternalResourcePriority@@YAJPEAXPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x1800662A8 (-HampRmContextSetExternalResourcePriority@@YAJPEAXPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180024DE4 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x1800272D8 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x18005B68C (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z.c)
 */

__int64 __fastcall RmSrvResourceSetExternalResourcePriorities(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4)
{
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v8; // rbx
  DWORD v9; // ebx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-CCh] BYREF
  ExecutionModel::ResourceSet *v13; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  int *v17; // [rsp+100h] [rbp+0h]
  int v18; // [rsp+108h] [rbp+8h]
  int v19; // [rsp+10Ch] [rbp+Ch]
  unsigned __int64 *v20; // [rsp+110h] [rbp+10h]
  int v21; // [rsp+118h] [rbp+18h]
  int v22; // [rsp+11Ch] [rbp+1Ch]

  v14 = a2;
  RmpUtilCheckStartLockTracking(&v12, (struct _CEM_LOCK_TRACKER *)v15);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007CBC8, 0LL, 0LL, 2u, &pData);
  v13 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 560), v14, &v13);
  v8 = v13;
  if ( EmSetById >= 0 )
  {
    RmpReleaseGlobalLock();
    v11 = ExecutionModel::ResourceSet::SetExternalResourcePriorities(v8, a3, a4);
    if ( v11 >= 0 )
      v11 = 0;
  }
  else
  {
    v11 = EmSetById | 0x10000000;
    RmpReleaseGlobalLock();
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v19 = 0;
    v22 = 0;
    v17 = &v11;
    v20 = &v14;
    v18 = 4;
    v21 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007D41B, 0LL, 0LL, 4u, &pData);
  }
  if ( v8 )
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v12 )
  {
    v9 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v9, 0LL);
    }
  }
  return (unsigned int)v11;
}
