/*
 * XREFs of ?RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x1800185D0
 * Callers:
 *     ?UpdateImportanceAndResourceLimits@RmpRpExtResourceSetThunk@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x1800162E0 (-UpdateImportanceAndResourceLimits@RmpRpExtResourceSetThunk@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@P.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180011420 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x180013940 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetUpdateProperties(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        union _RM_ACTIVITY_IMPORTANCE *a3,
        struct _RM_RESOURCE_LIMITS *a4)
{
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v8; // rbx
  __int64 (__fastcall *v9)(ExecutionModel::ResourceSet *, union _RM_ACTIVITY_IMPORTANCE *, struct _RM_RESOURCE_LIMITS *); // rax
  int updated; // eax
  __int64 (__fastcall *v11)(ExecutionModel::ResourceSet *); // rax
  DWORD v12; // ebx
  bool v14; // [rsp+30h] [rbp-D0h] BYREF
  bool v15; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v17; // [rsp+38h] [rbp-C8h] BYREF
  ExecutionModel::ResourceSet *v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR v21; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[80]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v24; // [rsp+D0h] [rbp-30h]
  int v25; // [rsp+D8h] [rbp-28h]
  int v26; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+E0h] [rbp-20h] BYREF
  void *v28; // [rsp+F0h] [rbp-10h]
  int v29; // [rsp+F8h] [rbp-8h]
  int v30; // [rsp+FCh] [rbp-4h]
  unsigned int *v31; // [rsp+100h] [rbp+0h]
  int v32; // [rsp+108h] [rbp+8h]
  int v33; // [rsp+10Ch] [rbp+Ch]
  unsigned __int64 *v34; // [rsp+110h] [rbp+10h]
  int v35; // [rsp+118h] [rbp+18h]
  int v36; // [rsp+11Ch] [rbp+1Ch]
  bool *v37; // [rsp+120h] [rbp+20h]
  int v38; // [rsp+128h] [rbp+28h]
  int v39; // [rsp+12Ch] [rbp+2Ch]
  bool *v40; // [rsp+130h] [rbp+30h]
  int v41; // [rsp+138h] [rbp+38h]
  int v42; // [rsp+13Ch] [rbp+3Ch]

  v19 = a2;
  RmpUtilCheckStartLockTracking(&v17, (struct _CEM_LOCK_TRACKER *)v22);
  if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180056D4A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800670C8;
    v24 = &unk_180056D55;
    UserData.Reserved = 2;
    v25 = 32;
    v26 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v18 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), v19, &v18);
  v8 = v18;
  if ( EmSetById < 0 )
  {
    v16 = EmSetById | 0x10000000;
    RmpReleaseGlobalLock();
  }
  else
  {
    RmpReleaseGlobalLock();
    v9 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, union _RM_ACTIVITY_IMPORTANCE *, struct _RM_RESOURCE_LIMITS *))(*(_QWORD *)v8 + 80LL);
    if ( v9 == ExecutionModel::ResourceSet::UpdateImportanceAndResourceLimits )
      updated = ExecutionModel::ResourceSet::UpdateImportanceAndResourceLimits(v8, a3, a4);
    else
      updated = v9(v8, a3, a4);
    v16 = updated;
    if ( updated >= 0 )
      v16 = 0;
  }
  if ( hProvider > 4u && (qword_1800670D0 & 9) != 0 && (qword_1800670D8 & 9) == qword_1800670D8 )
  {
    v33 = 0;
    v36 = 0;
    v31 = &v16;
    v32 = 4;
    v14 = a3 != 0LL;
    v34 = &v19;
    v39 = 0;
    v37 = &v14;
    v35 = 8;
    v15 = a4 != 0LL;
    v38 = 1;
    v42 = 0;
    v40 = &v15;
    v41 = 1;
    *(_DWORD *)&v21.Level = 516;
    v27.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&v21.Id = ((unsigned int)&unk_18005660D - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v21.Keyword = 9LL;
    v27.Size = *(unsigned __int16 *)off_1800670C8;
    v28 = &unk_180056618;
    v27.Reserved = 2;
    v29 = 88;
    v30 = 1;
    EventWriteTransfer(RegHandle, &v21, 0LL, 0LL, 6u, &v27);
    v8 = v18;
  }
  if ( v8 )
  {
    v11 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v8 + 16LL);
    if ( v11 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v8);
    else
      v11(v8);
  }
  if ( v17 )
  {
    v12 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v12, 0LL);
    }
  }
  return v16;
}
