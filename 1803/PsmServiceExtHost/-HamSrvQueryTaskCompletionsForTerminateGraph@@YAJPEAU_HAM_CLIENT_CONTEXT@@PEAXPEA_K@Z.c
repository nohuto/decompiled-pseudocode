/*
 * XREFs of ?HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z @ 0x18006324C
 * Callers:
 *     HamRpcSrvQueryTaskCompletionsForTerminateGraph @ 0x180067920 (HamRpcSrvQueryTaskCompletionsForTerminateGraph.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000FF88 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800650B8 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HamSrvQueryTaskCompletionsForTerminateGraph(
        struct _HOST_ACTIVITY_MANAGER **a1,
        void *a2,
        unsigned __int64 *a3)
{
  struct _HOST_ACTIVITY_MANAGER *v6; // rsi
  struct _HOST_ACTIVITY_MANAGER *v7; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v8; // rbx
  int HostByProcessHandle; // eax
  struct _RM_HAM_ACTIVITY_HOST *v10; // rdi
  int v11; // eax
  bool v12; // zf
  DWORD v13; // ebx
  DWORD ProcessId; // eax
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v17; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v22; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int *v23; // [rsp+110h] [rbp+10h]
  int v24; // [rsp+118h] [rbp+18h]
  int v25; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v26; // [rsp+120h] [rbp+20h]
  int v27; // [rsp+128h] [rbp+28h]
  int v28; // [rsp+12Ch] [rbp+2Ch]
  unsigned __int64 *v29; // [rsp+130h] [rbp+30h]
  int v30; // [rsp+138h] [rbp+38h]
  int v31; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v32; // [rsp+140h] [rbp+40h]
  int v33; // [rsp+148h] [rbp+48h]
  int v34; // [rsp+14Ch] [rbp+4Ch]
  struct _RM_HAM_ACTIVITY_HOST **v35; // [rsp+150h] [rbp+50h]
  int v36; // [rsp+158h] [rbp+58h]
  int v37; // [rsp+15Ch] [rbp+5Ch]
  struct _RM_HAM_ACTIVITY_HOST **v38; // [rsp+160h] [rbp+60h]
  int v39; // [rsp+168h] [rbp+68h]
  int v40; // [rsp+16Ch] [rbp+6Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF

  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180080EFF, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  v6 = *a1;
  v7 = a1[19];
  v18 = 0LL;
  v8 = 0LL;
  v20 = -1LL;
  v19 = -1LL;
  v17 = 0LL;
  HostByProcessHandle = RmHamFindHostByProcessHandle(v6, v7, &v18);
  v10 = v18;
  v16 = HostByProcessHandle;
  if ( HostByProcessHandle >= 0 )
  {
    v20 = *((_QWORD *)v18 - 4);
    v11 = RmHamFindHostByProcessHandle(v6, a2, &v17);
    v8 = v17;
    v16 = v11;
    if ( v11 >= 0 )
    {
      v19 = *((_QWORD *)v17 - 4);
      if ( *(_QWORD *)(*((_QWORD *)v17 + 93) + 88LL) == *(_QWORD *)(*((_QWORD *)v10 + 93) + 88LL) )
      {
        v16 = 0;
        *a3 = HampHostGetTransitiveAppliedTaskCompletions(v17);
      }
      else
      {
        v16 = -1073741790;
      }
    }
  }
  if ( v10 )
  {
    RmpAcquireGlobalLock();
    v12 = (*((_QWORD *)v10 + 72))-- == 1LL;
    if ( v12 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v10 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v8 )
  {
    RmpAcquireGlobalLock();
    v12 = (*((_QWORD *)v8 + 72))-- == 1LL;
    if ( v12 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v8 - 64));
    RmpReleaseGlobalLock();
  }
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v13, 0LL);
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v23 = &v16;
    v26 = &v19;
    v32 = &v20;
    LODWORD(v18) = *((_DWORD *)a1 + 34);
    v35 = &v18;
    v24 = 4;
    v27 = 8;
    v29 = a3;
    v30 = 8;
    v33 = 8;
    v36 = 4;
    ProcessId = GetProcessId(a2);
    v40 = 0;
    LODWORD(v17) = ProcessId;
    v38 = &v17;
    v39 = 4;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180080FF7, 0LL, 0LL, 8u, &v22);
  }
  return v16;
}
