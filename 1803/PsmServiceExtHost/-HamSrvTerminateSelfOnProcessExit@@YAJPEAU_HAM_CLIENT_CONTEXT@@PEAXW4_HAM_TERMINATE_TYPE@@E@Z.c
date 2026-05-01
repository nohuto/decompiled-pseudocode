/*
 * XREFs of ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180040134
 * Callers:
 *     HamRpcSrvTerminateSelfOnRequiredProcessExit @ 0x180040C30 (HamRpcSrvTerminateSelfOnRequiredProcessExit.c)
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180007E80 (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180008FC8 (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@P.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x180028D90 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateSelfOnProcessExit(__int64 a1, void *a2, int a3, unsigned __int8 a4)
{
  void *v8; // rdx
  struct _HOST_ACTIVITY_MANAGER *v9; // rcx
  int v10; // eax
  struct _RM_HAM_ACTIVITY_HOST *v11; // rbx
  struct _HOST_ACTIVITY_MANAGER *v12; // rcx
  int v13; // eax
  struct _RM_HAM_ACTIVITY_HOST *v14; // rdi
  int v15; // eax
  DWORD v16; // ebx
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v19; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  char v25[144]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v27; // [rsp+120h] [rbp+20h]
  __int64 v28; // [rsp+128h] [rbp+28h]
  __int64 *v29; // [rsp+130h] [rbp+30h]
  __int64 v30; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v31; // [rsp+140h] [rbp+40h]
  __int64 v32; // [rsp+148h] [rbp+48h]
  struct _RM_HAM_ACTIVITY_HOST **v33; // [rsp+150h] [rbp+50h]
  __int64 v34; // [rsp+158h] [rbp+58h]
  __int64 *v35; // [rsp+160h] [rbp+60h]
  __int64 v36; // [rsp+168h] [rbp+68h]
  unsigned __int64 *v37; // [rsp+170h] [rbp+70h]
  __int64 v38; // [rsp+178h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+180h] [rbp+80h] BYREF

  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180080ED0, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  v8 = *(void **)(a1 + 152);
  v9 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
  v24 = -1LL;
  v23 = -1LL;
  v22 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v10 = HampHostFindByProcessHandle(v9, v8, &v19, &v20);
  v11 = v19;
  v18 = v10;
  if ( v10 >= 0 )
  {
    v12 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
    v23 = *((_QWORD *)v19 - 4);
    v13 = HampHostFindByProcessHandle(v12, a2, &v22, &v21);
    v14 = v22;
    v18 = v13;
    if ( v13 >= 0 )
    {
      v24 = *((_QWORD *)v22 - 4);
      v15 = HampDepGroupAddTerminateDependency(v11, v20, v22, v21, a3, a4);
      if ( v15 >= 0 )
        v15 = 0;
      v18 = v15;
    }
    if ( v14 )
      RmHamHostDereference(v14);
  }
  if ( v11 )
    RmHamHostDereference(v11);
  v16 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v16, 0LL);
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v28 = 4LL;
    v27 = &v18;
    v30 = 8LL;
    v29 = &v23;
    v31 = &v20;
    v32 = 8LL;
    LODWORD(v19) = GetProcessId(a2);
    v33 = &v19;
    v35 = &v24;
    v37 = &v21;
    v34 = 4LL;
    v36 = 8LL;
    v38 = 8LL;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800820F4, 0LL, 0LL, 8u, &v26);
  }
  return v18;
}
