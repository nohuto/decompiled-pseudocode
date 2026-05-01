/*
 * XREFs of ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180042C30
 * Callers:
 *     HamRpcSrvTerminateActivityHost @ 0x180046510 (HamRpcSrvTerminateActivityHost.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180047634 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18004800C (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 */

__int64 __fastcall HamSrvTerminateActivityHost(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  const GUID *v7; // r8
  const GUID *v8; // r9
  struct _HAM_ACTIVITY *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _HAM_ACTIVITY *v13; // rax
  DWORD v14; // ebx
  const GUID *v15; // r8
  const GUID *v16; // r9
  char v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19; // [rsp+31h] [rbp-CFh] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v22[80]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v23; // [rsp+90h] [rbp-70h] BYREF
  int *v24; // [rsp+B0h] [rbp-50h]
  int v25; // [rsp+B8h] [rbp-48h]
  int v26; // [rsp+BCh] [rbp-44h]
  unsigned __int64 *v27; // [rsp+C0h] [rbp-40h]
  int v28; // [rsp+C8h] [rbp-38h]
  int v29; // [rsp+CCh] [rbp-34h]
  char *v30; // [rsp+D0h] [rbp-30h]
  int v31; // [rsp+D8h] [rbp-28h]
  int v32; // [rsp+DCh] [rbp-24h]
  char *v33; // [rsp+E0h] [rbp-20h]
  int v34; // [rsp+E8h] [rbp-18h]
  int v35; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF

  v21 = a2;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B21B, v7, v8, 2u, &pData);
  v9 = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v22);
  if ( a3 - 1 > 2 )
  {
    v20 = -1073741583;
  }
  else
  {
    if ( a4 - 1 > 3 )
    {
      v20 = -1073741582;
      goto LABEL_14;
    }
    v13 = HampActFindForClient(a1, v21);
    v9 = v13;
    if ( !v13 )
    {
      v20 = -1073741275;
      goto LABEL_14;
    }
    v20 = HampActTerminate(v13, a3, a4);
    if ( v20 >= 0 )
      v20 = 0;
  }
  if ( v9 )
    CemRcObjectDereference(v9, v10, v11, v12);
LABEL_14:
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v14, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
  {
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v24 = &v20;
    v27 = &v21;
    v30 = &v18;
    v33 = &v19;
    v25 = 4;
    v28 = 8;
    v18 = a3;
    v31 = 1;
    v19 = a4;
    v34 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005ABC6, v15, v16, 6u, &v23);
  }
  return (unsigned int)v20;
}
