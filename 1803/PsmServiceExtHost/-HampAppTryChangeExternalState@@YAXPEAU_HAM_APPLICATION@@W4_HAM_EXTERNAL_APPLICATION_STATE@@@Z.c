/*
 * XREFs of ?HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18000A0EC
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@KPEAK@Z @ 0x180007F28 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@KPEAK@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180009D04 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000AC4C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@1@Z @ 0x18000A1E8 (-HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@.c)
 *     ?HampAppIssueStateChangeNotification@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18000A2E4 (-HampAppIssueStateChangeNotification@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE.c)
 *     CempLockTrackerMarkReleased @ 0x180014260 (CempLockTrackerMarkReleased.c)
 */

__int64 __fastcall HampAppTryChangeExternalState(__int64 a1, unsigned int a2)
{
  DWORD v2; // esi
  _QWORD *Value; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx

  v2 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *Value |= 0x20uLL;
    ++Value[6];
  }
  RtlAcquireSRWLockExclusive(a1 + 576);
  *(_DWORD *)(a1 + 584) = GetCurrentThreadId();
  v7 = *(_DWORD *)(a1 + 608) & 7;
  if ( (_DWORD)v7 != a2 && ((_DWORD)v7 != 4 || !a2) )
  {
    if ( a2 )
    {
      v6 = a2 - 1;
      if ( a2 == 1 || (v6 = a2 - 2, a2 == 2) )
      {
        if ( (_DWORD)v7 == 3 )
          goto LABEL_9;
      }
      else if ( a2 != 3 )
      {
        goto LABEL_9;
      }
    }
    HampAppIssueStateChangeNotification(a1, a2);
    HampPkgUpdateApplicationStateCounters(*(_QWORD *)(a1 + 88));
    *(_DWORD *)(a1 + 608) ^= ((unsigned __int8)a2 ^ (unsigned __int8)*(_DWORD *)(a1 + 608)) & 7;
  }
LABEL_9:
  CempLockTrackerMarkReleased(v6, v7, 5LL);
  *(_DWORD *)(a1 + 584) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 576);
}
