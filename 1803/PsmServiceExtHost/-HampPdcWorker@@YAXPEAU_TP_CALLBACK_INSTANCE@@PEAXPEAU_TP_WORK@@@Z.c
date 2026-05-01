/*
 * XREFs of ?HampPdcWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180065FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180028B44 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180029FD0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002A038 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z @ 0x18006074C (-HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180064234 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180064540 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180065E10 (-HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 */

void __fastcall HampPdcWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  unsigned int v4; // edi
  DWORD CurrentThreadId; // eax
  struct _HOST_ACTIVITY_MANAGER *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int v11; // edx
  unsigned int v12; // edx
  const struct _TlgProvider_t *v13; // rcx
  struct _HOST_ACTIVITY_MANAGER *v14; // rcx
  __int64 v15; // rdx
  DWORD v16; // ebx
  const struct _TlgProvider_t *v17; // rcx
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  char v21[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v23; // [rsp+100h] [rbp+0h]
  int v24; // [rsp+108h] [rbp+8h]
  int v25; // [rsp+10Ch] [rbp+Ch]

  v4 = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_18008303A, 0LL, 0LL, 2u, &pData);
  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  *((_DWORD *)a2 + 8) = CurrentThreadId;
  HampManagerReleaseLockExclusive(v6, v7);
  while ( 1 )
  {
    HampManagerAcquireLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v8);
    if ( !*((_DWORD *)a2 + 11) )
      break;
    v4 = CempQueryUnbiasedInterruptTimeMs64() - *((_DWORD *)a2 + 11);
    v20 = *((_QWORD *)a2 + 6);
    HampManagerReleaseLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v10);
    if ( !(unsigned int)HampPdcUpdateState((struct _HAM_PDC_CONTEXT *)a2, v4) )
      goto LABEL_12;
    v11 = *((_DWORD *)a2 + 9);
    if ( v4 >= v11 && (v11 = *((_DWORD *)a2 + 10), v4 >= v11) )
      v12 = 0;
    else
      v12 = v11 - v4;
    v19 = -10000LL * v12;
    RtlWaitOnAddress(a2 + 48, &v20, 8LL, (unsigned __int64)&v19 & -(__int64)(v12 != 0));
  }
  HampManagerReleaseLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v9);
LABEL_12:
  HampSystemNotificationClientAcknowledge(*((void **)a2 + 1));
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 0x400000000008uLL) )
  {
    v25 = 0;
    v23 = &v18;
    v18 = v4;
    v24 = 4;
    TlgWrite(v13, &unk_180083187, 0LL, 0LL, 3u, &pData);
  }
  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a2);
  v14 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  *((_DWORD *)a2 + 8) = 0;
  HampManagerReleaseLockExclusive(v14, v15);
  v16 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v16, 0LL);
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
    TlgWrite(v17, &unk_1800831B9, 0LL, 0LL, 2u, &pData);
}
