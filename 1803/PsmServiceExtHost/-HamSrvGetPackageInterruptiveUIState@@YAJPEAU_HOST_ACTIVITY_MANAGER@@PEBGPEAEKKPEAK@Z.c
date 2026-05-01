/*
 * XREFs of ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18003FDA8
 * Callers:
 *     HamRpcSrvGetPackageInterruptiveUIState @ 0x180040BE0 (HamRpcSrvGetPackageInterruptiveUIState.c)
 * Callees:
 *     CempUtilValidateAndCapturePackageInfo @ 0x180004580 (CempUtilValidateAndCapturePackageInfo.c)
 *     _TlgCreateSid @ 0x18000EE38 (_TlgCreateSid.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x18000EE58 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x180040A80 (-HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z.c)
 */

__int64 __fastcall HamSrvGetPackageInterruptiveUIState(
        struct _HOST_ACTIVITY_MANAGER *a1,
        LPCWSTR pwsz,
        SID *pSid,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  struct _HAM_PACKAGE *v10; // rax
  struct _CEM_RC_OBJECT *v11; // rbx
  DWORD v12; // ebx
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v16; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v17[208]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v18[144]; // [rsp+110h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v20; // [rsp+1C0h] [rbp+C0h]
  __int64 v21; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int *v24; // [rsp+1F0h] [rbp+F0h]
  __int64 v25; // [rsp+1F8h] [rbp+F8h]
  char *v26; // [rsp+200h] [rbp+100h]
  __int64 v27; // [rsp+208h] [rbp+108h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+210h] [rbp+110h] BYREF

  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081333, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  v15 = CempUtilValidateAndCapturePackageInfo(pwsz, pSid, a4, a5, (__int64)v17);
  if ( v15 >= 0 )
  {
    v10 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v17);
    v11 = v10;
    if ( v10 )
    {
      *a6 = HampPkgGetInterruptiveUIState(v10, 0LL);
      v15 = 0;
      CemRcObjectDereference(v11);
    }
    else
    {
      v15 = -1073741275;
    }
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v21 = 4LL;
    v20 = &v15;
    TlgCreateWsz(&pDesc, pwsz);
    TlgCreateSid(&v23, pSid);
    v16 = a5;
    v24 = &v16;
    v14 = *(_BYTE *)a6;
    v26 = &v14;
    v25 = 4LL;
    v27 = 1LL;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081B53, 0LL, 0LL, 7u, &v19);
  }
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v12, 0LL);
  }
  return (unsigned int)v15;
}
