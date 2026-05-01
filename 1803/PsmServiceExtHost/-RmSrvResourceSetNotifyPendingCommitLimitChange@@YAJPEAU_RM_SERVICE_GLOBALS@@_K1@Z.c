/*
 * XREFs of ?RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z @ 0x1800515FC
 * Callers:
 *     ?NotifyPendingResourceSetTransition@RmpRpExtResourceSetThunk@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18004D7E0 (-NotifyPendingResourceSetTransition@RmpRpExtResourceSetThunk@@UEAAJPEAU_ResourceSetInfo@Executio.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001E620 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180024DE4 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x1800272D8 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetNotifyPendingCommitLimitChange(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  int EmSetById; // eax
  struct ExecutionModel::ResourceSet *v5; // rbx
  DWORD v6; // ebx
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-CCh] BYREF
  struct ExecutionModel::ResourceSet *v10; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[144]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[24]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v15; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR v16; // [rsp+260h] [rbp+160h] BYREF
  int *v17; // [rsp+280h] [rbp+180h]
  int v18; // [rsp+288h] [rbp+188h]
  int v19; // [rsp+28Ch] [rbp+18Ch]
  unsigned __int64 *v20; // [rsp+290h] [rbp+190h]
  int v21; // [rsp+298h] [rbp+198h]
  int v22; // [rsp+29Ch] [rbp+19Ch]
  __int64 *v23; // [rsp+2A0h] [rbp+1A0h]
  int v24; // [rsp+2A8h] [rbp+1A8h]
  int v25; // [rsp+2ACh] [rbp+1ACh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2B0h] [rbp+1B0h] BYREF

  v11 = a2;
  v12 = a3;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v14);
  RmpUtilCheckStartLockTracking(&v9, (struct _CEM_LOCK_TRACKER *)v13);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007D354, 0LL, 0LL, 2u, &pData);
  v10 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 560), v11, &v10);
  v5 = v10;
  if ( EmSetById >= 0 )
  {
    RmpReleaseGlobalLock();
    v15 = v12;
    v8 = (*(__int64 (__fastcall **)(struct ExecutionModel::ResourceSet *, _BYTE *))(*(_QWORD *)v5 + 88LL))(v5, v14);
    if ( v8 >= 0 )
      v8 = 0;
  }
  else
  {
    v8 = EmSetById | 0x10000000;
    RmpReleaseGlobalLock();
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v17 = &v8;
    v20 = &v11;
    v23 = &v12;
    v18 = 4;
    v21 = 8;
    v24 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007CE14, 0LL, 0LL, 5u, &v16);
  }
  if ( v5 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v9 )
  {
    v6 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v6, 0LL);
    }
  }
  return (unsigned int)v8;
}
