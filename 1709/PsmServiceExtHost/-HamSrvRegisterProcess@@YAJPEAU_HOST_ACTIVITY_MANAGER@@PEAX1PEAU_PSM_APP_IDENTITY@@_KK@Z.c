/*
 * XREFs of ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x1800423B4
 * Callers:
 *     PsmHamRegisterProcess @ 0x18002FD80 (PsmHamRegisterProcess.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x1800179B4 (_TlgCreateSid.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x180042F74 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043810 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTI.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x180043BC8 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 */

__int64 __fastcall HamSrvRegisterProcess(
        struct _HOST_ACTIVITY_MANAGER *a1,
        void *a2,
        void *a3,
        struct _PSM_APP_IDENTITY *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  const GUID *v9; // r8
  const GUID *v10; // r9
  unsigned int v11; // edi
  unsigned int v12; // ebx
  ULONG v13; // eax
  struct _HOST_ACTIVITY_MANAGER *v14; // rcx
  int v15; // eax
  struct _RM_HAM_ACTIVITY_HOST *v16; // rbx
  int v17; // eax
  DWORD v19; // ebx
  DWORD ProcessId; // eax
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  unsigned int v24; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v25; // [rsp+48h] [rbp-B8h] BYREF
  DWORD v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  char v28[80]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[560]; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR v30; // [rsp+2E0h] [rbp+1E0h] BYREF
  unsigned int *v31; // [rsp+300h] [rbp+200h]
  __int64 v32; // [rsp+308h] [rbp+208h]
  DWORD *v33; // [rsp+310h] [rbp+210h]
  __int64 v34; // [rsp+318h] [rbp+218h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+320h] [rbp+220h] BYREF
  unsigned __int64 *v36; // [rsp+330h] [rbp+230h]
  __int64 v37; // [rsp+338h] [rbp+238h]
  int *v38; // [rsp+340h] [rbp+240h]
  __int64 v39; // [rsp+348h] [rbp+248h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+350h] [rbp+250h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v41; // [rsp+360h] [rbp+260h]
  __int64 v42; // [rsp+368h] [rbp+268h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+370h] [rbp+270h] BYREF

  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005AE68, v9, v10, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v28);
  v25 = 0LL;
  v11 = a6;
  if ( (a6 & 4) != 0 )
    v12 = 8;
  else
    v12 = (a6 & 8) != 0 ? 4 : 2;
  v13 = RtlLengthSid((char *)a4 + 472);
  HampUtilValidateAndCapturePsmInformation(
    (struct _RM_PSM_HOST_INFO *)v29,
    (const unsigned __int16 *)a4 + 4,
    (unsigned __int8 *)a4 + 472,
    v13,
    *(_DWORD *)a4,
    v12,
    a5);
  v15 = HampHostFindOrCreate(v14, (struct _RM_PSM_HOST_INFO *)v29, &v25);
  v16 = v25;
  v24 = v15;
  if ( v15 >= 0 )
  {
    v17 = HampHostRegisterProcess(v25, a2, a3, a4, a5, v11);
    if ( v17 >= 0 )
      v17 = 0;
    v24 = v17;
  }
  if ( v16 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v16 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v16 - 64));
    RmpReleaseGlobalLock();
  }
  v19 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v19, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000028uLL) )
  {
    v32 = 4LL;
    v31 = &v24;
    ProcessId = GetProcessId(a2);
    v34 = 4LL;
    v26 = ProcessId;
    v33 = &v26;
    TlgCreateWsz(&pDesc, (LPCWSTR)a4 + 4);
    v27 = *(_DWORD *)a4;
    v36 = &a5;
    v38 = &v27;
    v37 = 8LL;
    v39 = 4LL;
    TlgCreateSid(&v40, (const SID *)((char *)a4 + 472));
    LODWORD(v25) = v11;
    v41 = &v25;
    v42 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B248, v21, v22, 9u, &v30);
  }
  return v24;
}
