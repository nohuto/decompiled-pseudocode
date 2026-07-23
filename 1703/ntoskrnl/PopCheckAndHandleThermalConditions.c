/*
 * XREFs of PopCheckAndHandleThermalConditions @ 0x140168960
 * Callers:
 *     PopThermalWorker @ 0x1405D7C20 (PopThermalWorker.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140071FE0 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PopThermalStandbyEndTracking @ 0x14013C87C (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x14022F5D4 (PopThermalStandbyNotify.c)
 *     PopThermalWriteShutdownToRegistry @ 0x14022F6F4 (PopThermalWriteShutdownToRegistry.c)
 *     PopDiagTraceThermalStateChange @ 0x1402322F8 (PopDiagTraceThermalStateChange.c)
 *     PopTraceCr3Mitigated @ 0x1402327AC (PopTraceCr3Mitigated.c)
 *     PopTraceCr3Tripped @ 0x14023284C (PopTraceCr3Tripped.c)
 *     PopTraceZoneCr3Mitigated @ 0x140232E78 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140232FA4 (PopTraceZoneCr3Tripped.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopIsHibernateSupported @ 0x1404C5968 (PopIsHibernateSupported.c)
 *     PopExecutePowerAction @ 0x140577024 (PopExecutePowerAction.c)
 *     PopCriticalShutdown @ 0x1406C9FF0 (PopCriticalShutdown.c)
 *     PopUpdateOverThrottledCount @ 0x1406CBF70 (PopUpdateOverThrottledCount.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1406CE498 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1406CE588 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalShutdown @ 0x1406D6AC8 (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x1406D6AE0 (PopSqmThermalHibernate.c)
 */

unsigned __int8 __fastcall PopCheckAndHandleThermalConditions(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  char v3; // di
  char v4; // bp
  char v6; // dl
  unsigned __int8 result; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  char v22; // al
  char v23; // bl
  unsigned __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+38h] [rbp-30h]
  _QWORD v26[4]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  v4 = 0;
  if ( *(_BYTE *)(a1 + 210) && !*(_BYTE *)(a1 + 71) )
  {
    v3 = 1;
    PopSqmThermalCriticalShutdown();
    PopDiagTraceZoneCriticalTripPointExceeded(a1 + 112, v2);
    *(_BYTE *)(a1 + 71) = 1;
  }
  if ( *(_BYTE *)(a1 + 209) )
  {
    v4 = 1;
    PopDiagTraceZoneS4TripPointExceeded(a1 + 112, v2);
    PopSqmThermalHibernate(a1);
  }
  else if ( !v3 )
  {
    goto LABEL_4;
  }
  PopAcquirePolicyLock(a1, a2);
  if ( v4 )
  {
    if ( (unsigned __int8)PopIsHibernateSupported(&PopCapabilities) )
    {
      PopThermalHibernateInitiated = 1;
      PopThermalStandbyEndTracking(2LL, v8, v9);
      v25 = 0;
      v24 = 0xC000000400000003uLL;
      v26[1] = 0LL;
      v26[2] = 0LL;
      v26[0] = 0x8000000001LL;
      PopExecutePowerAction((unsigned int)v26, 0, (unsigned int)&v24, 5, 1);
    }
    else
    {
      v3 = 1;
    }
  }
  if ( v3 )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v2, 0x746C6644u);
    v11 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
      v12 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    else
      v12 = 0LL;
    PopThermalWriteShutdownToRegistry((v12 + 280) & -(__int64)(v12 != 0), -v12);
    if ( v11 )
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
    if ( !PopThermalCriticalShutdownInitiated )
    {
      PopThermalStandbyEndTracking(3LL, v13, v14);
      PopThermalCriticalShutdownInitiated = 1;
      if ( PopThermalCriticalShutdownEnabled )
        PopCriticalShutdown();
    }
  }
  PopReleasePolicyLock();
LABEL_4:
  v6 = *(_BYTE *)(a1 + 224) != 0;
  if ( *(_BYTE *)(a1 + 73) != v6 )
  {
    *(_BYTE *)(a1 + 73) = v6;
    PopUpdateOverThrottledCount(a1);
  }
  result = *(_BYTE *)(a1 + 211);
  if ( *(_BYTE *)(a1 + 72) != result )
  {
    PopDiagTraceThermalStateChange(*(_QWORD *)(a1 + 48), result, &POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
    PopAcquirePolicyLock(v16, v15);
    v17 = *(_BYTE *)(a1 + 211);
    *(_BYTE *)(a1 + 72) = v17;
    if ( v17 )
    {
      if ( ++dword_14034AB24 == 1 )
      {
        byte_14034AB2C = 1;
        ++dword_14034AB28;
        PopTraceCr3Tripped();
      }
      PopTraceZoneCr3Tripped((unsigned int)dword_14034AB28, a1);
      v21 = dword_14034AB24;
    }
    else
    {
      PopTraceZoneCr3Mitigated((unsigned int)dword_14034AB28, a1);
      v21 = --dword_14034AB24;
    }
    if ( v21 )
    {
      v22 = HIBYTE(PopSystemThermalInfo);
      v23 = 1;
    }
    else
    {
      v23 = 0;
      PopThermalStandbyEndTracking(0LL, v18, v20);
      PopTraceCr3Mitigated((unsigned int)dword_14034AB28);
      v22 = HIBYTE(PopSystemThermalInfo);
      if ( HIBYTE(PopSystemThermalInfo) )
      {
        PopThermalStandbyNotify(0LL);
        HIBYTE(PopSystemThermalInfo) = 0;
        return PopReleasePolicyLock();
      }
    }
    if ( !v4 && v23 && (_BYTE)PopSystemThermalInfo && !v22 )
    {
      LOBYTE(v19) = 1;
      PopThermalStandbyNotify(v19);
      PopSystemThermalInfo = 256;
    }
    return PopReleasePolicyLock();
  }
  return result;
}
