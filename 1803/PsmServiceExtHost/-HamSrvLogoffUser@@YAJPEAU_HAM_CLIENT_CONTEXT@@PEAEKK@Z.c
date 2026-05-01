/*
 * XREFs of ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x18006308C
 * Callers:
 *     HamRpcSrvSessionStateLogoffUser @ 0x1800678B0 (HamRpcSrvSessionStateLogoffUser.c)
 * Callees:
 *     _TlgCreateSid @ 0x18000EE38 (_TlgCreateSid.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     CempUtilValidateSid @ 0x180028968 (CempUtilValidateSid.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampUserFindInManager@@YAPEAU_HAM_USER@@PEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@@Z @ 0x1800687AC (-HampUserFindInManager@@YAPEAU_HAM_USER@@PEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@@Z.c)
 *     ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800687F8 (-HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 */

__int64 __fastcall HamSrvLogoffUser(struct _HAM_CLIENT_CONTEXT *a1, SID *a2, unsigned int a3, unsigned int a4)
{
  struct _HAM_USER *v8; // rax
  struct _CEM_RC_OBJECT *v9; // rbx
  int v10; // eax
  DWORD v11; // ebx
  NTSTATUS v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v16[144]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v17; // [rsp+120h] [rbp+20h] BYREF
  NTSTATUS *v18; // [rsp+140h] [rbp+40h]
  __int64 v19; // [rsp+148h] [rbp+48h]
  int *v20; // [rsp+150h] [rbp+50h]
  __int64 v21; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp+60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081181, 0LL, 0LL, 2u, &pData);
  if ( (int)CempUtilValidateSid(a2, a3) >= 0 )
  {
    v13 = RtlCopySid(0x44u, DestinationSid, a2);
    if ( v13 >= 0 )
    {
      v8 = HampUserFindInManager(
             *(struct _HOST_ACTIVITY_MANAGER **)a1,
             *((_DWORD *)a1 + 35),
             (union _RM_SID *)DestinationSid);
      v9 = v8;
      if ( v8 )
      {
        v10 = HampUserLogoff(v8, a1, a4);
        if ( v10 >= 0 )
          v10 = 0;
        v13 = v10;
        CemRcObjectDereference(v9);
      }
      else
      {
        v13 = -1073741275;
      }
    }
  }
  else
  {
    v13 = -1073741585;
  }
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v19 = 4LL;
    v18 = &v13;
    v14 = *((_DWORD *)a1 + 35);
    v20 = &v14;
    v21 = 4LL;
    TlgCreateSid(&pDesc, a2);
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800818F1, 0LL, 0LL, 5u, &v17);
  }
  return (unsigned int)v13;
}
