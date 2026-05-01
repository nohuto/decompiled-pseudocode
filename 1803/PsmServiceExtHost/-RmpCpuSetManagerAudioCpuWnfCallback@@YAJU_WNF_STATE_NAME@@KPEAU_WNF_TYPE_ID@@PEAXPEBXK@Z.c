/*
 * XREFs of ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180033DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18003BAE4 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerAudioCpuWnfCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        struct _RM_CPU_SET_MANAGER *a4,
        int *a5,
        unsigned int a6)
{
  int v7; // esi
  int v8; // ebx
  const struct _TlgProvider_t *v9; // rcx
  DWORD v10; // ebx
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  char v14[144]; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  int *v16; // [rsp+F8h] [rbp-10h]
  int v17; // [rsp+100h] [rbp-8h]
  int v18; // [rsp+104h] [rbp-4h]
  int *v19; // [rsp+108h] [rbp+0h]
  int v20; // [rsp+110h] [rbp+8h]
  int v21; // [rsp+114h] [rbp+Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  v7 = -1;
  if ( a5 && a6 == 4 )
    v8 = *a5;
  else
    v8 = -1;
  RmpAcquireGlobalLock();
  if ( (*(_BYTE *)(*(_QWORD *)a4 + 2228LL) & 2) == 0 )
  {
    v7 = *((_DWORD *)a4 + 108);
    if ( v8 != v7 )
    {
      *((_DWORD *)a4 + 108) = v8;
      RmpCpuSetManagerResetValidMask(a4);
    }
  }
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v18 = 0;
    v21 = 0;
    v16 = &v12;
    v19 = &v13;
    v12 = v8;
    v17 = 4;
    v13 = v7;
    v20 = 4;
    TlgWrite(v9, &unk_18007E32E, 0LL, 0LL, 4u, &pData);
  }
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
  return 0LL;
}
