/*
 * XREFs of ?RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180033890
 * Callers:
 *     RmGameModeSrvGetLargestValidResourceRequest @ 0x180034B00 (RmGameModeSrvGetLargestValidResourceRequest.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z @ 0x180037158 (-RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z.c)
 */

__int64 __fastcall RmSrvGameModeGetLargestValidResourceRequest(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rdi
  const GUID *v4; // r8
  const GUID *v5; // r9
  const GUID *v6; // r8
  const GUID *v7; // r9
  int v8; // r10d
  int v9; // r11d
  DWORD v10; // ebx
  unsigned int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v17[3]; // [rsp+4Ch] [rbp-BCh] BYREF
  _BYTE v18[80]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int *v20; // [rsp+C8h] [rbp-40h]
  int v21; // [rsp+D0h] [rbp-38h]
  int v22; // [rsp+D4h] [rbp-34h]
  int *v23; // [rsp+D8h] [rbp-30h]
  int v24; // [rsp+E0h] [rbp-28h]
  int v25; // [rsp+E4h] [rbp-24h]
  char *v26; // [rsp+E8h] [rbp-20h]
  int v27; // [rsp+F0h] [rbp-18h]
  int v28; // [rsp+F4h] [rbp-14h]
  int *v29; // [rsp+F8h] [rbp-10h]
  int v30; // [rsp+100h] [rbp-8h]
  int v31; // [rsp+104h] [rbp-4h]
  int *v32; // [rsp+108h] [rbp+0h]
  int v33; // [rsp+110h] [rbp+8h]
  int v34; // [rsp+114h] [rbp+Ch]
  int *v35; // [rsp+118h] [rbp+10h]
  int v36; // [rsp+120h] [rbp+18h]
  int v37; // [rsp+124h] [rbp+1Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+128h] [rbp+20h] BYREF

  v2 = RmSvcGlobals;
  RmpUtilCheckStartLockTracking(v17, (struct _CEM_LOCK_TRACKER *)v18);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800570F7, v4, v5, 2u, &pData);
  memset_0(a2, 0, 0x28uLL);
  *(_DWORD *)a2 = 3;
  *((_DWORD *)a2 + 4) = 10;
  *((_DWORD *)a2 + 5) = 50;
  *((_DWORD *)a2 + 6) = 30;
  *((_BYTE *)a2 + 36) = 0;
  RmpAcquireGlobalLock();
  RmpCpuSetManagerGetGameModeRequestLimits(
    (struct _RM_SERVICE_GLOBALS *)((char *)v2 + 680),
    0,
    (unsigned int *)a2 + 1,
    (unsigned __int64 *)a2 + 1);
  RmpReleaseGlobalLock();
  v12 = 0;
  *((_DWORD *)a2 + 4) = 10;
  *((_BYTE *)a2 + 36) = 3;
  *((_DWORD *)a2 + 5) = 70;
  *((_DWORD *)a2 + 6) = 30;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v20 = &v12;
    v13 = *((_DWORD *)a2 + 1);
    v23 = &v13;
    v29 = &v14;
    v32 = &v15;
    v35 = &v16;
    v21 = 4;
    v24 = 4;
    v26 = (char *)a2 + 8;
    v27 = (_DWORD)v7 - 2;
    v14 = (int)v7;
    v30 = 4;
    v15 = v9;
    v33 = 4;
    v16 = v8;
    v36 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180057010, v6, v7, (_DWORD)v7 - 2, &v19);
  }
  if ( v17[0] )
  {
    v10 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v10, 0LL);
    }
  }
  return v12;
}
