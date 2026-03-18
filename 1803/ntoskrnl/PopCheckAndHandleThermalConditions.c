/*
 * XREFs of PopCheckAndHandleThermalConditions @ 0x140180F10
 * Callers:
 *     PopThermalWorker @ 0x140643860 (PopThermalWorker.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140064E8C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PopThermalStandbyEndTracking @ 0x14014DCE4 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x140278DDC (PopThermalStandbyNotify.c)
 *     PopThermalWriteShutdownToRegistry @ 0x140278F04 (PopThermalWriteShutdownToRegistry.c)
 *     PopDiagTraceThermalStateChange @ 0x14027D8CC (PopDiagTraceThermalStateChange.c)
 *     PopTraceCr3Mitigated @ 0x14027DD94 (PopTraceCr3Mitigated.c)
 *     PopTraceCr3Tripped @ 0x14027DE2C (PopTraceCr3Tripped.c)
 *     PopTraceZoneCr3Mitigated @ 0x14027E464 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x14027E590 (PopTraceZoneCr3Tripped.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopIsHibernateSupported @ 0x14051CCB0 (PopIsHibernateSupported.c)
 *     PopExecutePowerAction @ 0x1405EB7B4 (PopExecutePowerAction.c)
 *     PopCriticalShutdown @ 0x140762C20 (PopCriticalShutdown.c)
 *     PopUpdateOverThrottledCount @ 0x140763400 (PopUpdateOverThrottledCount.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x140769844 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x140769940 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalShutdown @ 0x14077017C (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x14077019C (PopSqmThermalHibernate.c)
 */

unsigned __int8 __fastcall PopCheckAndHandleThermalConditions(__int64 a1)
{
  __int64 v1; // rsi
  char v3; // di
  char v4; // bp
  char v5; // dl
  unsigned __int8 result; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char v18; // bl
  unsigned __int64 v19; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+38h] [rbp-30h]
  _QWORD v21[4]; // [rsp+40h] [rbp-28h] BYREF

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
    goto LABEL_4;
  }
  PopAcquirePolicyLock(a1);
  if ( v4 )
  {
    if ( (unsigned __int8)PopIsHibernateSupported(&PopCapabilities) )
    {
      PopThermalHibernateInitiated = 1;
      PopThermalStandbyEndTracking(2LL, v7, v9);
      v20 = 0;
      v19 = 0xC000000400000003uLL;
      v21[1] = 0LL;
      v21[2] = 0LL;
      v21[0] = 0x8000000001LL;
      PopExecutePowerAction((unsigned int)v21, 0, (unsigned int)&v19, 5, 1);
    }
    else
    {
      v3 = 1;
    }
  }
  if ( v3 )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v1, 0x6D546F50u);
    v11 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
      v12 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    else
      v12 = 0LL;
    PopThermalWriteShutdownToRegistry((v12 + 280) & -(__int64)(v12 != 0), -v12);
    if ( v11 )
      ObfDereferenceObjectWithTag(v11, 0x6D546F50u);
    if ( !PopThermalCriticalShutdownInitiated )
    {
      PopThermalStandbyEndTracking(3LL, v7, v9);
      PopThermalCriticalShutdownInitiated = 1;
      if ( PopThermalCriticalShutdownEnabled )
        PopCriticalShutdown();
    }
  }
  PopReleasePolicyLock(v8, v7, v9);
LABEL_4:
  v5 = *(_BYTE *)(a1 + 224) != 0;
  if ( *(_BYTE *)(a1 + 73) != v5 )
  {
    *(_BYTE *)(a1 + 73) = v5;
    PopUpdateOverThrottledCount(a1);
  }
  result = *(_BYTE *)(a1 + 211);
  if ( *(_BYTE *)(a1 + 72) != result )
  {
    PopDiagTraceThermalStateChange(*(_QWORD *)(a1 + 48), result, &POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
    PopAcquirePolicyLock(v13);
    v14 = *(_BYTE *)(a1 + 211);
    *(_BYTE *)(a1 + 72) = v14;
    if ( v14 )
    {
      if ( ++dword_1403A9CA4 == 1 )
      {
        byte_1403A9CAC = 1;
        ++dword_1403A9CA8;
        PopTraceCr3Tripped();
      }
      PopTraceZoneCr3Tripped((unsigned int)dword_1403A9CA8, a1);
    }
    else
    {
      PopTraceZoneCr3Mitigated((unsigned int)dword_1403A9CA8, a1);
      --dword_1403A9CA4;
    }
    if ( dword_1403A9CA4 )
    {
      v18 = 1;
    }
    else
    {
      v18 = 0;
      PopThermalStandbyEndTracking(0LL, v15, v17);
      PopTraceCr3Mitigated((unsigned int)dword_1403A9CA8);
      if ( HIBYTE(PopSystemThermalInfo) )
      {
        PopThermalStandbyNotify(0LL);
        HIBYTE(PopSystemThermalInfo) = 0;
        return PopReleasePolicyLock(v16, v15, v17);
      }
    }
    if ( !v4 && v18 && (_BYTE)PopSystemThermalInfo && !HIBYTE(PopSystemThermalInfo) )
    {
      LOBYTE(v16) = 1;
      PopThermalStandbyNotify(v16);
      PopSystemThermalInfo = 256;
    }
    return PopReleasePolicyLock(v16, v15, v17);
  }
  return result;
}
