/*
 * XREFs of PopDeactiveThermalRequest @ 0x1406F70BC
 * Callers:
 *     PoDeleteThermalRequest @ 0x1406F6AF0 (PoDeleteThermalRequest.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopGetDope @ 0x14012E384 (PopGetDope.c)
 *     PopPropogateCoolingChange @ 0x14023CFD4 (PopPropogateCoolingChange.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140243DD4 (PopThermalUpdateTelemetryClientCount.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140247EB8 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopDiagTraceThermalRequest @ 0x1404518D8 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x140451B7C (PopDiagTraceCoolingExtension.c)
 *     PopCleanCoolingExtension @ 0x1406F6F14 (PopCleanCoolingExtension.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x14070003C (PopThermalUpdatePassiveTimeTracking.c)
 */

void __fastcall PopDeactiveThermalRequest(__int64 a1)
{
  _QWORD *v1; // rbx
  char v3; // bp
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD **)(a1 + 32);
  v3 = 0;
  PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 4));
  if ( *(_BYTE *)(a1 + 18) )
  {
    if ( v1[17] )
    {
      LOBYTE(v4) = *(_BYTE *)(a1 + 16);
      PopThermalUpdatePassiveTimeTracking(a1 + 40, v4);
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
  v5 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v6 = *(_QWORD **)(a1 + 8), *v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  if ( (_QWORD *)v1[2] == v1 + 2 )
  {
    v7 = v1[6];
    if ( v7 )
    {
      *(_QWORD *)(PopGetDope(v7) + 64) = 0LL;
      if ( *((_BYTE *)v1 + 64) )
        PopDiagTraceCoolingExtension((__int64)v1, &POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
      v8 = *v1;
      if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v9 = (_QWORD *)v1[1], (_QWORD *)*v9 != v1) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
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
