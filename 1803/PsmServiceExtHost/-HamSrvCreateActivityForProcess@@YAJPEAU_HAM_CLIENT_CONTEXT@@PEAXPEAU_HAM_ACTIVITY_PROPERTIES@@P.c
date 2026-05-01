/*
 * XREFs of ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_KPEAE@Z @ 0x1800326C8
 * Callers:
 *     HamRpcSrvCreateActivityForProcess @ 0x1800326C0 (HamRpcSrvCreateActivityForProcess.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000F7EC (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010F30 (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180028414 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     HamOptInIsPsmKeyEnabledEx @ 0x180030538 (HamOptInIsPsmKeyEnabledEx.c)
 *     ?HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180032A3C (-HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180040CD8 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 */

__int64 __fastcall HamSrvCreateActivityForProcess(
        struct _HOST_ACTIVITY_MANAGER **a1,
        void *a2,
        struct _HAM_ACTIVITY_PROPERTIES *a3,
        unsigned __int64 *a4,
        unsigned __int8 *a5)
{
  DWORD v9; // r12d
  const WCHAR *v10; // r13
  DWORD ProcessId; // eax
  DWORD LastError; // r9d
  signed int IsPsmKeyEnabled; // eax
  int HostWithFullInfo; // eax
  struct _RM_HAM_ACTIVITY_HOST *v15; // rbx
  int v16; // eax
  struct _CEM_RC_OBJECT *v17; // rcx
  DWORD v19; // ebx
  int v20; // r10d
  int v21; // r11d
  int v22; // r11d
  int v23; // r10d
  int v24; // r9d
  int v25; // r11d
  int ProcessPsmInfo; // [rsp+30h] [rbp-D0h] BYREF
  char v28; // [rsp+34h] [rbp-CCh]
  int v29; // [rsp+38h] [rbp-C8h] BYREF
  struct _CEM_RC_OBJECT *v30; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v34[536]; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+278h] [rbp+178h]
  __int64 v36; // [rsp+280h] [rbp+180h]
  _BYTE v37[144]; // [rsp+290h] [rbp+190h] BYREF
  EVENT_DATA_DESCRIPTOR v38; // [rsp+320h] [rbp+220h] BYREF
  int *p_ProcessPsmInfo; // [rsp+340h] [rbp+240h]
  int v40; // [rsp+348h] [rbp+248h]
  int v41; // [rsp+34Ch] [rbp+24Ch]
  unsigned __int64 *v42; // [rsp+350h] [rbp+250h]
  int v43; // [rsp+358h] [rbp+258h]
  int v44; // [rsp+35Ch] [rbp+25Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+360h] [rbp+260h] BYREF
  int *v46; // [rsp+370h] [rbp+270h]
  int v47; // [rsp+378h] [rbp+278h]
  int v48; // [rsp+37Ch] [rbp+27Ch]
  __int64 *v49; // [rsp+380h] [rbp+280h]
  int v50; // [rsp+388h] [rbp+288h]
  int v51; // [rsp+38Ch] [rbp+28Ch]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+390h] [rbp+290h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+3A0h] [rbp+2A0h] BYREF
  struct _CEM_RC_OBJECT **v54; // [rsp+3B0h] [rbp+2B0h]
  int v55; // [rsp+3B8h] [rbp+2B8h]
  int v56; // [rsp+3BCh] [rbp+2BCh]
  struct _RM_HAM_ACTIVITY_HOST **v57; // [rsp+3C0h] [rbp+2C0h]
  int v58; // [rsp+3C8h] [rbp+2C8h]
  int v59; // [rsp+3CCh] [rbp+2CCh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+3D0h] [rbp+2D0h] BYREF

  v32 = -1LL;
  v30 = 0LL;
  v28 = 1;
  v31 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v29 = 0;
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081BC4, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v37);
  if ( !HampUtilCheckAndSanitizeActivityProperties(a3) )
    goto LABEL_28;
  ProcessId = GetProcessId(a2);
  v9 = ProcessId;
  if ( !ProcessId )
  {
    if ( (int)GetLastError() <= 0 )
    {
      LastError = GetLastError();
      goto LABEL_29;
    }
    LOWORD(IsPsmKeyEnabled) = GetLastError();
LABEL_33:
    LastError = (unsigned __int16)IsPsmKeyEnabled | 0xC0070000;
    goto LABEL_29;
  }
  ProcessPsmInfo = RmpSystemGetProcessPsmInfo(ProcessId, (struct _RM_PSM_HOST_INFO *)v34);
  LastError = ProcessPsmInfo;
  if ( ProcessPsmInfo < 0 )
    goto LABEL_20;
  v10 = (const WCHAR *)v34;
  v29 = v35;
  v32 = v36;
  if ( a5 )
  {
    IsPsmKeyEnabled = HamOptInIsPsmKeyEnabledEx((__int64)v34);
    LastError = IsPsmKeyEnabled;
    if ( IsPsmKeyEnabled )
    {
      if ( IsPsmKeyEnabled <= 0 )
        goto LABEL_29;
      goto LABEL_33;
    }
  }
  if ( !(unsigned int)HampUtilAreActivityPropertiesValid((struct _RM_PSM_HOST_INFO *)v34, a3) )
  {
LABEL_28:
    LastError = -1073741583;
LABEL_29:
    ProcessPsmInfo = LastError;
    goto LABEL_20;
  }
  HostWithFullInfo = RmHamFindHostWithFullInfo(*a1, (struct _RM_PSM_HOST_INFO *)v34, &v31);
  v15 = v31;
  LastError = HostWithFullInfo;
  ProcessPsmInfo = HostWithFullInfo;
  if ( HostWithFullInfo >= 0 )
  {
    v16 = HampActCreate((struct _HAM_CLIENT_CONTEXT *)a1, *a1, v31, a3, 0, &v30);
    v17 = v30;
    LastError = v16;
    ProcessPsmInfo = v16;
    if ( v16 >= 0 )
    {
      v33 = *((_QWORD *)v30 + 5);
      *a4 = v33;
      if ( a5 )
        *a5 = 1;
      LastError = 0;
      ProcessPsmInfo = 0;
    }
    if ( v17 )
    {
      CemRcObjectDereference(v17);
      LastError = ProcessPsmInfo;
    }
  }
  if ( v15 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v15 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v15 - 64));
    RmpReleaseGlobalLock();
    LastError = ProcessPsmInfo;
  }
LABEL_20:
  v19 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v19, 0LL);
    LastError = ProcessPsmInfo;
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v41 = 0;
    v44 = 0;
    p_ProcessPsmInfo = &ProcessPsmInfo;
    v40 = v21;
    v42 = &v33;
    v43 = v20;
    TlgCreateWsz(&pDesc, v10);
    v48 = 0;
    v51 = 0;
    v46 = &v29;
    v49 = &v32;
    v47 = v22;
    v50 = v23;
    TlgCreateWsz(&v52, (LPCWSTR)a3 + 6);
    TlgCreateWsz(&v53, (LPCWSTR)a3 + 70);
    v56 = 0;
    v24 = *(_DWORD *)a3;
    v59 = 0;
    v54 = &v30;
    v57 = &v31;
    LODWORD(v30) = v24;
    v55 = v25;
    LODWORD(v31) = v9;
    v58 = v25;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081D60, 0LL, 0LL, 0xBu, &v38);
    return (DWORD)ProcessPsmInfo;
  }
  return LastError;
}
