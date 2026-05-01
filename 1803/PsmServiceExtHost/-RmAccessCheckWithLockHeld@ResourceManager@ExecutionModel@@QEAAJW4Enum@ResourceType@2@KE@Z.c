/*
 * XREFs of ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002538
 * Callers:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002768 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180002930 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x18004F164 (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000230C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D788 (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18001C080 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(
        struct _RM_SERVICE_GLOBALS **a1,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  PVOID v4; // rsi
  int v5; // r14d
  int v6; // r15d
  unsigned int v9; // edi
  int (*v11)(ExecutionModel::ResourceManager *__hidden, unsigned int, struct _RM_PSM_HOST_INFO *); // rax
  int PSMInfo; // eax
  struct ExecutionModel::ResourceManager *v13; // rcx
  int v14; // edi
  const struct _TlgProvider_t *v15; // rcx
  int v16; // r9d
  void *v18; // rbx
  HANDLE v19; // rax
  unsigned int v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-CCh] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h]
  int v25; // [rsp+50h] [rbp-B0h]
  __int16 v26; // [rsp+54h] [rbp-ACh]
  _BYTE v27[560]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+290h] [rbp+190h] BYREF
  unsigned int *v29; // [rsp+2B0h] [rbp+1B0h]
  int v30; // [rsp+2B8h] [rbp+1B8h]
  int v31; // [rsp+2BCh] [rbp+1BCh]
  unsigned int *v32; // [rsp+2C0h] [rbp+1C0h]
  int v33; // [rsp+2C8h] [rbp+1C8h]
  int v34; // [rsp+2CCh] [rbp+1CCh]
  PVOID *p_P; // [rsp+2D0h] [rbp+1D0h]
  int v36; // [rsp+2D8h] [rbp+1D8h]
  int v37; // [rsp+2DCh] [rbp+1DCh]

  v4 = 0LL;
  v21 = a2;
  v5 = 0;
  P = 0LL;
  v6 = -2147024891;
  v20 = -2147024891;
  v9 = a2;
  if ( a2 > 0x31 )
  {
    v20 = -2147024809;
  }
  else
  {
    v11 = (int (*)(ExecutionModel::ResourceManager *__hidden, unsigned int, struct _RM_PSM_HOST_INFO *))*((_QWORD *)*a1 + 5);
    if ( v11 == ExecutionModel::ResourceManager::GetPSMInfo )
      PSMInfo = ExecutionModel::ResourceManager::GetPSMInfo(
                  (ExecutionModel::ResourceManager *)a1,
                  a3,
                  (struct _RM_PSM_HOST_INFO *)v27);
    else
      PSMInfo = ((__int64 (__fastcall *)(struct _RM_SERVICE_GLOBALS **, _QWORD, _BYTE *))v11)(a1, a3, v27);
    v20 = PSMInfo;
    if ( PSMInfo >= 0
      && (RmpActivityHostFindByPsmId(a1[19], (struct _RM_PSM_HOST_INFO *)v27, (struct _RM_ACTIVITY_HOST **)&P),
          (v4 = P) != 0LL) )
    {
      v23 = v9;
      v25 = 101;
      v24 = 1LL;
      v26 = 256;
      ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
        v13,
        (a4 != 0) + 2,
        1u,
        (struct ExecutionModel::_ResourceInfo *)&v23,
        (struct _RM_ACTIVITY_HOST *)P);
      LOBYTE(v5) = v25 != 101;
      v14 = 0;
    }
    else
    {
      v18 = 0LL;
      v19 = OpenProcess(0x100000u, 0, a3);
      v14 = 1;
      if ( v19 )
      {
        v18 = v19;
        if ( WaitForSingleObject(v19, 0) == 258 )
          v5 = 1;
      }
      if ( v18 )
        CloseHandle(v18);
    }
    if ( v5 )
      v6 = v14;
    v20 = v6;
    if ( v4 )
      RmpObjectRelease(v4);
    v9 = v21;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v29 = &v20;
    v32 = &v21;
    p_P = &P;
    v30 = v16;
    v21 = a3;
    v33 = v16;
    LODWORD(P) = v9;
    v36 = v16;
    TlgWrite(v15, &unk_18007C501, 0LL, 0LL, 5u, &pData);
  }
  return v20;
}
