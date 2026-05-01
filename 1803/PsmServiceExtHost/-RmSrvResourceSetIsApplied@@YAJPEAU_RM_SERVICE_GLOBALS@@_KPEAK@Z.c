/*
 * XREFs of ?RmSrvResourceSetIsApplied@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAK@Z @ 0x180051448
 * Callers:
 *     ?IsApplied@RmpRpExtResourceSetThunk@@UEBA_NXZ @ 0x18004D7B0 (-IsApplied@RmpRpExtResourceSetThunk@@UEBA_NXZ.c)
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

__int64 __fastcall RmSrvResourceSetIsApplied(struct _RM_SERVICE_GLOBALS *a1, unsigned __int64 a2, unsigned int *a3)
{
  int EmSetById; // eax
  struct ExecutionModel::ResourceSet *v6; // rbx
  DWORD v7; // ebx
  unsigned int v9; // [rsp+30h] [rbp-D0h] BYREF
  struct ExecutionModel::ResourceSet *v10; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v11; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v14; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v15; // [rsp+100h] [rbp+0h]
  int v16; // [rsp+108h] [rbp+8h]
  int v17; // [rsp+10Ch] [rbp+Ch]
  unsigned __int64 *v18; // [rsp+110h] [rbp+10h]
  int v19; // [rsp+118h] [rbp+18h]
  int v20; // [rsp+11Ch] [rbp+1Ch]
  struct ExecutionModel::ResourceSet **v21; // [rsp+120h] [rbp+20h]
  int v22; // [rsp+128h] [rbp+28h]
  int v23; // [rsp+12Ch] [rbp+2Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF

  v12 = a2;
  RmpUtilCheckStartLockTracking(&v11, (struct _CEM_LOCK_TRACKER *)v13);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007CA8B, 0LL, 0LL, 2u, &pData);
  v10 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 560), v12, &v10);
  v6 = v10;
  if ( EmSetById >= 0 )
  {
    *a3 = *((unsigned __int8 *)v10 + 12);
    RmpReleaseGlobalLock();
    v9 = 0;
  }
  else
  {
    v9 = EmSetById | 0x10000000;
    RmpReleaseGlobalLock();
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v15 = &v9;
    v18 = &v12;
    LODWORD(v10) = *a3;
    v21 = &v10;
    v16 = 4;
    v19 = 8;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007C6D9, 0LL, 0LL, 5u, &v14);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v11 )
  {
    v7 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v7, 0LL);
    }
  }
  return v9;
}
