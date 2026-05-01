/*
 * XREFs of ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180002984
 * Callers:
 *     RmgrSrv_RmAcquireResources @ 0x180001CB0 (RmgrSrv_RmAcquireResources.c)
 * Callees:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180001F68 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002EB8 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?_EmplaceImpl@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x180003A34 (-_EmplaceImpl@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017BA0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800269EC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
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
  ExecutionModel::ResourceManager *v12; // rsi
  _QWORD *v13; // r15
  int v14; // r12d
  unsigned int v16; // r14d
  struct ExecutionModel::ExternalResourceSet *v17; // rdi
  unsigned int v18; // edx
  struct ExecutionModel::_ResourceInfo *v19; // rcx
  __int64 v20; // rcx
  _OWORD *v21; // rdx
  _OWORD *v22; // rax
  __int64 v23; // r8
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int64 v32; // rcx
  __int128 v33; // xmm1
  __int64 v34; // rax
  char v35; // r14
  struct _RM_OBJECT_HEADER *v36; // r12
  unsigned int v37; // esi
  struct ExecutionModel::_ResourceInfo *v38; // r15
  __int64 v39; // r9
  int v40; // r14d
  int v41; // eax
  void *v42; // rax
  int v43; // r8d
  void *v44; // rsi
  const struct _TlgProvider_t *v45; // rcx
  const GUID *v46; // r8
  const GUID *v47; // r9
  DWORD v48; // edi
  __int64 v50; // [rsp+38h] [rbp-C8h]
  __int64 v51; // [rsp+48h] [rbp-B8h]
  char v52; // [rsp+70h] [rbp-90h]
  int v53; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v54; // [rsp+78h] [rbp-88h] BYREF
  int v55; // [rsp+7Ch] [rbp-84h] BYREF
  struct ExecutionModel::ExternalResourceSet *v56; // [rsp+80h] [rbp-80h] BYREF
  ExecutionModel::ResourceManager *v57; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v58; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-60h] BYREF
  int v61[2]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v62[80]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v63[140]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v64[560]; // [rsp+340h] [rbp+240h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+570h] [rbp+470h] BYREF
  int *v66; // [rsp+590h] [rbp+490h]
  __int64 v67; // [rsp+598h] [rbp+498h]
  int *v68; // [rsp+5A0h] [rbp+4A0h]
  __int64 v69; // [rsp+5A8h] [rbp+4A8h]
  int *v70; // [rsp+5B0h] [rbp+4B0h]
  __int64 v71; // [rsp+5B8h] [rbp+4B8h]
  unsigned int *v72; // [rsp+5C0h] [rbp+4C0h]
  __int64 v73; // [rsp+5C8h] [rbp+4C8h]
  __int64 *v74; // [rsp+5D0h] [rbp+4D0h]
  __int64 v75; // [rsp+5D8h] [rbp+4D8h]
  struct ExecutionModel::ExternalResourceSet **v76; // [rsp+5E0h] [rbp+4E0h]
  __int64 v77; // [rsp+5E8h] [rbp+4E8h]
  ExecutionModel::ResourceManager **v78; // [rsp+5F0h] [rbp+4F0h]
  __int64 v79; // [rsp+5F8h] [rbp+4F8h]
  _QWORD *v80; // [rsp+600h] [rbp+500h]
  __int64 v81; // [rsp+608h] [rbp+508h]
  PVOID *p_P; // [rsp+610h] [rbp+510h]
  __int64 v83; // [rsp+618h] [rbp+518h]

  v12 = g_pResourceManager;
  v13 = a12;
  v14 = a4;
  v60 = a11;
  v58 = a12;
  v16 = a2;
  v57 = g_pResourceManager;
  v53 = 0;
  v55 = a4;
  v54 = a2;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v62);
  v56 = 0LL;
  v17 = 0LL;
  P = 0LL;
  if ( v16 && a3 && a12 && a7 )
  {
    v52 = 1;
    v18 = 0;
    v19 = a3;
    while ( (unsigned int)(*(_DWORD *)v19 - 22) <= 4 )
    {
      ++v18;
      v19 = (struct ExecutionModel::_ResourceInfo *)((char *)v19 + 24);
      if ( v18 >= v16 )
        goto LABEL_9;
    }
    v52 = 0;
LABEL_9:
    RmpAcquireGlobalLock();
    memset_0(v63, 0, 0x228uLL);
    v20 = *((_QWORD *)v12 + 26);
    v63[0] = a5;
    if ( (int)RmpActivityHostFindByTypeAndIdentifier(v20, 1LL, v63, &P) < 0 )
    {
      v53 = (*(__int64 (__fastcall **)(ExecutionModel::ResourceManager *, _QWORD, _BYTE *))(*(_QWORD *)v12 + 40LL))(
              v12,
              a5,
              v64);
      if ( v53 >= 0 )
      {
        v21 = v63;
        v22 = v64;
        v23 = 4LL;
        do
        {
          v24 = v22[1];
          *v21 = *v22;
          v25 = v22[2];
          v21[1] = v24;
          v26 = v22[3];
          v21[2] = v25;
          v27 = v22[4];
          v21[3] = v26;
          v28 = v22[5];
          v21[4] = v27;
          v29 = v22[6];
          v21[5] = v28;
          v30 = v22[7];
          v22 += 8;
          v21[6] = v29;
          v21 += 8;
          *(v21 - 1) = v30;
          --v23;
        }
        while ( v23 );
        v31 = *v22;
        v32 = *((_QWORD *)v12 + 26);
        v33 = v22[1];
        v34 = *((_QWORD *)v22 + 4);
        *v21 = v31;
        v21[1] = v33;
        *((_QWORD *)v21 + 4) = v34;
        RmpActivityHostFindByTypeAndIdentifier(v32, 0LL, v63, &P);
      }
    }
    v35 = 0;
    v36 = (struct _RM_OBJECT_HEADER *)P;
    v37 = 0;
    if ( v54 )
    {
      v38 = a3;
      while ( 1 )
      {
        v53 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v57, *(unsigned int *)v38, a5, 0LL);
        if ( v53 < 0 )
          break;
        ++v37;
        v38 = (struct ExecutionModel::_ResourceInfo *)((char *)v38 + 24);
        if ( v37 >= v54 )
          goto LABEL_18;
      }
      if ( (a8 & 1) != 0 )
      {
        if ( !v52
          || (LOBYTE(v39) = 1,
              v53 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(
                      v57,
                      *((unsigned int *)a3 + 6 * v37),
                      a5,
                      v39),
              v53 >= 0) )
        {
          v35 = 1;
LABEL_18:
          v13 = v58;
          goto LABEL_19;
        }
      }
    }
    else
    {
LABEL_19:
      LODWORD(v51) = a9;
      LOBYTE(v50) = v35;
      v40 = (int)v57;
      v41 = ExecutionModel::ExternalResourceSet::CreateInstance(
              *((_QWORD *)v57 + 12),
              v54,
              a3,
              v55,
              a5,
              a6,
              a7,
              v50,
              a8,
              v51,
              a10,
              v36,
              v60,
              &v56);
      v17 = v56;
      v53 = v41;
      if ( v41 >= 0 )
      {
        *v13 = v56;
        v42 = operator new(0x28uLL, (const struct std::nothrow_t *)&unk_180052631);
        v44 = v42;
        if ( v42 )
        {
          *((_QWORD *)v42 + 3) = *v13;
          *((_QWORD *)v42 + 4) = v17;
          if ( v17 )
            (*(void (__fastcall **)(struct ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v17 + 8LL))(v17);
        }
        else
        {
          v44 = 0LL;
        }
        utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_EmplaceImpl(
          v40 + 168,
          (int)v61,
          v43,
          0,
          v44);
        (*(void (__fastcall **)(struct ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
    RmpReleaseGlobalLock();
    if ( v36 )
      RmpObjectRelease(v36);
    v16 = v54;
    v14 = v55;
  }
  else
  {
    v53 = -2147024809;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v67 = 4LL;
    v66 = &v53;
    v68 = v61;
    v70 = &v55;
    v72 = &v54;
    LODWORD(v60) = a5;
    v74 = &v60;
    LODWORD(v56) = a8;
    v76 = &v56;
    LODWORD(v57) = a9;
    v78 = &v57;
    LODWORD(v58) = a10;
    v80 = &v58;
    LODWORD(P) = (unsigned __int8)v47;
    p_P = &P;
    *(_QWORD *)v61 = v17;
    v69 = 8LL;
    v55 = v16;
    v71 = 4LL;
    v54 = v14;
    v73 = 4LL;
    v75 = 4LL;
    v77 = 4LL;
    v79 = 4LL;
    v81 = 4LL;
    v83 = 4LL;
    TlgWrite(v45, &unk_1800560B1, v46, v47, 0xBu, &pData);
  }
  v48 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v48, 0LL);
  }
  return (unsigned int)v53;
}
