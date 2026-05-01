/*
 * XREFs of ?RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z @ 0x1800510BC
 * Callers:
 *     RmtSrv_RS_CreateTerminalResourceSet @ 0x18004D3C0 (RmtSrv_RS_CreateTerminalResourceSet.c)
 *     ?CreateTerminalResourceSet@RmpRpExtResourceSetThunk@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z @ 0x18004D6E0 (-CreateTerminalResourceSet@RmpRpExtResourceSetThunk@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180024DE4 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x1800272D8 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z @ 0x18005A9D4 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z.c)
 */

__int64 __fastcall RmSrvResourceSetCreateTerminalSet(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  struct ExecutionModel::ResourceSet *v5; // rbx
  int EmSetById; // eax
  struct ExecutionModel::ResourceSet *v7; // rdi
  int v8; // eax
  unsigned __int64 v9; // rax
  int v10; // edx
  DWORD v11; // ebx
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-CCh] BYREF
  struct ExecutionModel::ResourceSet *v15; // [rsp+38h] [rbp-C8h] BYREF
  struct ExecutionModel::ResourceSet *v16; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v18[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v20; // [rsp+100h] [rbp+0h]
  int v21; // [rsp+108h] [rbp+8h]
  int v22; // [rsp+10Ch] [rbp+Ch]
  unsigned __int64 *v23; // [rsp+110h] [rbp+10h]
  int v24; // [rsp+118h] [rbp+18h]
  int v25; // [rsp+11Ch] [rbp+1Ch]
  unsigned __int64 *v26; // [rsp+120h] [rbp+20h]
  int v27; // [rsp+128h] [rbp+28h]
  int v28; // [rsp+12Ch] [rbp+2Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF

  v17 = a2;
  RmpUtilCheckStartLockTracking(&v14, (struct _CEM_LOCK_TRACKER *)v18);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007CE74, 0LL, 0LL, 2u, &pData);
  v16 = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 560), v17, &v16);
  v7 = v16;
  if ( EmSetById >= 0 )
  {
    v8 = ExecutionModel::ResourceSet::CreateTerminalResourceSet(v16, &v15);
    v5 = v15;
    v13 = v8;
    if ( v8 >= 0 )
    {
      v9 = *((_QWORD *)v15 + 235);
      v13 = 0;
      *a3 = v9;
    }
  }
  else
  {
    v13 = EmSetById | 0x10000000;
  }
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v20 = &v13;
    v23 = &v17;
    v24 = v10 - 1;
    v27 = v10 - 1;
    v21 = 4;
    v26 = a3;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007CF4B, 0LL, 0LL, 5u, &v19);
  }
  if ( v7 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v5 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v14 )
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
