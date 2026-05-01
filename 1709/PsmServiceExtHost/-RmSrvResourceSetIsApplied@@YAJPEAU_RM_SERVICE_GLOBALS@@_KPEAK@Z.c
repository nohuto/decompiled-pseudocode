/*
 * XREFs of ?RmSrvResourceSetIsApplied@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAK@Z @ 0x18003436C
 * Callers:
 *     ?IsApplied@RmpRpExtResourceSetThunk@@UEBA_NXZ @ 0x1800306A0 (-IsApplied@RmpRpExtResourceSetThunk@@UEBA_NXZ.c)
 * Callees:
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x180013940 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetIsApplied(struct _RM_SERVICE_GLOBALS *a1, unsigned __int64 a2, unsigned int *a3)
{
  const GUID *v5; // r8
  const GUID *v6; // r9
  int EmSetById; // eax
  struct ExecutionModel::ResourceSet *v8; // rbx
  const GUID *v9; // r8
  const GUID *v10; // r9
  DWORD v11; // ebx
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  struct ExecutionModel::ResourceSet *v14; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v17[80]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v18; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v19; // [rsp+C0h] [rbp-40h]
  int v20; // [rsp+C8h] [rbp-38h]
  int v21; // [rsp+CCh] [rbp-34h]
  unsigned __int64 *v22; // [rsp+D0h] [rbp-30h]
  int v23; // [rsp+D8h] [rbp-28h]
  int v24; // [rsp+DCh] [rbp-24h]
  struct ExecutionModel::ResourceSet **v25; // [rsp+E0h] [rbp-20h]
  int v26; // [rsp+E8h] [rbp-18h]
  int v27; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF

  v16 = a2;
  RmpUtilCheckStartLockTracking(&v15, (struct _CEM_LOCK_TRACKER *)v17);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800564A2, v5, v6, 2u, &pData);
  v14 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), v16, &v14);
  v8 = v14;
  if ( EmSetById >= 0 )
  {
    *a3 = *((unsigned __int8 *)v14 + 12);
    RmpReleaseGlobalLock();
    v13 = 0;
  }
  else
  {
    v13 = EmSetById | 0x10000000;
    RmpReleaseGlobalLock();
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v19 = &v13;
    v22 = &v16;
    LODWORD(v14) = *a3;
    v25 = &v14;
    v20 = 4;
    v23 = 8;
    v26 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005625E, v9, v10, 5u, &v18);
  }
  if ( v8 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v15 )
  {
    v11 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v11, 0LL);
    }
  }
  return v13;
}
