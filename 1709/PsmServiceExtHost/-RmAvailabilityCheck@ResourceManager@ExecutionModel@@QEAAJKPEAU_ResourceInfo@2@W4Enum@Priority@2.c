/*
 * XREFs of ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x1800323F8
 * Callers:
 *     RmgrSrv_RmAvailabilityCheck @ 0x18002FF40 (RmgrSrv_RmAvailabilityCheck.c)
 * Callees:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002EB8 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x18003CDD4 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAvailabilityCheck(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        int a4,
        unsigned int a5)
{
  ExecutionModel::ResourceManager *v5; // r15
  unsigned int v9; // ebx
  unsigned int *v10; // rdi
  int v11; // eax
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  DWORD v15; // ebx
  char v17[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v19; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v20; // [rsp+4Ch] [rbp-B4h] BYREF
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22[80]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  int *v24; // [rsp+D0h] [rbp-30h]
  const GUID *v25; // [rsp+D8h] [rbp-28h]
  unsigned int *v26; // [rsp+E0h] [rbp-20h]
  const GUID *v27; // [rsp+E8h] [rbp-18h]
  int *v28; // [rsp+F0h] [rbp-10h]
  const GUID *v29; // [rsp+F8h] [rbp-8h]
  int *v30; // [rsp+100h] [rbp+0h]
  const GUID *v31; // [rsp+108h] [rbp+8h]

  v5 = g_pResourceManager;
  v18 = 0;
  v17[0] = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v22);
  if ( a3 )
  {
    RmpAcquireGlobalLock();
    v9 = 0;
    if ( a2 )
    {
      v10 = a3;
      while ( 1 )
      {
        v18 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld((struct _RM_SERVICE_GLOBALS **)v5, *v10, a5, 1);
        if ( v18 < 0 )
          break;
        ++v9;
        v10 += 6;
        if ( v9 >= a2 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v11 = ExecutionModel::ExternalResourceSet::AvailabilityCheck(v5, *((_QWORD *)v5 + 12), a2, a3, a4, a5, v17);
      v18 = v11;
      if ( v11 >= 0 )
      {
        if ( !v17[0] )
          v11 = -2147467259;
        v18 = v11;
      }
    }
  }
  else
  {
    v18 = -2147024882;
  }
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v25 = v14;
    v24 = &v18;
    v26 = &v19;
    v28 = (int *)&v20;
    v30 = &v21;
    v19 = a5;
    v27 = v14;
    v20 = a2;
    v29 = v14;
    v21 = a4;
    v31 = v14;
    TlgWrite(v12, &unk_180055E81, v13, v14, 6u, &pData);
  }
  v15 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v15, 0LL);
  }
  return (unsigned int)v18;
}
