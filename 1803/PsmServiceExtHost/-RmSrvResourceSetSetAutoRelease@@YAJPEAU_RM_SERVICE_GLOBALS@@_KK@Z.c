/*
 * XREFs of ?RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180025324
 * Callers:
 *     RmCoreRpcSrvAcquireResourceSet @ 0x1800273D0 (RmCoreRpcSrvAcquireResourceSet.c)
 *     RmtSrv_RS_SetAutoRelease @ 0x18004D3E0 (RmtSrv_RS_SetAutoRelease.c)
 *     ?SetAutoRelease@RmpRpExtResourceSetThunk@@UEAAX_N@Z @ 0x18004DA60 (-SetAutoRelease@RmpRpExtResourceSetThunk@@UEAAX_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18001FF90 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180024DE4 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x1800272D8 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetSetAutoRelease(struct _RM_SERVICE_GLOBALS *a1, unsigned __int64 a2, int a3)
{
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v6; // rbx
  int v7; // eax
  __int64 (__fastcall *v8)(ExecutionModel::ResourceSet *); // rax
  DWORD v9; // ebx
  unsigned int v11; // [rsp+30h] [rbp-D0h] BYREF
  ExecutionModel::ResourceSet *v12; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  char v15[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v16; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v17; // [rsp+100h] [rbp+0h]
  int v18; // [rsp+108h] [rbp+8h]
  int v19; // [rsp+10Ch] [rbp+Ch]
  unsigned __int64 *v20; // [rsp+110h] [rbp+10h]
  int v21; // [rsp+118h] [rbp+18h]
  int v22; // [rsp+11Ch] [rbp+1Ch]
  ExecutionModel::ResourceSet **v23; // [rsp+120h] [rbp+20h]
  int v24; // [rsp+128h] [rbp+28h]
  int v25; // [rsp+12Ch] [rbp+2Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF

  v14 = a2;
  RmpUtilCheckStartLockTracking(&v13, (struct _CEM_LOCK_TRACKER *)v15);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007C8AC, 0LL, 0LL, 2u, &pData);
  v12 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 560), v14, &v12);
  v6 = v12;
  if ( EmSetById < 0 )
  {
    v7 = EmSetById | 0x10000000;
  }
  else
  {
    *((_DWORD *)v12 + 363) &= ~4u;
    *((_DWORD *)v6 + 363) |= a3 != 0 ? 4 : 0;
    v7 = 0;
  }
  v11 = v7;
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v17 = &v11;
    v20 = &v14;
    v23 = &v12;
    v18 = 4;
    v21 = 8;
    LODWORD(v12) = a3;
    v24 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007CB4A, 0LL, 0LL, 5u, &v16);
  }
  if ( v6 )
  {
    v8 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v6 + 16LL);
    if ( v8 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v6);
    else
      v8(v6);
  }
  if ( v13 )
  {
    v9 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v9, 0LL);
    }
  }
  return v11;
}
