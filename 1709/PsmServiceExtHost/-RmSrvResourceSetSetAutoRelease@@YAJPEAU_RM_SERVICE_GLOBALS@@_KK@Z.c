/*
 * XREFs of ?RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180018934
 * Callers:
 *     ?SetAutoRelease@RmpRpExtResourceSetThunk@@UEAAX_N@Z @ 0x1800162A0 (-SetAutoRelease@RmpRpExtResourceSetThunk@@UEAAX_N@Z.c)
 *     RmCoreRpcSrvAcquireResourceSet @ 0x18001ADA0 (RmCoreRpcSrvAcquireResourceSet.c)
 *     RmtSrv_RS_SetAutoRelease @ 0x180030660 (RmtSrv_RS_SetAutoRelease.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x180013940 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetSetAutoRelease(struct _RM_SERVICE_GLOBALS *a1, unsigned __int64 a2, int a3)
{
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v6; // rbx
  __int64 (__fastcall *v7)(ExecutionModel::ResourceSet *); // rax
  DWORD v8; // ebx
  unsigned int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v12; // [rsp+38h] [rbp-C8h] BYREF
  ExecutionModel::ResourceSet *v13; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR v16; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[80]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v19; // [rsp+D0h] [rbp-30h]
  int v20; // [rsp+D8h] [rbp-28h]
  int v21; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+E0h] [rbp-20h] BYREF
  void *v23; // [rsp+F0h] [rbp-10h]
  int v24; // [rsp+F8h] [rbp-8h]
  int v25; // [rsp+FCh] [rbp-4h]
  unsigned int *v26; // [rsp+100h] [rbp+0h]
  int v27; // [rsp+108h] [rbp+8h]
  int v28; // [rsp+10Ch] [rbp+Ch]
  unsigned __int64 *v29; // [rsp+110h] [rbp+10h]
  int v30; // [rsp+118h] [rbp+18h]
  int v31; // [rsp+11Ch] [rbp+1Ch]
  int *v32; // [rsp+120h] [rbp+20h]
  int v33; // [rsp+128h] [rbp+28h]
  int v34; // [rsp+12Ch] [rbp+2Ch]

  v14 = a2;
  RmpUtilCheckStartLockTracking(&v12, (struct _CEM_LOCK_TRACKER *)v17);
  if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800562CF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800670C8;
    v19 = &unk_1800562DA;
    UserData.Reserved = 2;
    v20 = 30;
    v21 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v13 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), v14, &v13);
  v6 = v13;
  if ( EmSetById < 0 )
  {
    v10 = EmSetById | 0x10000000;
  }
  else
  {
    *((_DWORD *)v13 + 363) &= ~4u;
    *((_DWORD *)v6 + 363) |= a3 != 0 ? 4 : 0;
    v10 = 0;
  }
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && (qword_1800670D0 & 9) != 0 && (qword_1800670D8 & 9) == qword_1800670D8 )
  {
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v26 = &v10;
    v29 = &v14;
    v32 = &v11;
    v27 = 4;
    v30 = 8;
    v11 = a3;
    v33 = 4;
    *(_DWORD *)&v16.Level = 516;
    v22.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&v16.Id = ((unsigned int)&unk_180056561 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v16.Keyword = 9LL;
    v22.Size = *(unsigned __int16 *)off_1800670C8;
    v23 = &unk_18005656C;
    v22.Reserved = 2;
    v24 = 63;
    v25 = 1;
    EventWriteTransfer(RegHandle, &v16, 0LL, 0LL, 5u, &v22);
    v6 = v13;
  }
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v6 + 16LL);
    if ( v7 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v6);
    else
      v7(v6);
  }
  if ( v12 )
  {
    v8 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v8, 0LL);
    }
  }
  return v10;
}
