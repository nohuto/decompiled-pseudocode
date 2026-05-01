/*
 * XREFs of ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800218B4
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800217D4 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall HampManagerStart(struct _HOST_ACTIVITY_MANAGER *a1)
{
  const GUID *v2; // r9
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  int v6; // [rsp+40h] [rbp-58h] BYREF
  __int64 v7; // [rsp+48h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-48h] BYREF
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  v6 = CreateResourcePolicyStoreClient(&v7);
  LODWORD(v2) = v6;
  if ( v6 >= 0 )
  {
    *((_QWORD *)a1 + 29) = v7;
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))RtlSubscribeWnfStateChangeNotification)(
             (char *)a1 + 240,
             SstpTargetWnfStateName,
             0LL,
             HampManagerSystemStateChanged,
             a1,
             0LL,
             0,
             0);
  }
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
    {
      v11 = 0;
      v9 = &v6;
      v10 = 4;
      TlgWrite(v4, &unk_18005BAED, v5, v2, 3u, &pData);
      LODWORD(v2) = v6;
    }
  }
  if ( (int)v2 >= 0 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))RtlSubscribeWnfStateChangeNotification)(
             (char *)a1 + 240,
             SstpTargetWnfStateName,
             0LL,
             HampManagerSystemStateChanged,
             a1,
             0LL,
             0,
             0);
  return 3221225473LL;
}
