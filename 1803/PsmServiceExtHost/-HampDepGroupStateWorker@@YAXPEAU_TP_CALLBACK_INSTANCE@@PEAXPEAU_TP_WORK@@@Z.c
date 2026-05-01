/*
 * XREFs of ?HampDepGroupStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000F500
 * Callers:
 *     <none>
 * Callees:
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x18000BAF4 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000BB78 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F450 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4B8 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall HampDepGroupStateWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _HAM_DEPENDENCY_GROUP *a2,
        struct _TP_WORK *a3)
{
  DWORD v4; // edi
  int v5; // edx
  _BYTE v6[144]; // [rsp+30h] [rbp-D8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-48h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v8; // [rsp+E0h] [rbp-28h]
  int v9; // [rsp+E8h] [rbp-20h]
  int v10; // [rsp+ECh] [rbp-1Ch]

  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180083495, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v6);
  while ( 1 )
  {
    HampDepGroupAcquireLockExclusive(a2);
    if ( *((_QWORD *)a2 + 14) == *((_QWORD *)a2 + 13) || !(unsigned int)HampDepGroupTryEnterStateChange(a2, 0LL) )
      break;
    HampDepGroupReleaseLockExclusive(a2);
    HampDepGroupRunStateChangeWorker(a2);
  }
  *((_DWORD *)a2 + 33) &= ~1u;
  HampDepGroupReleaseLockExclusive(a2);
  HampDepGroupDereference(a2);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, 0LL);
  }
  if ( _volatile_metadata > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
    {
      v10 = 0;
      v8 = a2;
      v9 = v5;
      TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180083575, 0LL, 0LL, 3u, &pData);
    }
  }
}
