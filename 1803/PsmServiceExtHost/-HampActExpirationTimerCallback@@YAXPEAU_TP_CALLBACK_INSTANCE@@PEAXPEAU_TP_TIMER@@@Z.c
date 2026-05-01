/*
 * XREFs of ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180068080
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019090 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800681F4 (-HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActVerify@@YA?AW4_HAM_ACTIVITY_VERIFY_STATUS@@PEAU_HAM_ACTIVITY@@K@Z @ 0x180068600 (-HampActVerify@@YA-AW4_HAM_ACTIVITY_VERIFY_STATUS@@PEAU_HAM_ACTIVITY@@K@Z.c)
 */

void __fastcall HampActExpirationTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_HAM_ACTIVITY_HOST **a2,
        struct _TP_TIMER *a3)
{
  DWORD v5; // esi
  _BYTE v6[144]; // [rsp+30h] [rbp-D8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-48h] BYREF
  char *v8; // [rsp+E0h] [rbp-28h]
  int v9; // [rsp+E8h] [rbp-20h]
  int v10; // [rsp+ECh] [rbp-1Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v6);
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180083760, 0LL, 0LL, 2u, &pData);
  HampHostAcquireLockExclusiveEx(a2[10], 0);
  HampActVerify(a2);
  if ( a2[65] == a3 )
  {
    a2[65] = 0LL;
    a2[66] = 0LL;
    HampActMarkExpired((struct _HAM_ACTIVITY *)a2);
    HampHostUpdateActivityState(a2[10]);
  }
  else
  {
    a3 = 0LL;
  }
  HampActVerify(a2);
  HampHostReleaseLockExclusiveEx(a2[10]);
  CemRcObjectDereference((struct _CEM_RC_OBJECT *)a2);
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v5, 0LL);
  }
  if ( a3 )
    TpReleaseTimer(a3);
  if ( _volatile_metadata > 4u )
  {
    v10 = 0;
    v8 = (char *)(a2 + 5);
    v9 = 8;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180083872, 0LL, 0LL, 3u, &pData);
  }
}
