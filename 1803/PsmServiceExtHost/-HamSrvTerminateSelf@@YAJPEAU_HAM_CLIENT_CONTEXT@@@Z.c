/*
 * XREFs of ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003FF94
 * Callers:
 *     HamRpcSrvTerminateSelf @ 0x180040C20 (HamRpcSrvTerminateSelf.c)
 * Callees:
 *     ?HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@@Z @ 0x180006920 (-HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180007E80 (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000FF88 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateSelf(struct _HAM_CLIENT_CONTEXT *a1)
{
  void *v2; // rdx
  struct _HOST_ACTIVITY_MANAGER *v3; // rcx
  int HostByProcessHandle; // eax
  struct _RM_HAM_ACTIVITY_HOST *v5; // rbx
  int v6; // edx
  DWORD v7; // ebx
  unsigned int v9; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v10; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  char v12[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v13; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v14; // [rsp+100h] [rbp+0h]
  int v15; // [rsp+108h] [rbp+8h]
  int v16; // [rsp+10Ch] [rbp+Ch]
  struct _RM_HAM_ACTIVITY_HOST **v17; // [rsp+110h] [rbp+10h]
  int v18; // [rsp+118h] [rbp+18h]
  int v19; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v20; // [rsp+120h] [rbp+20h]
  int v21; // [rsp+128h] [rbp+28h]
  int v22; // [rsp+12Ch] [rbp+2Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF

  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082388, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  v2 = (void *)*((_QWORD *)a1 + 19);
  v3 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
  v10 = 0LL;
  v11 = -1LL;
  HostByProcessHandle = RmHamFindHostByProcessHandle(v3, v2, &v10);
  v5 = v10;
  v9 = HostByProcessHandle;
  if ( HostByProcessHandle >= 0 )
  {
    v11 = *((_QWORD *)v10 - 4);
    HampHostQueueTerminate((__int64)v10, 1u, 0x1700u, (__int64)a1, 0);
    v9 = 0;
  }
  if ( v5 )
    RmHamHostDereference(v5);
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v14 = &v9;
    LODWORD(v10) = *((_DWORD *)a1 + 34);
    v17 = &v10;
    v20 = &v11;
    v15 = 4;
    v18 = 4;
    v21 = v6;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081EAD, 0LL, 0LL, 5u, &v13);
  }
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
  return v9;
}
