/*
 * XREFs of ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@KW4_HAM_CLIENT_TYPE@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001CAA4
 * Callers:
 *     HamRpcSrvConnectExtendedExecution @ 0x18001DAC0 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvConnect @ 0x18001DF50 (HamRpcSrvConnect.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x1800256D0 (HamRpcSrvConnectStateChangeNotifications.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x1800179B4 (_TlgCreateSid.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@KW4_HAM_CLIENT_TYPE@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C138 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@KW4_HAM_CLIENT_TYPE@@PEAPEAU_HAM.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvConnect(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned int a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        struct _HAM_CLIENT_CONTEXT **a6)
{
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v12; // eax
  DWORD v13; // ebx
  int v14; // r9d
  LPCGUID v15; // r9
  LPCGUID v16; // r8
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-CCh] BYREF
  char v20[80]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v21; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v22; // [rsp+B0h] [rbp-50h]
  int v23; // [rsp+B8h] [rbp-48h]
  int v24; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int *v26; // [rsp+D0h] [rbp-30h]
  int v27; // [rsp+D8h] [rbp-28h]
  int v28; // [rsp+DCh] [rbp-24h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF

  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005AECE, v10, v11, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
  v12 = HampClientCreate(a1, a2, a3, a4, a5, a6);
  v13 = HampLockTrackerId;
  v18 = v12;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v13, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
  {
    v24 = 0;
    v22 = &v19;
    v19 = a2;
    v23 = v14;
    TlgCreateSid(&pDesc, (const SID *)a3);
    v28 = 0;
    v26 = &v18;
    v27 = (int)v15;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005AC67, v16, v15, 5u, &v21);
  }
  return v18;
}
