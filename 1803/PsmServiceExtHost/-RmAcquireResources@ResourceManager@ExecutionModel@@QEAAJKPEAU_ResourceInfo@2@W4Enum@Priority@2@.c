/*
 * XREFs of ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180002930
 * Callers:
 *     RmgrSrv_RmAcquireResources @ 0x180001620 (RmgrSrv_RmAcquireResources.c)
 * Callees:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x1800018CC (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002538 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ??$emplace@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@2@@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@2@@utl@@_N@1@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@4@@Z @ 0x1800030E4 (--$emplace@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@2@@-$_HashTable@PE.c)
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D788 (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAcquireResources(
        __int64 a1,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        __int64 a11,
        _QWORD *a12)
{
  struct _RM_SERVICE_GLOBALS **v12; // rbx
  int v13; // edi
  struct ExecutionModel::ExternalResourceSet *v16; // r13
  struct _RM_ACTIVITY_HOST *v17; // r15
  unsigned int v18; // edx
  struct ExecutionModel::_ResourceInfo *v19; // rcx
  char v20; // bl
  __int64 v21; // rdi
  unsigned int *v22; // rsi
  _QWORD *v23; // rsi
  int v24; // ebx
  int v25; // eax
  const struct _TlgProvider_t *v26; // rcx
  unsigned __int8 v27; // r9
  DWORD v28; // ebx
  unsigned __int8 v30; // [rsp+38h] [rbp-C8h]
  char v31; // [rsp+70h] [rbp-90h]
  int v32; // [rsp+74h] [rbp-8Ch] BYREF
  int v33; // [rsp+78h] [rbp-88h] BYREF
  struct ExecutionModel::ExternalResourceSet *v34; // [rsp+80h] [rbp-80h] BYREF
  struct _RM_SERVICE_GLOBALS **v35; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v36; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+98h] [rbp-68h] BYREF
  struct _RM_ACTIVITY_HOST *v38; // [rsp+A0h] [rbp-60h] BYREF
  int v39; // [rsp+A8h] [rbp-58h] BYREF
  int v40[2]; // [rsp+B0h] [rbp-50h] BYREF
  char v41[144]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v42[560]; // [rsp+150h] [rbp+50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+380h] [rbp+280h] BYREF
  int *v44; // [rsp+3A0h] [rbp+2A0h]
  __int64 v45; // [rsp+3A8h] [rbp+2A8h]
  int *v46; // [rsp+3B0h] [rbp+2B0h]
  __int64 v47; // [rsp+3B8h] [rbp+2B8h]
  int *v48; // [rsp+3C0h] [rbp+2C0h]
  __int64 v49; // [rsp+3C8h] [rbp+2C8h]
  int *v50; // [rsp+3D0h] [rbp+2D0h]
  __int64 v51; // [rsp+3D8h] [rbp+2D8h]
  __int64 *v52; // [rsp+3E0h] [rbp+2E0h]
  __int64 v53; // [rsp+3E8h] [rbp+2E8h]
  struct _RM_ACTIVITY_HOST **v54; // [rsp+3F0h] [rbp+2F0h]
  __int64 v55; // [rsp+3F8h] [rbp+2F8h]
  struct _RM_SERVICE_GLOBALS ***v56; // [rsp+400h] [rbp+300h]
  __int64 v57; // [rsp+408h] [rbp+308h]
  _QWORD *v58; // [rsp+410h] [rbp+310h]
  __int64 v59; // [rsp+418h] [rbp+318h]
  struct ExecutionModel::ExternalResourceSet **v60; // [rsp+420h] [rbp+320h]
  __int64 v61; // [rsp+428h] [rbp+328h]

  v12 = (struct _RM_SERVICE_GLOBALS **)g_pResourceManager;
  v13 = a4;
  v37 = a11;
  v36 = a12;
  v35 = (struct _RM_SERVICE_GLOBALS **)g_pResourceManager;
  v33 = a4;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v41);
  v34 = 0LL;
  v16 = 0LL;
  v38 = 0LL;
  v17 = 0LL;
  if ( a2 < 0x32 && a2 && a3 && a12 && a7 )
  {
    v31 = 1;
    v18 = 0;
    v19 = a3;
    while ( (unsigned int)(*(_DWORD *)v19 - 22) <= 4 )
    {
      ++v18;
      v19 = (struct ExecutionModel::_ResourceInfo *)((char *)v19 + 24);
      if ( v18 >= a2 )
        goto LABEL_11;
    }
    v31 = 0;
LABEL_11:
    RmpAcquireGlobalLock();
    v32 = (*((__int64 (__fastcall **)(struct _RM_SERVICE_GLOBALS **, _QWORD, _BYTE *))*v12 + 5))(v12, a5, v42);
    if ( v32 >= 0 )
    {
      RmpActivityHostFindByPsmId(v12[19], (struct _RM_PSM_HOST_INFO *)v42, &v38);
      v17 = v38;
    }
    v20 = 0;
    v21 = 0LL;
    v22 = (unsigned int *)a3;
    while ( 1 )
    {
      v32 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v35, *v22, a5, 0);
      if ( v32 < 0 )
        break;
      v21 = (unsigned int)(v21 + 1);
      v22 += 6;
      if ( (unsigned int)v21 >= a2 )
        goto LABEL_21;
    }
    if ( (a8 & 1) == 0
      || v31
      && (v32 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v35, *((_DWORD *)a3 + 6 * v21), a5, 1),
          v32 < 0) )
    {
      v13 = v33;
      goto LABEL_24;
    }
    v20 = 1;
LABEL_21:
    v23 = v36;
    v13 = v33;
    v30 = v20;
    v24 = (int)v35;
    v25 = ExecutionModel::ExternalResourceSet::CreateInstance(
            (__int64)v35[5],
            a2,
            a3,
            v33,
            a5,
            a6,
            a7,
            v30,
            a8,
            a9,
            a10,
            (__int64)v17,
            v37,
            &v34);
    v16 = v34;
    v32 = v25;
    if ( v25 >= 0 )
    {
      *v23 = v34;
      utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::emplace<ExecutionModel::ResourceHandle__ * &,ExecutionModel::ExternalResourceSet * &>(
        v24 + 112,
        (int)v40);
      (*(void (__fastcall **)(struct ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v16 + 16LL))(v16);
      v32 = 0;
    }
LABEL_24:
    RmpReleaseGlobalLock();
    if ( v17 )
      RmpObjectRelease(v17);
  }
  else
  {
    v32 = -2147024809;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v45 = 4LL;
    v44 = &v32;
    v46 = v40;
    v48 = &v33;
    v50 = &v39;
    LODWORD(v37) = a5;
    v52 = &v37;
    LODWORD(v38) = a8;
    v54 = &v38;
    LODWORD(v35) = a9;
    v56 = &v35;
    LODWORD(v36) = a10;
    v58 = &v36;
    LODWORD(v34) = v27;
    v60 = &v34;
    *(_QWORD *)v40 = v16;
    v47 = 8LL;
    v33 = a2;
    v49 = 4LL;
    v39 = v13;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 4LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 4LL;
    TlgWrite(v26, &unk_18007C2DB, 0LL, 0LL, 0xBu, &pData);
  }
  v28 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v28, 0LL);
  }
  return (unsigned int)v32;
}
