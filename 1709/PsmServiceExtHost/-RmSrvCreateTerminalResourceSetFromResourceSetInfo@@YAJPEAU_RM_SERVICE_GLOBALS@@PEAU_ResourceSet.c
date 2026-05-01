/*
 * XREFs of ?RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEA_K@Z @ 0x1800334DC
 * Callers:
 *     RmtSrv_RM_CreateTerminalResourceSet @ 0x180030570 (RmtSrv_RM_CreateTerminalResourceSet.c)
 * Callees:
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEBGPEAT_RM_SID@@KK_KPEAPEAVResourceSet@2@@Z @ 0x180003200 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSet.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180014AD0 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180014B10 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvCreateTerminalResourceSetFromResourceSetInfo(
        struct _RM_SERVICE_GLOBALS *a1,
        struct ExecutionModel::_ResourceSetInfo *a2,
        unsigned __int64 *a3)
{
  const GUID *v6; // r8
  const GUID *v7; // r9
  __int64 v8; // rcx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  HANDLE *v17; // rbx
  struct ExecutionModel::ResourceSet *v18; // rcx
  unsigned __int64 v19; // rax
  const GUID *v20; // r8
  const GUID *v21; // r9
  DWORD v22; // ebx
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-ACh] BYREF
  struct _RM_PARTITION *v26; // [rsp+58h] [rbp-A8h] BYREF
  struct ExecutionModel::ResourceSet *v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v29[384]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v30[80]; // [rsp+1F0h] [rbp+F0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+240h] [rbp+140h] BYREF
  int *v32; // [rsp+260h] [rbp+160h]
  int v33; // [rsp+268h] [rbp+168h]
  int v34; // [rsp+26Ch] [rbp+16Ch]
  __int64 *v35; // [rsp+270h] [rbp+170h]
  int v36; // [rsp+278h] [rbp+178h]
  int v37; // [rsp+27Ch] [rbp+17Ch]

  RmpUtilCheckStartLockTracking(&v25, (struct _CEM_LOCK_TRACKER *)v30);
  v26 = 0LL;
  v27 = 0LL;
  v28 = -1LL;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180056898, v6, v7, 2u, &pData);
  RmpPartitionTableFindOrCreatePartition((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312), *((void **)a1 + 45), &v26);
  RmpAcquireGlobalLock();
  v8 = 3LL;
  v9 = v29;
  do
  {
    v10 = *((_OWORD *)a2 + 1);
    *v9 = *(_OWORD *)a2;
    v11 = *((_OWORD *)a2 + 2);
    v9[1] = v10;
    v12 = *((_OWORD *)a2 + 3);
    v9[2] = v11;
    v13 = *((_OWORD *)a2 + 4);
    v9[3] = v12;
    v14 = *((_OWORD *)a2 + 5);
    v9[4] = v13;
    v15 = *((_OWORD *)a2 + 6);
    v9[5] = v14;
    v16 = *((_OWORD *)a2 + 7);
    a2 = (struct ExecutionModel::_ResourceSetInfo *)((char *)a2 + 128);
    v9[6] = v15;
    v9 += 8;
    *(v9 - 1) = v16;
    --v8;
  }
  while ( v8 );
  v17 = (HANDLE *)v26;
  v24 = ExecutionModel::ResourceManager::CreateTerminalResourceSetFromResourceSetInfo(
          *((ExecutionModel::ResourceManager **)a1 + 237),
          (__int64)v29,
          v26,
          0LL,
          0LL,
          0,
          0,
          0xFFFFFFFFFFFFFFFFuLL,
          &v27);
  RmpReleaseGlobalLock();
  v18 = v27;
  if ( v24 >= 0 )
  {
    v19 = *((_QWORD *)v27 + 237);
    v24 = 0;
    v28 = v19;
    *a3 = v19;
  }
  if ( v18 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v17 )
    RmpPartitionRelease(v17);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v34 = 0;
    v37 = 0;
    v32 = &v24;
    v35 = &v28;
    v33 = 4;
    v36 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180056FC1, v20, v21, 4u, &pData);
  }
  if ( v25 )
  {
    v22 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v22, 0LL);
    }
  }
  return (unsigned int)v24;
}
