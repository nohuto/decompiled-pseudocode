/*
 * XREFs of PopCheckAndHandleThermalConditions @ 0x1402436CC
 * Callers:
 *     PopThermalWorker @ 0x140700090 (PopThermalWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400B05BC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopThermalStandbyEndTracking @ 0x140243AA8 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x140243B00 (PopThermalStandbyNotify.c)
 *     PopThermalWriteShutdownToRegistry @ 0x140243E60 (PopThermalWriteShutdownToRegistry.c)
 *     PopDiagTraceThermalStateChange @ 0x14024712C (PopDiagTraceThermalStateChange.c)
 *     PopTraceCr3Mitigated @ 0x1402479E4 (PopTraceCr3Mitigated.c)
 *     PopTraceCr3Tripped @ 0x140247A7C (PopTraceCr3Tripped.c)
 *     PopTraceZoneCr3Mitigated @ 0x14024836C (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140248498 (PopTraceZoneCr3Tripped.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopIsHibernateSupported @ 0x1404E8714 (PopIsHibernateSupported.c)
 *     PopCriticalShutdown @ 0x1406FCAD8 (PopCriticalShutdown.c)
 *     PopExecutePowerAction @ 0x1406FCCB4 (PopExecutePowerAction.c)
 *     PopUpdateOverThrottledCount @ 0x1407009C0 (PopUpdateOverThrottledCount.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1407059A8 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x140705A98 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalShutdown @ 0x14070CD30 (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x14070CD50 (PopSqmThermalHibernate.c)
 */

unsigned __int8 __fastcall PopCheckAndHandleThermalConditions(__int64 a1)
{
  __int64 v1; // rsi
  char v3; // di
  char v4; // bp
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v6; // rdi
  __int64 v7; // rdx
  char v8; // dl
  unsigned __int8 result; // al
  int v10; // ecx
  char v11; // al
  __int64 v12; // rcx
  char v13; // bl
  unsigned __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+38h] [rbp-30h]
  _QWORD v16[4]; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  v4 = 0;
  if ( *(_BYTE *)(a1 + 210) && !*(_BYTE *)(a1 + 71) )
  {
    v3 = 1;
    PopSqmThermalCriticalShutdown();
    PopDiagTraceZoneCriticalTripPointExceeded(a1 + 112, v1);
    *(_BYTE *)(a1 + 71) = 1;
  }
  if ( *(_BYTE *)(a1 + 209) )
  {
    v4 = 1;
    PopDiagTraceZoneS4TripPointExceeded(a1 + 112, v1);
    PopSqmThermalHibernate(a1);
  }
  else if ( !v3 )
  {
    goto LABEL_21;
  }
  PopAcquirePolicyLock(a1);
  if ( v4 )
  {
    if ( (unsigned __int8)PopIsHibernateSupported(&PopCapabilities) )
    {
      PopThermalHibernateInitiated = 1;
      PopThermalStandbyEndTracking(2LL);
      v15 = 0;
      v14 = 0xC000000400000003uLL;
      v16[1] = 0LL;
      v16[2] = 0LL;
      v16[0] = 0x8000000001LL;
      PopExecutePowerAction((unsigned int)v16, 0, (unsigned int)&v14, 5, 1);
    }
    else
    {
      v3 = 1;
    }
  }
  if ( v3 )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v1, 0x746C6644u);
    v6 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
      v7 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    else
      v7 = 0LL;
    PopThermalWriteShutdownToRegistry((v7 + 280) & -(__int64)(v7 != 0), -v7);
    if ( v6 )
      ObfDereferenceObjectWithTag(v6, 0x746C6644u);
    if ( !PopThermalCriticalShutdownInitiated )
    {
      PopThermalStandbyEndTracking(3LL);
      PopThermalCriticalShutdownInitiated = 1;
      if ( PopThermalCriticalShutdownEnabled )
        PopCriticalShutdown();
    }
  }
  PopReleasePolicyLock();
LABEL_21:
  v8 = *(_BYTE *)(a1 + 224) != 0;
  if ( *(_BYTE *)(a1 + 73) != v8 )
  {
    *(_BYTE *)(a1 + 73) = v8;
    PopUpdateOverThrottledCount(a1);
  }
  result = *(_BYTE *)(a1 + 211);
  if ( *(_BYTE *)(a1 + 72) != result )
  {
    PopDiagTraceThermalStateChange(*(_QWORD *)(a1 + 48), result, &POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
    PopAcquirePolicyLock(v10);
    v11 = *(_BYTE *)(a1 + 211);
    *(_BYTE *)(a1 + 72) = v11;
    if ( v11 )
    {
      if ( ++dword_140365204 == 1 )
      {
        byte_14036520C = 1;
        ++dword_140365208;
        PopTraceCr3Tripped();
      }
      PopTraceZoneCr3Tripped((unsigned int)dword_140365208, a1);
    }
    else
    {
      PopTraceZoneCr3Mitigated((unsigned int)dword_140365208, a1);
      --dword_140365204;
    }
    if ( dword_140365204 )
    {
      v13 = 1;
    }
    else
    {
      v13 = 0;
      PopThermalStandbyEndTracking(0LL);
      PopTraceCr3Mitigated((unsigned int)dword_140365208);
      if ( HIBYTE(PopSystemThermalInfo) )
      {
        PopThermalStandbyNotify(0LL);
        HIBYTE(PopSystemThermalInfo) = 0;
        return PopReleasePolicyLock();
      }
    }
    if ( !v4 && v13 && (_BYTE)PopSystemThermalInfo && !HIBYTE(PopSystemThermalInfo) )
    {
      LOBYTE(v12) = 1;
      PopThermalStandbyNotify(v12);
      PopSystemThermalInfo = 256;
    }
    return PopReleasePolicyLock();
  }
  return result;
}
