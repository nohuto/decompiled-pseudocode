/*
 * XREFs of PopDeactiveThermalRequest @ 0x14075E88C
 * Callers:
 *     PoDeleteThermalRequest @ 0x14075E600 (PoDeleteThermalRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     PopGetDope @ 0x1401635CC (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1401719D0 (PopThermalUpdateTelemetryClientCount.c)
 *     PopPropogateCoolingChange @ 0x14018238C (PopPropogateCoolingChange.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14027E12C (PopTraceThermalRequestPassiveHistogram.c)
 *     PopDiagTraceThermalRequest @ 0x14058367C (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x140583938 (PopDiagTraceCoolingExtension.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1405EA674 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopCleanCoolingExtension @ 0x14075E6DC (PopCleanCoolingExtension.c)
 */

void __fastcall PopDeactiveThermalRequest(__int64 a1)
{
  _QWORD *v1; // rbx
  char v3; // bp
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD **)(a1 + 32);
  v3 = 0;
  PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 4));
  if ( *(_BYTE *)(a1 + 18) )
  {
    if ( v1[17] )
    {
      PopThermalUpdatePassiveTimeTracking(a1 + 40, *(_BYTE *)(a1 + 16));
      PopTraceThermalRequestPassiveHistogram(a1);
      PopThermalUpdateTelemetryClientCount(0);
    }
    PopDiagTraceThermalRequest(a1, &POP_ETW_EVENT_THERMAL_REQUEST_REMOVE);
    *(_BYTE *)(a1 + 18) = 0;
    PopPropogateCoolingChange((__int64)v1);
  }
  PopReleaseRwLock((ULONG_PTR)(v1 + 4));
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 4));
  v4 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v5 = *(_QWORD **)(a1 + 8), *v5 != a1) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( (_QWORD *)v1[2] == v1 + 2 )
  {
    v6 = v1[6];
    if ( v6 )
    {
      *(_QWORD *)(PopGetDope(v6) + 64) = 0LL;
      if ( *((_BYTE *)v1 + 64) )
        PopDiagTraceCoolingExtension((__int64)v1, &POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
      v7 = *v1;
      if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v8 = (_QWORD *)v1[1], (_QWORD *)*v8 != v1) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *v1 = 0LL;
    }
    v3 = 1;
  }
  PopReleaseRwLock((ULONG_PTR)(v1 + 4));
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
  if ( v3 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 4));
    if ( *((_BYTE *)v1 + 67) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v1[9] = &Event;
      PopReleaseRwLock((ULONG_PTR)(v1 + 4));
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 4));
      v1[9] = 0LL;
    }
    PopReleaseRwLock((ULONG_PTR)(v1 + 4));
    PopCleanCoolingExtension(v1);
  }
}
