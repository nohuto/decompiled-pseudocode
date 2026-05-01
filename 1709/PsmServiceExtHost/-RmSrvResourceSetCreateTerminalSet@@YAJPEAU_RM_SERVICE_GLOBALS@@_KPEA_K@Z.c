/*
 * XREFs of ?RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z @ 0x1800011BC
 * Callers:
 *     ?CreateTerminalResourceSet@RmpRpExtResourceSetThunk@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z @ 0x180001110 (-CreateTerminalResourceSet@RmpRpExtResourceSetThunk@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z.c)
 *     RmtSrv_RS_CreateTerminalResourceSet @ 0x180030630 (RmtSrv_RS_CreateTerminalResourceSet.c)
 * Callees:
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z @ 0x180001944 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x180013940 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetCreateTerminalSet(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  const GUID *v5; // r8
  const GUID *v6; // r9
  struct ExecutionModel::ResourceSet *v7; // rbx
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v9; // rdi
  int v10; // edx
  const GUID *v11; // r8
  const GUID *v12; // r9
  DWORD v13; // ebx
  int v15; // eax
  unsigned __int64 v16; // rax
  unsigned int v17; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-CCh] BYREF
  struct ExecutionModel::ResourceSet *v19; // [rsp+38h] [rbp-C8h] BYREF
  ExecutionModel::ResourceSet *v20; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v22[80]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v23; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v24; // [rsp+C0h] [rbp-40h]
  int v25; // [rsp+C8h] [rbp-38h]
  int v26; // [rsp+CCh] [rbp-34h]
  unsigned __int64 *v27; // [rsp+D0h] [rbp-30h]
  int v28; // [rsp+D8h] [rbp-28h]
  int v29; // [rsp+DCh] [rbp-24h]
  unsigned __int64 *v30; // [rsp+E0h] [rbp-20h]
  int v31; // [rsp+E8h] [rbp-18h]
  int v32; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF

  v21 = a2;
  RmpUtilCheckStartLockTracking(&v18, (struct _CEM_LOCK_TRACKER *)v22);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180056805, v5, v6, 2u, &pData);
  v20 = 0LL;
  v7 = 0LL;
  v19 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), v21, &v20);
  v9 = v20;
  if ( EmSetById >= 0 )
  {
    v15 = ExecutionModel::ResourceSet::CreateTerminalResourceSet(v20, &v19);
    v7 = v19;
    v17 = v15;
    if ( v15 >= 0 )
    {
      v16 = *((_QWORD *)v19 + 237);
      v17 = 0;
      *a3 = v16;
    }
  }
  else
  {
    v17 = EmSetById | 0x10000000;
  }
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v24 = &v17;
    v27 = &v21;
    v28 = v10 - 1;
    v31 = v10 - 1;
    v25 = 4;
    v30 = a3;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180056A0A, v11, v12, 5u, &v23);
  }
  if ( v9 )
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v7 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v18 )
  {
    v13 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v13, 0LL);
    }
  }
  return v17;
}
