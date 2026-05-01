/*
 * XREFs of ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000E420
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000D270 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 * Callees:
 *     ?erase@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@2@0@Z @ 0x180005D20 (-erase@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@R.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_HOST_INFO@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180005DE0 (--$_EqualRangeImpl@U_RM_PSM_HOST_INFO@@@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HO.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017BA0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001BAA8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::OnApplicationTerminated(
        ExecutionModel::ResourceManager *this,
        const WCHAR *a2)
{
  const WCHAR *v4; // rdx
  _BYTE *v5; // rax
  __int64 v6; // r8
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rcx
  __int128 v17; // xmm1
  __int64 v18; // rdx
  __int64 v19; // rdx
  char *v20; // r14
  __int64 *v21; // rbx
  int v22; // ecx
  int v23; // [rsp+38h] [rbp-D0h] BYREF
  int v24; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 *v25; // [rsp+40h] [rbp-C8h] BYREF
  PVOID P; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR v28; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v31; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v32[560]; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2B8h] [rbp+1B0h] BYREF
  void *v34; // [rsp+2C8h] [rbp+1C0h]
  int v35; // [rsp+2D0h] [rbp+1C8h]
  int v36; // [rsp+2D4h] [rbp+1CCh]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+2D8h] [rbp+1D0h] BYREF
  void *v38; // [rsp+2E8h] [rbp+1E0h]
  int v39; // [rsp+2F0h] [rbp+1E8h]
  int v40; // [rsp+2F4h] [rbp+1ECh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2F8h] [rbp+1F0h] BYREF
  int *v42; // [rsp+308h] [rbp+200h]
  __int64 v43; // [rsp+310h] [rbp+208h]
  int *v44; // [rsp+318h] [rbp+210h]
  __int64 v45; // [rsp+320h] [rbp+218h]
  char *v46; // [rsp+328h] [rbp+220h]
  __int64 v47; // [rsp+330h] [rbp+228h]

  if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18005603A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800670C8;
    v34 = &unk_180056045;
    UserData.Reserved = 2;
    v35 = 33;
    v36 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  RmpAcquireGlobalLock();
  v4 = a2;
  v5 = v32;
  v6 = 4LL;
  do
  {
    v5 += 128;
    v7 = *(_OWORD *)v4;
    v8 = *((_OWORD *)v4 + 1);
    v4 += 64;
    *((_OWORD *)v5 - 8) = v7;
    v9 = *((_OWORD *)v4 - 6);
    *((_OWORD *)v5 - 7) = v8;
    v10 = *((_OWORD *)v4 - 5);
    *((_OWORD *)v5 - 6) = v9;
    v11 = *((_OWORD *)v4 - 4);
    *((_OWORD *)v5 - 5) = v10;
    v12 = *((_OWORD *)v4 - 3);
    *((_OWORD *)v5 - 4) = v11;
    v13 = *((_OWORD *)v4 - 2);
    *((_OWORD *)v5 - 3) = v12;
    v14 = *((_OWORD *)v4 - 1);
    *((_OWORD *)v5 - 2) = v13;
    *((_OWORD *)v5 - 1) = v14;
    --v6;
  }
  while ( v6 );
  v15 = *(_OWORD *)v4;
  v16 = *((_QWORD *)this + 26);
  v17 = *((_OWORD *)v4 + 1);
  v18 = *((_QWORD *)v4 + 4);
  *(_OWORD *)v5 = v15;
  *((_OWORD *)v5 + 1) = v17;
  *((_QWORD *)v5 + 4) = v18;
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(v16, 0LL, v32, &P) >= 0 )
  {
    RmpActivityHostZeroProcessNotification(P);
    RmpObjectRelease(P);
  }
  v20 = (char *)this + 248;
  v25 = 0LL;
  utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_EqualRangeImpl<_RM_PSM_HOST_INFO>(
    (__int64)v20,
    v19,
    (unsigned __int64)a2,
    &v25,
    &v30,
    &v29);
  v21 = v25;
  if ( v25 != (__int64 *)v20 )
  {
    NtDeleteWnfStateName(v25 + 72);
    NtDeleteWnfStateName(v21 + 73);
    utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::erase(
      (__int64)v20,
      &v31,
      v21,
      (__int64 *)*v21);
  }
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && (qword_1800670D0 & 9) != 0 && (qword_1800670D8 & 9) == qword_1800670D8 )
  {
    TlgCreateWsz(&pDesc, a2);
    v22 = *((_DWORD *)a2 + 134);
    v42 = &v23;
    v24 = *((_DWORD *)a2 + 133);
    v44 = &v24;
    v46 = (char *)(a2 + 272);
    v23 = v22;
    v43 = 4LL;
    v45 = 4LL;
    v47 = 8LL;
    *(_DWORD *)&v28.Level = 516;
    v37.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&v28.Id = ((unsigned int)&unk_180056209 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v28.Keyword = 9LL;
    v37.Size = *(unsigned __int16 *)off_1800670C8;
    v38 = &unk_180056214;
    v37.Reserved = 2;
    v39 = 73;
    v40 = 1;
    EventWriteTransfer(RegHandle, &v28, 0LL, 0LL, 6u, &v37);
  }
}
