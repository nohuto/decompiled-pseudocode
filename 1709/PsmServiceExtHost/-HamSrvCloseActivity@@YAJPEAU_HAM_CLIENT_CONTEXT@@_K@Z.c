/*
 * XREFs of ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180041B64
 * Callers:
 *     HamRpcSrvCloseActivity @ 0x1800464D0 (HamRpcSrvCloseActivity.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047218 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180047634 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 */

__int64 __fastcall HamSrvCloseActivity(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  const GUID *v3; // r8
  const GUID *v4; // r9
  struct _HAM_ACTIVITY *v5; // rax
  struct _HAM_ACTIVITY *v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  DWORD v11; // ebx
  const GUID *v12; // r8
  const GUID *v13; // r9
  unsigned int v15; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v17[80]; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp+7h] BYREF
  unsigned int *v19; // [rsp+B0h] [rbp+27h]
  __int64 v20; // [rsp+B8h] [rbp+2Fh]
  unsigned __int64 *v21; // [rsp+C0h] [rbp+37h]
  __int64 v22; // [rsp+C8h] [rbp+3Fh]

  v16 = a2;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005ADF7, v3, v4, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  v5 = HampActFindForClient(a1, v16);
  v6 = v5;
  if ( v5 )
  {
    v7 = HampActClose(v5);
    if ( v7 >= 0 )
      v7 = 0;
    v15 = v7;
    CemRcObjectDereference(v6, v8, v9, v10);
  }
  else
  {
    v15 = -1073741275;
  }
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
  {
    v20 = 4LL;
    v19 = &v15;
    v21 = &v16;
    v22 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005AFA0, v12, v13, 4u, &pData);
  }
  return v15;
}
