/*
 * XREFs of PopDeactiveThermalRequest @ 0x1406C69DC
 * Callers:
 *     PoDeleteThermalRequest @ 0x1406C66C0 (PoDeleteThermalRequest.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     PopGetDope @ 0x140163F5C (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140168740 (PopThermalUpdateTelemetryClientCount.c)
 *     PopPropogateCoolingChange @ 0x14022A124 (PopPropogateCoolingChange.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140232B38 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopDiagTraceThermalRequest @ 0x14045D940 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14045DF44 (PopDiagTraceCoolingExtension.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140578F68 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopCleanCoolingExtension @ 0x1406C683C (PopCleanCoolingExtension.c)
 */

void __fastcall PopDeactiveThermalRequest(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // bp
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  PopAcquireRwLockExclusive(v1 + 32);
  if ( *(_BYTE *)(a1 + 18) )
  {
    if ( *(_QWORD *)(v1 + 136) )
    {
      PopThermalUpdatePassiveTimeTracking(a1 + 40, *(_BYTE *)(a1 + 16));
      PopTraceThermalRequestPassiveHistogram(a1);
      PopThermalUpdateTelemetryClientCount(0);
    }
    PopDiagTraceThermalRequest(a1, &POP_ETW_EVENT_THERMAL_REQUEST_REMOVE);
    *(_BYTE *)(a1 + 18) = 0;
    PopPropogateCoolingChange(v1);
  }
  PopReleaseRwLock(v1 + 32);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  PopAcquireRwLockExclusive(v1 + 32);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v5 != a1 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( *(_QWORD *)(v1 + 16) == v1 + 16 )
  {
    v6 = *(_QWORD *)(v1 + 48);
    if ( v6 )
    {
      *(_QWORD *)(PopGetDope(v6) + 64) = 0LL;
      if ( *(_BYTE *)(v1 + 64) )
        PopDiagTraceCoolingExtension(v1, &POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
      v7 = *(_QWORD *)v1;
      v8 = *(_QWORD **)(v1 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v1 + 8LL) != v1 || *v8 != v1 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *(_QWORD *)v1 = 0LL;
    }
    v3 = 1;
  }
  PopReleaseRwLock(v1 + 32);
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
  if ( v3 )
  {
    PopAcquireRwLockExclusive(v1 + 32);
    if ( *(_BYTE *)(v1 + 67) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      *(_QWORD *)(v1 + 72) = &Event;
      PopReleaseRwLock(v1 + 32);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      PopAcquireRwLockExclusive(v1 + 32);
      *(_QWORD *)(v1 + 72) = 0LL;
    }
    PopReleaseRwLock(v1 + 32);
    PopCleanCoolingExtension(v1);
  }
}
