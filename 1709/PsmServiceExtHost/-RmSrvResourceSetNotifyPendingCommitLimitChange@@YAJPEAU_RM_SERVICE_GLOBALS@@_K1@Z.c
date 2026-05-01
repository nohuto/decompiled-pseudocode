/*
 * XREFs of ?RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z @ 0x180034510
 * Callers:
 *     RmtSrv_RS_NotifyPendingCommitLimitChange @ 0x180030640 (RmtSrv_RS_NotifyPendingCommitLimitChange.c)
 *     ?NotifyPendingResourceSetTransition@RmpRpExtResourceSetThunk@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x1800306D0 (-NotifyPendingResourceSetTransition@RmpRpExtResourceSetThunk@@UEAAJPEAU_ResourceSetInfo@Executio.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800100E0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x180013940 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetNotifyPendingCommitLimitChange(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  int EmSetById; // eax
  struct ExecutionModel::ResourceSet *v7; // rbx
  const GUID *v8; // r8
  const GUID *v9; // r9
  DWORD v10; // ebx
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-CCh] BYREF
  struct ExecutionModel::ResourceSet *v14; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v17[80]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[24]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR v20; // [rsp+220h] [rbp+120h] BYREF
  int *v21; // [rsp+240h] [rbp+140h]
  int v22; // [rsp+248h] [rbp+148h]
  int v23; // [rsp+24Ch] [rbp+14Ch]
  unsigned __int64 *v24; // [rsp+250h] [rbp+150h]
  int v25; // [rsp+258h] [rbp+158h]
  int v26; // [rsp+25Ch] [rbp+15Ch]
  __int64 *v27; // [rsp+260h] [rbp+160h]
  int v28; // [rsp+268h] [rbp+168h]
  int v29; // [rsp+26Ch] [rbp+16Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+270h] [rbp+170h] BYREF

  v15 = a2;
  v16 = a3;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v18);
  RmpUtilCheckStartLockTracking(&v13, (struct _CEM_LOCK_TRACKER *)v17);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180056E8B, v4, v5, 2u, &pData);
  v14 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), v15, &v14);
  v7 = v14;
  if ( EmSetById >= 0 )
  {
    RmpReleaseGlobalLock();
    v19 = v16;
    v12 = (*(__int64 (__fastcall **)(struct ExecutionModel::ResourceSet *, _BYTE *))(*(_QWORD *)v7 + 88LL))(v7, v18);
    if ( v12 >= 0 )
      v12 = 0;
  }
  else
  {
    v12 = EmSetById | 0x10000000;
    RmpReleaseGlobalLock();
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v21 = &v12;
    v24 = &v15;
    v27 = &v16;
    v22 = 4;
    v25 = 8;
    v28 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800567A5, v8, v9, 5u, &v20);
  }
  if ( v7 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v13 )
  {
    v10 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v10, 0LL);
    }
  }
  return (unsigned int)v12;
}
