/*
 * XREFs of ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000F184
 * Callers:
 *     PsmHamRegisterProcess @ 0x180033240 (PsmHamRegisterProcess.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000B204 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 *     _TlgCreateSid @ 0x18000EE38 (_TlgCreateSid.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x18000F6C0 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180011250 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTI.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z @ 0x180032644 (-HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvRegisterProcess(
        struct _HOST_ACTIVITY_MANAGER *a1,
        void *a2,
        void *a3,
        struct _PSM_APP_IDENTITY *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned int v10; // edi
  unsigned int v11; // ebx
  ULONG v12; // eax
  int v13; // r9d
  int v14; // eax
  struct _RM_HAM_ACTIVITY_HOST *v15; // rbx
  DWORD v17; // ebx
  DWORD ProcessId; // eax
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v21; // [rsp+48h] [rbp-B8h] BYREF
  DWORD v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh] BYREF
  struct _GUID v24; // [rsp+58h] [rbp-A8h] BYREF
  char v25[144]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v26[560]; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+330h] [rbp+230h] BYREF
  int *v28; // [rsp+350h] [rbp+250h]
  __int64 v29; // [rsp+358h] [rbp+258h]
  DWORD *v30; // [rsp+360h] [rbp+260h]
  __int64 v31; // [rsp+368h] [rbp+268h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+370h] [rbp+270h] BYREF
  unsigned __int64 *v33; // [rsp+380h] [rbp+280h]
  __int64 v34; // [rsp+388h] [rbp+288h]
  int *v35; // [rsp+390h] [rbp+290h]
  __int64 v36; // [rsp+398h] [rbp+298h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+3A0h] [rbp+2A0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v38; // [rsp+3B0h] [rbp+2B0h]
  __int64 v39; // [rsp+3B8h] [rbp+2B8h]
  struct _GUID *v40; // [rsp+3C0h] [rbp+2C0h]
  __int64 v41; // [rsp+3C8h] [rbp+2C8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+3D0h] [rbp+2D0h] BYREF

  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081545, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  v21 = 0LL;
  HampSystemQueryProcessAppSessionGuid(a2, &v24);
  v10 = a6;
  if ( (a6 & 4) != 0 )
    v11 = 8;
  else
    v11 = (a6 & 8) != 0 ? 4 : 2;
  v12 = RtlLengthSid((char *)a4 + 472);
  v20 = HampUtilValidateAndCapturePsmInformation(
          (struct _RM_PSM_HOST_INFO *)v26,
          (const unsigned __int16 *)a4 + 4,
          (unsigned __int8 *)a4 + 472,
          v12,
          *(_DWORD *)a4,
          v11,
          a5);
  v13 = v20;
  if ( v20 >= 0 )
  {
    v14 = HampHostFindOrCreate(a1, (struct _RM_PSM_HOST_INFO *)v26, &v21);
    v15 = v21;
    v20 = v14;
    v13 = v14;
    if ( v14 >= 0 )
    {
      v13 = HampHostRegisterProcess(v21, a2, a3, a4, a5, v10);
      if ( v13 >= 0 )
        v13 = 0;
      v20 = v13;
    }
    if ( v15 )
    {
      RmpAcquireGlobalLock();
      if ( (*((_QWORD *)v15 + 72))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v15 - 64));
      RmpReleaseGlobalLock();
      v13 = v20;
    }
  }
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v17, 0LL);
    v13 = v20;
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 0x400000000008uLL) )
  {
    v29 = 4LL;
    v28 = &v20;
    ProcessId = GetProcessId(a2);
    v31 = 4LL;
    v22 = ProcessId;
    v30 = &v22;
    TlgCreateWsz(&pDesc, (LPCWSTR)a4 + 4);
    v23 = *(_DWORD *)a4;
    v33 = &a5;
    v35 = &v23;
    v34 = 8LL;
    v36 = 4LL;
    TlgCreateSid(&v37, (const SID *)((char *)a4 + 472));
    LODWORD(v21) = v10;
    v38 = &v21;
    v40 = &v24;
    v39 = 4LL;
    v41 = 16LL;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081C24, 0LL, 0LL, 0xAu, &v27);
    return (unsigned int)v20;
  }
  return (unsigned int)v13;
}
