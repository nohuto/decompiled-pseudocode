/*
 * XREFs of ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180041E14
 * Callers:
 *     HamRpcSrvCreateActivity @ 0x1800464E0 (HamRpcSrvCreateActivity.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18001D6A4 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18001DA58 (-HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x180042F74 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043810 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTI.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_DEPENDENCY_TYPE@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180047368 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 */

void __fastcall __noreturn HamSrvCreateActivity(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        unsigned __int64 *a9)
{
  struct _HAM_ACTIVITY_PROPERTIES *v9; // rdi
  unsigned __int64 *v11; // r15
  const GUID *v15; // r8
  const GUID *v16; // r9
  struct _HOST_ACTIVITY_MANAGER *v17; // rcx
  int v18; // eax
  struct _RM_HAM_ACTIVITY_HOST *v19; // rbx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r9
  DWORD v26; // ebx
  __int64 v27; // r11
  __int64 v28; // r11
  int v29; // edx
  __int64 v30; // r11
  LPCGUID v31; // r8
  LPCGUID v32; // r9
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  int v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v38[80]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v39[560]; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR v40; // [rsp+2E0h] [rbp+1E0h] BYREF
  int *v41; // [rsp+300h] [rbp+200h]
  __int64 v42; // [rsp+308h] [rbp+208h]
  __int64 *v43; // [rsp+310h] [rbp+210h]
  __int64 v44; // [rsp+318h] [rbp+218h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+320h] [rbp+220h] BYREF
  __int64 *v46; // [rsp+330h] [rbp+230h]
  __int64 v47; // [rsp+338h] [rbp+238h]
  unsigned __int64 *v48; // [rsp+340h] [rbp+240h]
  __int64 v49; // [rsp+348h] [rbp+248h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+350h] [rbp+250h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v51; // [rsp+360h] [rbp+260h]
  __int64 v52; // [rsp+368h] [rbp+268h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+370h] [rbp+270h] BYREF

  v9 = a8;
  v11 = a9;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v38);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005AF50, v15, v16, 2u, &pData);
  v35 = 0LL;
  v36 = 0LL;
  v37 = -1LL;
  if ( (unsigned int)HampUtilCheckAndSanitizeActivityProperties((const wchar_t *)v9) )
  {
    v34 = HampUtilValidateAndCapturePsmInformation((struct _RM_PSM_HOST_INFO *)v39, a2, a3, a4, a5, a6, a7);
    if ( v34 >= 0 )
    {
      if ( (unsigned int)HampUtilAreActivityPropertiesValid((struct _RM_PSM_HOST_INFO *)v39, v9) )
      {
        v18 = HampHostFindOrCreate(v17, (struct _RM_PSM_HOST_INFO *)v39, &v36);
        v19 = v36;
        v34 = v18;
        if ( v18 >= 0 )
        {
          LOBYTE(cData) = 0;
          v20 = HampActCreate(a1, *(_QWORD *)a1, v36, v9, cData, &v35);
          v23 = v35;
          v24 = (unsigned int)v20;
          v34 = v20;
          if ( v20 >= 0 )
          {
            v24 = 0LL;
            v37 = *(_QWORD *)(v35 + 40);
            *v11 = v37;
            v34 = 0;
          }
          if ( v23 )
            CemRcObjectDereference(v23, v21, v22, v24);
        }
        if ( v19 )
        {
          RmpAcquireGlobalLock();
          if ( (*((_QWORD *)v19 + 72))-- == 1LL )
            RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v19 - 64));
          RmpReleaseGlobalLock();
        }
      }
      else
      {
        v34 = -1073741578;
      }
    }
  }
  else
  {
    v34 = -1073741578;
  }
  v26 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v26, 0LL);
  }
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
    {
      v42 = v27;
      v41 = &v34;
      v44 = 8LL;
      v43 = &v37;
      TlgCreateWsz(&pDesc, a2);
      LODWORD(v35) = a6;
      v46 = &v35;
      v47 = v28;
      v48 = &a7;
      v49 = 8LL;
      TlgCreateWsz(&v50, (LPCWSTR)v9 + 66);
      v29 = *(_DWORD *)v9;
      v51 = &v36;
      LODWORD(v36) = v29;
      v52 = v30;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B13E, v31, v32, 9u, &v40);
    }
  }
}
