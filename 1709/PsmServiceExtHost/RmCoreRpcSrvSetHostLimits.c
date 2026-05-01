/*
 * XREFs of RmCoreRpcSrvSetHostLimits @ 0x180034A70
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z @ 0x1800058A4 (-RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmCoreRpcSrvSetHostLimits(__int64 a1, unsigned __int64 a2, struct _RM_RESOURCE_LIMITS *a3)
{
  struct _RM_ACTIVATOR *v5; // rcx
  unsigned int v6; // eax
  DWORD v7; // ebx
  unsigned int v8; // edi
  _BYTE v10[80]; // [rsp+20h] [rbp-68h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v10);
  v6 = RmpCoreApiSetHostLimits(v5, a2, a3);
  v7 = HampLockTrackerId;
  v8 = v6;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
  return v8;
}
