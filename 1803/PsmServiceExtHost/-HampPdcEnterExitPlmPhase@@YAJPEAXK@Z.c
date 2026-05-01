/*
 * XREFs of ?HampPdcEnterExitPlmPhase@@YAJPEAXK@Z @ 0x180065C50
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
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180065DD4 (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180068C30 (-HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 */

__int64 __fastcall HampPdcEnterExitPlmPhase(struct _HOST_ACTIVITY_MANAGER **a1, int a2)
{
  int UnbiasedInterruptTimeMs64; // eax
  struct _HOST_ACTIVITY_MANAGER *v5; // rcx
  __int64 v6; // rdx
  DWORD v7; // ebx
  unsigned int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v11[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v13; // [rsp+F0h] [rbp-10h]
  int v14; // [rsp+F8h] [rbp-8h]
  int v15; // [rsp+FCh] [rbp-4h]
  int *v16; // [rsp+100h] [rbp+0h]
  int v17; // [rsp+108h] [rbp+8h]
  int v18; // [rsp+10Ch] [rbp+Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_18008312F, 0LL, 0LL, 2u, &pData);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      HampManagerAcquireLockExclusive(*a1);
      UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
      v5 = a1[3];
      *((_DWORD *)a1 + 11) = UnbiasedInterruptTimeMs64;
      TpPostWork(v5);
      HampManagerReleaseLockExclusive(*a1, v6);
      v9 = 259;
    }
    else
    {
      v9 = -1073741811;
    }
  }
  else
  {
    HampPdcExitPlmPhase((struct _HAM_PDC_CONTEXT *)a1);
    HampWakeManagerNotifyConnectedStandbyExit((struct _HOST_ACTIVITY_MANAGER *)((char *)*a1 + 392));
    v9 = 0;
  }
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v15 = 0;
    v18 = 0;
    v13 = &v9;
    v16 = &v10;
    v14 = 4;
    v10 = a2;
    v17 = 4;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800830BB, 0LL, 0LL, 4u, &pData);
  }
  return v9;
}
