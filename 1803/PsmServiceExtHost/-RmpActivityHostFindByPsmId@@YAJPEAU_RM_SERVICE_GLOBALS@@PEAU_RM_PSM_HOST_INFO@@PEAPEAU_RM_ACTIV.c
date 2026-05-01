/*
 * XREFs of ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D788
 * Callers:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002538 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180002930 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x18000B78C (RmpHandlePsmRetrieveHostMemoryLimit.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18001BDF0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18001C0A0 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x18000DE58 (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x18000DEB0 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 */

__int64 __fastcall RmpActivityHostFindByPsmId(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_ACTIVITY_HOST **a3)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  unsigned int v8; // esi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r9
  int v11; // r10d
  __int64 v13; // rdi
  __int64 v14; // [rsp+28h] [rbp-40h]

  v6 = 0LL;
  v14 = utl::hash<_RM_PSM_HOST_INFO>::operator()(a1, a2);
  v7 = v14;
  v8 = -1073741275;
  RtlAcquireSRWLockShared((char *)a1 + 32);
  while ( 1 )
  {
    v9 = *((_DWORD *)a1 + 495) & 0x1F;
    v10 = v7 & (-1LL << (*((_BYTE *)a1 + 1980) & 0x1F));
    if ( v6 )
      goto LABEL_5;
    v11 = *((_DWORD *)a1 + 495) >> 5;
    if ( !v11 )
      break;
    v9 = (HIBYTE(v10)
        + 37
        * (BYTE6(v10)
         + 37
         * (BYTE5(v10)
          + 37
          * (BYTE4(v10)
           + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))) & (unsigned int)(v11 - 1);
    v6 = *((_QWORD *)a1 + 248) + 8 * v9;
LABEL_5:
    while ( 1 )
    {
      v6 = *(_QWORD *)v6;
      if ( (v6 & 1) != 0 )
        break;
      if ( v10 == ((-1LL << (*((_BYTE *)a1 + 1980) & 0x1F)) & *(_QWORD *)(v6 + 8)) )
        goto LABEL_9;
    }
    v6 = 0LL;
LABEL_9:
    if ( !v6 )
      break;
    v13 = v6 - 1392;
    v7 = v14;
    if ( (unsigned __int8)utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v9, a2, v6 - 1392 + 88) )
    {
      v8 = 0;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v13 + 16)) <= 1 )
        __fastfail(0xEu);
      *a3 = (struct _RM_ACTIVITY_HOST *)v13;
      break;
    }
  }
  RtlReleaseSRWLockShared((char *)a1 + 32);
  return v8;
}
