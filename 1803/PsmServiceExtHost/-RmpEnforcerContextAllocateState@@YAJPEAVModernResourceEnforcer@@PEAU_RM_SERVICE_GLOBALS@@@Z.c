/*
 * XREFs of ?RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003B548
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180039EFC (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpEnforcerContextAllocateState(struct ModernResourceEnforcer *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  __int64 result; // rax

  result = TpAllocTimer((char *)a2 + 152, RmpPowerBoostWatchdogCallback, a2, 0LL);
  if ( (int)result >= 0 )
  {
    result = TpAllocTimer((char *)a2 + 184, RmpPowerBoostTimedBoostCallback, a2, 0LL);
    if ( (int)result >= 0 )
      result = 0LL;
    if ( (int)result >= 0 )
    {
      result = TpAllocTimer((char *)a2 + 216, RmpQoSWatchdogCallback, (char *)a2 + 200, 0LL);
      if ( (int)result >= 0 )
        result = 0LL;
      if ( (int)result >= 0 )
      {
        result = TpAllocTimer((char *)a2 + 72, RmpGpuMonitorTimerCallback, a2, 0LL);
        if ( (int)result >= 0 )
          result = 0LL;
        if ( (int)result >= 0 )
        {
          result = TpAllocWork((char *)a2 + 240, RmpOfferLazyDecommitWorkerCallback, (char *)a2 + 240, 0LL);
          if ( (int)result >= 0 )
            result = 0LL;
          if ( (int)result >= 0 )
          {
            if ( a1 )
            {
              *((_QWORD *)a2 + 5) = a1;
              (*(void (__fastcall **)(struct ModernResourceEnforcer *))(*(_QWORD *)a1 + 8LL))(a1);
            }
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}
