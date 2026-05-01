/*
 * XREFs of ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180027FEC
 * Callers:
 *     HamRpcSrvCreateExtendedExecution @ 0x1800289E0 (HamRpcSrvCreateExtendedExecution.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000FF88 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     ?HampExtendedExecutionCheckPolicy@@YAJPEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180027DA0 (-HampExtendedExecutionCheckPolicy@@YAJPEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASO.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800288A0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1800289BC (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180040CD8 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall HamSrvCreateExtendedExecution(__int64 a1, unsigned int a2, const WCHAR *a3, __int64 *a4)
{
  struct _CEM_RC_OBJECT *v6; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v7; // rdi
  unsigned int v8; // r12d
  unsigned int v9; // ebx
  UCHAR v10; // dl
  BOOLEAN v11; // al
  int v12; // r15d
  int HostByProcessHandle; // eax
  __int64 v14; // rdx
  unsigned int v15; // r9d
  char v16; // si
  struct _HOST_ACTIVITY_MANAGER *v17; // rdx
  int v18; // eax
  DWORD v20; // edi
  __int64 v21; // rdx
  __int64 v22; // r11
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-CCh] BYREF
  char v26; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v27; // [rsp+40h] [rbp-C0h] BYREF
  struct _CEM_RC_OBJECT *v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  LPCWSTR v31; // [rsp+60h] [rbp-A0h]
  LPCWSTR v32; // [rsp+68h] [rbp-98h]
  unsigned int v33[35]; // [rsp+70h] [rbp-90h] BYREF
  char v34; // [rsp+FCh] [rbp-4h] BYREF
  _BYTE v35[144]; // [rsp+1F0h] [rbp+F0h] BYREF
  WCHAR pwsz[232]; // [rsp+280h] [rbp+180h] BYREF
  EVENT_DATA_DESCRIPTOR v37; // [rsp+450h] [rbp+350h] BYREF
  int *v38; // [rsp+470h] [rbp+370h]
  __int64 v39; // [rsp+478h] [rbp+378h]
  __int64 *v40; // [rsp+480h] [rbp+380h]
  __int64 v41; // [rsp+488h] [rbp+388h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+490h] [rbp+390h] BYREF
  unsigned int *v43; // [rsp+4A0h] [rbp+3A0h]
  __int64 v44; // [rsp+4A8h] [rbp+3A8h]
  __int64 *v45; // [rsp+4B0h] [rbp+3B0h]
  __int64 v46; // [rsp+4B8h] [rbp+3B8h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+4C0h] [rbp+3C0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v48; // [rsp+4D0h] [rbp+3D0h]
  __int64 v49; // [rsp+4D8h] [rbp+3D8h]
  struct _CEM_RC_OBJECT **v50; // [rsp+4E0h] [rbp+3E0h]
  __int64 v51; // [rsp+4E8h] [rbp+3E8h]
  char *v52; // [rsp+4F0h] [rbp+3F0h]
  __int64 v53; // [rsp+4F8h] [rbp+3F8h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+500h] [rbp+400h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+510h] [rbp+410h] BYREF

  v32 = a3;
  v25 = a2;
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082422, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v35);
  v6 = 0LL;
  v29 = -1LL;
  v31 = 0LL;
  v7 = 0LL;
  v30 = -1LL;
  v28 = 0LL;
  v8 = 0;
  v27 = 0LL;
  v9 = 0;
  v11 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&_volatile_metadata, v10, 0LL);
  v12 = v11;
  if ( v11 )
    memset_0(pwsz, 0, sizeof(pwsz));
  if ( v25 > 4 )
  {
    v15 = -1073741584;
    goto LABEL_15;
  }
  HostByProcessHandle = RmHamFindHostByProcessHandle(*(struct _HOST_ACTIVITY_MANAGER **)a1, *(void **)(a1 + 152), &v27);
  v7 = v27;
  v15 = HostByProcessHandle;
  v24 = HostByProcessHandle;
  if ( HostByProcessHandle < 0 )
  {
LABEL_18:
    v16 = v25;
    goto LABEL_19;
  }
  if ( v12 )
  {
    StringCchCopyW(pwsz, 0xE8uLL, (const unsigned __int16 *)v27 + 12);
    v30 = *((_QWORD *)v7 - 4);
  }
  v8 = *((_DWORD *)v7 + 140);
  v16 = v25;
  if ( v8 != 2 )
  {
    v15 = -1073741790;
    v24 = -1073741790;
    goto LABEL_19;
  }
  v24 = HampExtendedExecutionCheckPolicy(
          *(void **)(a1 + 144),
          v14,
          v25,
          (const unsigned __int16 * near *)v32,
          (struct _HAM_ACTIVITY_PROPERTIES *)v33);
  v15 = v24;
  if ( v24 >= 0 )
  {
    v17 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
    v9 = v33[0];
    v31 = (LPCWSTR)&v34;
    v18 = HampActCreate((struct _HAM_CLIENT_CONTEXT *)a1, v17, v7, (struct _HAM_ACTIVITY_PROPERTIES *)v33, 0, &v28);
    v6 = v28;
    v15 = v18;
    v24 = v18;
    if ( v18 < 0 )
      goto LABEL_16;
    v15 = 0;
    v29 = *((_QWORD *)v28 + 5);
    *a4 = v29;
LABEL_15:
    v24 = v15;
LABEL_16:
    if ( v6 )
    {
      CemRcObjectDereference(v6);
      v15 = v24;
    }
    goto LABEL_18;
  }
LABEL_19:
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v7 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64));
    RmpReleaseGlobalLock();
    v15 = v24;
  }
  v20 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v20, 0LL);
    v15 = v24;
  }
  if ( v12 && _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v41 = v21;
    v38 = &v24;
    v39 = 4LL;
    v40 = &v29;
    TlgCreateWsz(&pDesc, pwsz);
    v43 = &v25;
    v25 = v8;
    v45 = &v30;
    v44 = 4LL;
    v46 = v22;
    TlgCreateWsz(&v47, v31);
    v48 = &v27;
    LODWORD(v28) = *(_DWORD *)(a1 + 136);
    v50 = &v28;
    v52 = &v26;
    LODWORD(v27) = v9;
    v49 = 4LL;
    v51 = 4LL;
    v26 = v16;
    v53 = 1LL;
    TlgCreateWsz(&v54, v32);
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081DFF, 0LL, 0LL, 0xCu, &v37);
    return (unsigned int)v24;
  }
  return v15;
}
