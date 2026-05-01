/*
 * XREFs of ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017BA0
 * Callers:
 *     ?RmpActivityHostQueryByPidOrPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180001B94 (-RmpActivityHostQueryByPidOrPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180002984 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002EB8 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?RmpActivityHostFindProcessResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x1800033F0 (-RmpActivityHostFindProcessResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_SERVICE_GLOBAL.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000D270 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000D710 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000E420 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x1800179D4 (RmpHandlePsmRetrieveHostMemoryLimit.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800319C0 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x1800320F4 (-OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x18003CDD4 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     memcmp_0 @ 0x180026A9F (memcmp_0.c)
 */

__int64 __fastcall RmpActivityHostFindByTypeAndIdentifier(__int64 a1, int a2, unsigned __int8 *a3, __int64 *a4)
{
  __int64 v4; // r15
  unsigned __int8 *v5; // r13
  int v6; // r14d
  __int64 v8; // rdi
  WCHAR *v9; // rsi
  WCHAR *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned int v13; // esi
  __int64 v14; // r10
  int v15; // r9d
  __int64 v16; // rbp
  const void *v17; // rdx
  __int64 v19; // r9
  __int64 v20; // rax
  WCHAR v21; // [rsp+60h] [rbp+8h]

  v4 = 0LL;
  v5 = a3;
  v6 = a2;
  v8 = 314159LL;
  if ( a2 )
  {
    v19 = 69LL;
    do
    {
      v20 = *a3;
      a3 += 8;
      v8 = *(a3 - 1)
         + 37
         * (*(a3 - 2)
          + 37
          * (*(a3 - 3) + 37
                       * (*(a3 - 4) + 37 * (*(a3 - 5) + 37 * (*(a3 - 6) + 37 * (*(a3 - 7) + 37 * (v20 + 37 * v8)))))));
      --v19;
    }
    while ( v19 );
  }
  else
  {
    v9 = (WCHAR *)(a3 + 464);
    v10 = (WCHAR *)a3;
    if ( a3 < a3 + 464 )
    {
      do
      {
        v21 = RtlUpcaseUnicodeChar(*v10++);
        v8 = HIBYTE(v21) + 37 * ((unsigned __int8)v21 + 37 * v8);
      }
      while ( v10 < v9 );
    }
    v11 = 11LL;
    do
    {
      v12 = *(unsigned __int8 *)v9;
      v9 += 4;
      v8 = *((unsigned __int8 *)v9 - 1)
         + 37
         * (*((unsigned __int8 *)v9 - 2)
          + 37
          * (*((unsigned __int8 *)v9 - 3)
           + 37
           * (*((unsigned __int8 *)v9 - 4)
            + 37
            * (*((unsigned __int8 *)v9 - 5)
             + 37 * (*((unsigned __int8 *)v9 - 6) + 37 * (*((unsigned __int8 *)v9 - 7) + 37 * (v12 + 37 * v8)))))));
      --v11;
    }
    while ( v11 );
  }
  v13 = -1073741275;
  RtlAcquireSRWLockShared(a1 + 32);
  while ( 1 )
  {
    v14 = v8 & (-1LL << (*(_BYTE *)(a1 + 1556) & 0x1F));
    if ( v4 )
      goto LABEL_10;
    v15 = *(_DWORD *)(a1 + 1556) >> 5;
    if ( !v15 )
      break;
    v4 = *(_QWORD *)(a1 + 1560)
       + 8LL
       * ((37
         * (BYTE6(v14)
          + 37
          * (BYTE5(v14)
           + 37
           * (BYTE4(v14)
            + 37 * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 11623883)))))))
         + HIBYTE(v14)) & (unsigned int)(v15 - 1));
    do
    {
LABEL_10:
      v4 = *(_QWORD *)v4;
      if ( (v4 & 1) != 0 )
        goto LABEL_17;
    }
    while ( v14 != ((-1LL << (*(_BYTE *)(a1 + 1556) & 0x1F)) & *(_QWORD *)(v4 + 8)) );
    v16 = v4 - 1248;
    if ( *(_DWORD *)(v4 - 1248 + 56) != v6 )
      continue;
    v17 = (const void *)(v16 + 88);
    if ( a2 )
    {
      v6 = a2;
      if ( !memcmp_0(v5, v17, 0x228uLL) )
        goto LABEL_16;
    }
    else
    {
      if ( !_wcsicmp((const wchar_t *)v5, (const wchar_t *)v17)
        && !memcmp_0(v5 + 464, (const void *)(v16 + 552), 0x58uLL) )
      {
LABEL_16:
        v13 = 0;
        RmpObjectAddRef((struct _RM_OBJECT_HEADER *)(v4 - 1248));
        *a4 = v16;
        break;
      }
      v6 = 0;
    }
  }
LABEL_17:
  RtlReleaseSRWLockShared(a1 + 32);
  return v13;
}
