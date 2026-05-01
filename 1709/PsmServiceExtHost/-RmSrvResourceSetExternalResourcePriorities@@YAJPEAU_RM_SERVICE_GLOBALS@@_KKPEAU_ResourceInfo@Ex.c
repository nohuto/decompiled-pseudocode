/*
 * XREFs of ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x18001BF30
 * Callers:
 *     ?SetExternalResourcePriorities@RmpRpExtResourceSetThunk@@UEAAJKQEAU_ResourceInfo@ExecutionModel@@@Z @ 0x1800162C0 (-SetExternalResourcePriorities@RmpRpExtResourceSetThunk@@UEAAJKQEAU_ResourceInfo@ExecutionModel@.c)
 *     RmtSrv_RS_SetExternalResourcePriorities @ 0x180030670 (RmtSrv_RS_SetExternalResourcePriorities.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x1800124B4 (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x180013940 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetExternalResourcePriorities(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4)
{
  const GUID *v7; // r8
  const GUID *v8; // r9
  int EmSetById; // eax
  struct _RM_ACTIVITY_HOST **v10; // rbx
  const GUID *v11; // r8
  const GUID *v12; // r9
  __int64 (__fastcall *v13)(ExecutionModel::ResourceSet *); // rax
  DWORD v14; // ebx
  int v16; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-85h] BYREF
  ExecutionModel::ResourceSet *v18; // [rsp+38h] [rbp-81h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v20[80]; // [rsp+50h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-19h] BYREF
  int *v22; // [rsp+C0h] [rbp+7h]
  int v23; // [rsp+C8h] [rbp+Fh]
  int v24; // [rsp+CCh] [rbp+13h]
  unsigned __int64 *v25; // [rsp+D0h] [rbp+17h]
  int v26; // [rsp+D8h] [rbp+1Fh]
  int v27; // [rsp+DCh] [rbp+23h]

  v19 = a2;
  RmpUtilCheckStartLockTracking(&v17, (struct _CEM_LOCK_TRACKER *)v20);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800565D4, v7, v8, 2u, &pData);
  v18 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), v19, &v18);
  v10 = (struct _RM_ACTIVITY_HOST **)v18;
  if ( EmSetById < 0 )
  {
    v16 = EmSetById | 0x10000000;
    RmpReleaseGlobalLock();
  }
  else
  {
    RmpReleaseGlobalLock();
    v16 = ExecutionModel::ResourceSet::SetExternalResourcePriorities(v10, a3, a4);
    if ( v16 >= 0 )
      v16 = 0;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v24 = 0;
    v27 = 0;
    v22 = &v16;
    v25 = &v19;
    v23 = 4;
    v26 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180056F1B, v11, v12, 4u, &pData);
  }
  if ( v10 )
  {
    v13 = (__int64 (__fastcall *)(ExecutionModel::ResourceSet *))*((_QWORD *)*v10 + 2);
    if ( v13 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v10);
    else
      v13((ExecutionModel::ResourceSet *)v10);
  }
  if ( v17 )
  {
    v14 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v14, 0LL);
    }
  }
  return (unsigned int)v16;
}
