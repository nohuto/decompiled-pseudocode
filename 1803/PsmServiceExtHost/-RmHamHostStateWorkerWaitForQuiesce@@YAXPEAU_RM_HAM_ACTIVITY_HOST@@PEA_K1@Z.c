/*
 * XREFs of ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180041E28
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000AC4C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180005CAC (CempLockSleepConditionVariableExclusive.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180007310 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x18000BAF4 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F450 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4B8 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800108C4 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800165C0 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800172C0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180032CD4 (-RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800330BC (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAX@Z @ 0x18003344C (-RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800334CC (-HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033D5C (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ??$_TlgCreateDesc@_K@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@AEB_K@Z @ 0x18004CCEC (--$_TlgCreateDesc@_K@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@AEB_K@Z.c)
 *     ??$_TlgCreateDesc@E@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@AEBE@Z @ 0x18004F8FC (--$_TlgCreateDesc@E@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@AEBE@Z.c)
 *     ?RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005C10C (-RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005C114 (-RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005C11C (-RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmHamHostStateWorkerWaitForQuiesce(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  const WCHAR *PsmKey; // rax
  char v4; // [rsp+34h] [rbp-B4h] BYREF
  _BYTE v5[3]; // [rsp+35h] [rbp-B3h] BYREF
  struct _RM_ACTIVITY_HOST *v6; // [rsp+38h] [rbp-B0h]
  int v7; // [rsp+40h] [rbp-A8h]
  int v8; // [rsp+44h] [rbp-A4h]
  struct _HAM_DEPENDENCY_GROUP *v9; // [rsp+48h] [rbp-A0h]
  TraceLoggingHProvider hProvider; // [rsp+50h] [rbp-98h]
  unsigned __int64 Id; // [rsp+58h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+80h] [rbp-68h] BYREF
  __int64 v14; // [rsp+90h] [rbp-58h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+B0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+C0h] [rbp-28h] BYREF

  v6 = RmHostFromHamHost(a1);
  RmAcquireEnforcementLocks(v6);
  while ( 1 )
  {
    HampHostUpdateQuiesceState(a1, a2, a3);
    if ( (unsigned __int8)HIBYTE(*((_DWORD *)a1 + 158)) >> 5 == 5LL )
      break;
    if ( (unsigned int)HampHostIsQuiesceInterrupted(a1) )
    {
      RmReleaseEnforcementLocks(v6);
      RmpSystemResourceTimerReset(a1, *((void **)a1 + 95));
      RmAcquireEnforcementLocks(v6);
      v8 = 1;
      goto LABEL_14;
    }
    if ( (unsigned int)HampHostCheckUpdateEnforcementSettings(a1) )
    {
      HampHostCheckStartPendingActivities(a1);
    }
    else
    {
      RmpReleaseGlobalLock();
      CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 656, 0LL);
      HampHostReleaseLockExclusive(a1);
      RmAcquireEnforcementLocks(v6);
    }
  }
  *((_DWORD *)a1 + 161) = 0;
  *((_DWORD *)v6 + 289) |= 0x80u;
  *((_DWORD *)v6 + 290) &= ~0x80u;
  v9 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 83);
  if ( v9 )
  {
    HampDepGroupAcquireLockExclusive(v9);
    v7 = HampDepGroupTryEnterStateChange(v9, 0LL);
    HampDepGroupReleaseLockExclusive(v9);
  }
  else
  {
    v7 = 0;
  }
  RmReleaseEnforcementLocks(v6);
  RmpSystemSetApplicationQuiesceCompleteEvents(v6);
  RmpSystemResourceTimerReset(a1, *((void **)a1 + 95));
  if ( v7 )
    HampDepGroupRunStateChangeWorker(v9);
  v8 = 0;
  RmAcquireEnforcementLocks(v6);
LABEL_14:
  hProvider = (TraceLoggingHProvider)HamTlgProvider;
  if ( *HamTlgProvider > 4u )
  {
    if ( TlgKeywordOn(hProvider, 0x400000000008uLL) )
    {
      PsmKey = RmHamHostGetPsmKey(a1);
      TlgCreateWsz(&v13, PsmKey);
      Id = RmHamHostGetId(a1);
      _TlgCreateDesc<unsigned __int64>(&v14, &Id);
      v4 = (*((_QWORD *)a1 + 79) >> 29) & 7;
      _TlgCreateDesc<unsigned char>(&v15, &v4);
      v5[0] = v8;
      _TlgCreateDesc<unsigned char>(&v16, v5);
      _TlgCreateDesc<unsigned __int64>(&v17, a3);
      TlgWrite(hProvider, &unk_18007F753, 0LL, 0LL, 7u, &pDesc);
    }
  }
}
