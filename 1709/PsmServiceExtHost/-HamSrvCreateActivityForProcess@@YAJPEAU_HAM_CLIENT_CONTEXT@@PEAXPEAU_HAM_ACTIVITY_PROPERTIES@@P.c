/*
 * XREFs of ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_KPEAE@Z @ 0x18001D708
 * Callers:
 *     HamRpcSrvCreateActivityForProcess @ 0x18001D700 (HamRpcSrvCreateActivityForProcess.c)
 * Callees:
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180006740 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18001D6A4 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18001DA58 (-HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     HamOptInIsPsmKeyEnabledEx @ 0x18001E9E0 (HamOptInIsPsmKeyEnabledEx.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmHamFindHostByPid@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003FE5C (-RmHamFindHostByPid@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_DEPENDENCY_TYPE@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180047368 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 */

__int64 __fastcall HamSrvCreateActivityForProcess(
        struct _HAM_CLIENT_CONTEXT *a1,
        void *a2,
        struct _HAM_ACTIVITY_PROPERTIES *a3,
        unsigned __int64 *a4,
        unsigned __int8 *a5)
{
  unsigned int v5; // r14d
  const GUID *v10; // r8
  const GUID *v11; // r9
  __int64 v12; // r9
  DWORD ProcessId; // eax
  signed int LastError; // eax
  struct _RM_SERVICE_GLOBALS *v15; // rcx
  int HostByPid; // eax
  struct _RM_HAM_ACTIVITY_HOST *v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  DWORD v23; // ebx
  int v24; // r11d
  int v25; // edx
  int v26; // r11d
  LPCGUID v27; // r8
  LPCGUID v28; // r9
  UINT32 v29; // r10d
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  _BYTE v32[4]; // [rsp+30h] [rbp-D0h] BYREF
  int ProcessPsmInfo; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v34; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v35; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v37[80]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v38[560]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR v39; // [rsp+2D0h] [rbp+1D0h] BYREF
  int *p_ProcessPsmInfo; // [rsp+2F0h] [rbp+1F0h]
  int v41; // [rsp+2F8h] [rbp+1F8h]
  int v42; // [rsp+2FCh] [rbp+1FCh]
  _BYTE *v43; // [rsp+300h] [rbp+200h]
  int v44; // [rsp+308h] [rbp+208h]
  int v45; // [rsp+30Ch] [rbp+20Ch]
  unsigned __int64 *v46; // [rsp+310h] [rbp+210h]
  int v47; // [rsp+318h] [rbp+218h]
  int v48; // [rsp+31Ch] [rbp+21Ch]
  __int64 *v49; // [rsp+320h] [rbp+220h]
  int v50; // [rsp+328h] [rbp+228h]
  int v51; // [rsp+32Ch] [rbp+22Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+330h] [rbp+230h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v53; // [rsp+340h] [rbp+240h]
  int v54; // [rsp+348h] [rbp+248h]
  int v55; // [rsp+34Ch] [rbp+24Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+350h] [rbp+250h] BYREF

  v34 = 0LL;
  v5 = 0;
  v35 = 0LL;
  v32[0] = 1;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B033, v10, v11, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v37);
  if ( !HampUtilCheckAndSanitizeActivityProperties(a3) )
  {
LABEL_5:
    LODWORD(v12) = -1073741583;
LABEL_6:
    ProcessPsmInfo = v12;
    goto LABEL_32;
  }
  ProcessId = GetProcessId(a2);
  v5 = ProcessId;
  if ( !ProcessId )
  {
    if ( (int)GetLastError() <= 0 )
    {
      LastError = GetLastError();
      LODWORD(v12) = LastError;
LABEL_10:
      ProcessPsmInfo = LastError;
      goto LABEL_32;
    }
    LOWORD(LastError) = GetLastError();
LABEL_12:
    LODWORD(v12) = (unsigned __int16)LastError | 0xC0070000;
    goto LABEL_6;
  }
  ProcessPsmInfo = RmpSystemGetProcessPsmInfo(ProcessId, (struct _RM_PSM_HOST_INFO *)v38);
  LODWORD(v12) = ProcessPsmInfo;
  if ( ProcessPsmInfo >= 0 )
  {
    if ( a5 )
    {
      LastError = HamOptInIsPsmKeyEnabledEx(v38, 1LL, v32, (unsigned int)ProcessPsmInfo);
      LODWORD(v12) = LastError;
      if ( LastError )
      {
        if ( LastError <= 0 )
          goto LABEL_10;
        goto LABEL_12;
      }
    }
    if ( !v32[0] )
    {
      *a4 = -1LL;
      LODWORD(v12) = 0;
      *a5 = 0;
      goto LABEL_6;
    }
    if ( !(unsigned int)HampUtilAreActivityPropertiesValid((struct _RM_PSM_HOST_INFO *)v38, a3) )
      goto LABEL_5;
    HostByPid = RmHamFindHostByPid(v15, v5, &v35);
    v17 = v35;
    LODWORD(v12) = HostByPid;
    ProcessPsmInfo = HostByPid;
    if ( HostByPid >= 0 )
    {
      LOBYTE(cData) = 0;
      v18 = HampActCreate(a1, *(_QWORD *)a1, v35, a3, cData, &v34);
      v21 = v34;
      v12 = (unsigned int)v18;
      ProcessPsmInfo = v18;
      if ( v18 >= 0 )
      {
        v36 = *(_QWORD *)(v34 + 40);
        *a4 = v36;
        if ( a5 )
          *a5 = 1;
        v12 = 0LL;
        ProcessPsmInfo = 0;
      }
      if ( v21 )
      {
        CemRcObjectDereference(v21, v19, v20, v12);
        LODWORD(v12) = ProcessPsmInfo;
      }
    }
    if ( v17 )
    {
      RmpAcquireGlobalLock();
      if ( (*((_QWORD *)v17 + 72))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v17 - 64));
      RmpReleaseGlobalLock();
      LODWORD(v12) = ProcessPsmInfo;
    }
  }
LABEL_32:
  v23 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v23, 0LL);
    LODWORD(v12) = ProcessPsmInfo;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
  {
    v42 = 0;
    v45 = 0;
    v48 = 0;
    v51 = 0;
    p_ProcessPsmInfo = &ProcessPsmInfo;
    v43 = v32;
    v46 = &v36;
    v49 = &v34;
    v41 = v24;
    v44 = 1;
    v47 = v24 + 4;
    LODWORD(v34) = v5;
    v50 = v24;
    TlgCreateWsz(&pDesc, (LPCWSTR)a3 + 66);
    v25 = *(_DWORD *)a3;
    v55 = 0;
    v53 = &v35;
    LODWORD(v35) = v25;
    v54 = v26;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B094, v27, v28, v29, &v39);
    LODWORD(v12) = ProcessPsmInfo;
  }
  return (unsigned int)v12;
}
