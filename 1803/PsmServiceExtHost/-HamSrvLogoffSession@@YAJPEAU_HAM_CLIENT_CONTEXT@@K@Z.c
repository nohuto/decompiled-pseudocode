/*
 * XREFs of ?HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180034F68
 * Callers:
 *     HamRpcSrvSessionStateLogoffSession @ 0x180034F60 (HamRpcSrvSessionStateLogoffSession.c)
 * Callees:
 *     ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x18000EF38 (-HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     ?HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800350E0 (-HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvLogoffSession(struct _HAM_CLIENT_CONTEXT *a1, unsigned int a2)
{
  struct _HAM_SESSION *v4; // rax
  struct _CEM_RC_OBJECT *v5; // rbx
  DWORD v6; // ebx
  int v8; // eax
  unsigned int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v11[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v13; // [rsp+F0h] [rbp-10h]
  __int64 v14; // [rsp+F8h] [rbp-8h]
  int *v15; // [rsp+100h] [rbp+0h]
  __int64 v16; // [rsp+108h] [rbp+8h]

  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081569, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  v4 = HampSessionFindInManager(*(struct _HOST_ACTIVITY_MANAGER **)a1, *((_DWORD *)a1 + 35));
  v5 = v4;
  if ( v4 )
  {
    v8 = HampSessionLogoff(v4, a1, a2);
    if ( v8 >= 0 )
      v8 = 0;
    v9 = v8;
    CemRcObjectDereference(v5);
  }
  else
  {
    v9 = -1073741275;
  }
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v6, 0LL);
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v14 = 4LL;
    v13 = &v9;
    v10 = *((_DWORD *)a1 + 35);
    v15 = &v10;
    v16 = 4LL;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800819D1, 0LL, 0LL, 4u, &pData);
  }
  return v9;
}
