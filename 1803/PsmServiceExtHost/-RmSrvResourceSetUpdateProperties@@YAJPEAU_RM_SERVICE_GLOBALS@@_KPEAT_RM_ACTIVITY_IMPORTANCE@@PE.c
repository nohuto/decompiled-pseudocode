/*
 * XREFs of ?RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180051808
 * Callers:
 *     ?UpdateImportanceAndResourceLimits@RmpRpExtResourceSetThunk@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18004DAA0 (-UpdateImportanceAndResourceLimits@RmpRpExtResourceSetThunk@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@P.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180024DE4 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x1800272D8 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetUpdateProperties(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        union _RM_ACTIVITY_IMPORTANCE *a3,
        struct _RM_RESOURCE_LIMITS *a4)
{
  int EmSetById; // eax
  struct ExecutionModel::ResourceSet *v8; // rbx
  DWORD v9; // ebx
  bool v11; // [rsp+30h] [rbp-D0h] BYREF
  bool v12; // [rsp+31h] [rbp-CFh] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v14; // [rsp+38h] [rbp-C8h] BYREF
  struct ExecutionModel::ResourceSet *v15; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v17[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v18; // [rsp+E0h] [rbp-20h] BYREF
  int *v19; // [rsp+100h] [rbp+0h]
  int v20; // [rsp+108h] [rbp+8h]
  int v21; // [rsp+10Ch] [rbp+Ch]
  unsigned __int64 *v22; // [rsp+110h] [rbp+10h]
  int v23; // [rsp+118h] [rbp+18h]
  int v24; // [rsp+11Ch] [rbp+1Ch]
  bool *v25; // [rsp+120h] [rbp+20h]
  int v26; // [rsp+128h] [rbp+28h]
  int v27; // [rsp+12Ch] [rbp+2Ch]
  bool *v28; // [rsp+130h] [rbp+30h]
  int v29; // [rsp+138h] [rbp+38h]
  int v30; // [rsp+13Ch] [rbp+3Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF

  v16 = a2;
  RmpUtilCheckStartLockTracking(&v14, (struct _CEM_LOCK_TRACKER *)v17);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007D213, 0LL, 0LL, 2u, &pData);
  v15 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 560), v16, &v15);
  v8 = v15;
  if ( EmSetById >= 0 )
  {
    RmpReleaseGlobalLock();
    v13 = (*(__int64 (__fastcall **)(struct ExecutionModel::ResourceSet *, union _RM_ACTIVITY_IMPORTANCE *, struct _RM_RESOURCE_LIMITS *))(*(_QWORD *)v8 + 80LL))(
            v8,
            a3,
            a4);
    if ( v13 >= 0 )
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
    v19 = &v13;
    v20 = 4;
    v11 = a3 != 0LL;
    v22 = &v16;
    v27 = 0;
    v25 = &v11;
    v23 = 8;
    v12 = a4 != 0LL;
    v26 = 1;
    v30 = 0;
    v28 = &v12;
    v29 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007CC01, 0LL, 0LL, 6u, &v18);
  }
  if ( v8 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v14 )
  {
    v9 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v9, 0LL);
    }
  }
  return (unsigned int)v13;
}
