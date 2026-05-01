/*
 * XREFs of ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x180025500
 * Callers:
 *     RmCoreRpcSrvApplyResourceSet @ 0x1800273B0 (RmCoreRpcSrvApplyResourceSet.c)
 *     RmtSrv_RS_Apply @ 0x18004D3B0 (RmtSrv_RS_Apply.c)
 *     ?Apply@RmpRpExtResourceSetThunk@@UEAAJXZ @ 0x18004D6D0 (-Apply@RmpRpExtResourceSetThunk@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?Apply@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x18001FF14 (-Apply@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18001FF90 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180024DE4 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x1800272D8 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetApply(struct _RM_SERVICE_GLOBALS *a1, unsigned __int64 a2)
{
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v4; // rbx
  __int64 (__fastcall *v5)(ExecutionModel::ResourceSet *); // rax
  DWORD v6; // ebx
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-CCh] BYREF
  ExecutionModel::ResourceSet *v10; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  int *v14; // [rsp+100h] [rbp+0h]
  int v15; // [rsp+108h] [rbp+8h]
  int v16; // [rsp+10Ch] [rbp+Ch]
  unsigned __int64 *v17; // [rsp+110h] [rbp+10h]
  int v18; // [rsp+118h] [rbp+18h]
  int v19; // [rsp+11Ch] [rbp+1Ch]

  v11 = a2;
  RmpUtilCheckStartLockTracking(&v9, (struct _CEM_LOCK_TRACKER *)v12);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007CF2A, 0LL, 0LL, 2u, &pData);
  v10 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 560), v11, &v10);
  v4 = v10;
  if ( EmSetById < 0 )
  {
    v8 = EmSetById | 0x10000000;
    RmpReleaseGlobalLock();
  }
  else
  {
    RmpReleaseGlobalLock();
    v8 = ExecutionModel::ResourceSet::Apply(v4);
    if ( v8 >= 0 )
      v8 = 0;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v16 = 0;
    v19 = 0;
    v14 = &v8;
    v17 = &v11;
    v15 = 4;
    v18 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007CB95, 0LL, 0LL, 4u, &pData);
  }
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v4);
    else
      v5(v4);
  }
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
