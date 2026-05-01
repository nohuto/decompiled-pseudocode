/*
 * XREFs of ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18001FDB0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180023CB4 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
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
  const GUID *v10; // r8
  const GUID *v11; // r9
  DWORD v12; // ebx
  int v14; // [rsp+38h] [rbp-69h] BYREF
  int v15; // [rsp+3Ch] [rbp-65h] BYREF
  char v16[80]; // [rsp+48h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-9h] BYREF
  int *v18; // [rsp+B8h] [rbp+17h]
  int v19; // [rsp+C0h] [rbp+1Fh]
  int v20; // [rsp+C4h] [rbp+23h]
  int *v21; // [rsp+C8h] [rbp+27h]
  int v22; // [rsp+D0h] [rbp+2Fh]
  int v23; // [rsp+D4h] [rbp+33h]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  v7 = -1;
  if ( a5 && a6 == 4 )
    v8 = *a5;
  else
    v8 = -1;
  RmpAcquireGlobalLock();
  if ( (*(_BYTE *)(*(_QWORD *)a4 + 1892LL) & 2) == 0 )
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
    v20 = 0;
    v23 = 0;
    v18 = &v14;
    v21 = &v15;
    v14 = v8;
    v19 = 4;
    v15 = v7;
    v22 = 4;
    TlgWrite(v9, &unk_180057F79, v10, v11, 4u, &pData);
  }
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v12, 0LL);
  }
  return 0LL;
}
