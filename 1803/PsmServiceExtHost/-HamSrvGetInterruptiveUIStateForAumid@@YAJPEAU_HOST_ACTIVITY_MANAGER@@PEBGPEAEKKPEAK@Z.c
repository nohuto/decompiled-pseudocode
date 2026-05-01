/*
 * XREFs of ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18003FB60
 * Callers:
 *     HamRpcSrvGetInterruptiveUIStateForAumid @ 0x180040BA0 (HamRpcSrvGetInterruptiveUIStateForAumid.c)
 * Callees:
 *     _TlgCreateSid @ 0x18000EE38 (_TlgCreateSid.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x18000EE58 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x180040A80 (-HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x18004138C (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 */

__int64 __fastcall HamSrvGetInterruptiveUIStateForAumid(
        struct _HOST_ACTIVITY_MANAGER *a1,
        LPCWSTR pwsz,
        SID *SourceSid,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  struct _HAM_PACKAGE *v9; // rax
  struct _CEM_RC_OBJECT *v10; // rbx
  int v11; // r9d
  int v12; // r9d
  DWORD v13; // ebx
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  UINT32 packageRelativeApplicationIdLength; // [rsp+38h] [rbp-C8h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20[26]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[144]; // [rsp+120h] [rbp+20h] BYREF
  EVENT_DATA_DESCRIPTOR v22; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v23; // [rsp+1D0h] [rbp+D0h]
  int v24; // [rsp+1D8h] [rbp+D8h]
  int v25; // [rsp+1DCh] [rbp+DCh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int *v28; // [rsp+200h] [rbp+100h]
  int v29; // [rsp+208h] [rbp+108h]
  int v30; // [rsp+20Ch] [rbp+10Ch]
  char *v31; // [rsp+210h] [rbp+110h]
  int v32; // [rsp+218h] [rbp+118h]
  int v33; // [rsp+21Ch] [rbp+11Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+220h] [rbp+120h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+240h] [rbp+140h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+2D0h] [rbp+1D0h] BYREF

  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_18008137E, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 65;
  if ( ParseApplicationUserModelId(
         pwsz,
         &packageFamilyNameLength,
         packageFamilyName,
         &packageRelativeApplicationIdLength,
         packageRelativeApplicationId) )
  {
    v16 = -1073741585;
  }
  else
  {
    v16 = CempUtilValidateAndCapturePackageInfoWithFamilyName(packageFamilyName, SourceSid, (__int64)v20);
    if ( v16 >= 0 )
    {
      v9 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v20);
      v10 = v9;
      if ( v9 )
      {
        v16 = 0;
        *a6 = HampPkgGetInterruptiveUIState(v9, packageRelativeApplicationId);
        CemRcObjectDereference(v10);
      }
      else
      {
        v16 = -1073741275;
      }
    }
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v25 = 0;
    v23 = &v16;
    v24 = v11;
    TlgCreateWsz(&pDesc, pwsz);
    TlgCreateSid(&v27, SourceSid);
    v30 = 0;
    v33 = 0;
    v28 = &v19;
    v15 = *(_BYTE *)a6;
    v31 = &v15;
    v19 = a5;
    v29 = v12;
    v32 = 1;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_18008147F, 0LL, 0LL, 7u, &v22);
  }
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v13, 0LL);
  }
  return (unsigned int)v16;
}
