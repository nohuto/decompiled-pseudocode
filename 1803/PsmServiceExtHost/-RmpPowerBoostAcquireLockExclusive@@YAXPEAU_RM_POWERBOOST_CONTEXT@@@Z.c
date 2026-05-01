/*
 * XREFs of ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180028B8C
 * Callers:
 *     ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18000481C (-RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800258B0 (-RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800289E8 (-RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18005EFD0 (-RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpPowerBoostAcquireLockExclusive(struct _RM_POWERBOOST_CONTEXT *a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      __int2c();
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 32);
  *((_DWORD *)a1 + 10) = GetCurrentThreadId();
}
