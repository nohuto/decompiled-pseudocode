/*
 * XREFs of PopOrphanCoolingExtension @ 0x1406C6B88
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x1406C6880 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     PopGetDope @ 0x140163F5C (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140168740 (PopThermalUpdateTelemetryClientCount.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140232B38 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopDiagTraceThermalRequest @ 0x14045D940 (PopDiagTraceThermalRequest.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140578F68 (PopThermalUpdatePassiveTimeTracking.c)
 */

void __fastcall PopOrphanCoolingExtension(_QWORD *a1)
{
  __int64 i; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  PopAcquireRwLockExclusive((ULONG_PTR)(a1 + 4));
  if ( a1[6] )
  {
    for ( i = a1[2]; (_QWORD *)i != a1 + 2; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 18) )
      {
        *(_BYTE *)(i + 18) = 0;
        if ( a1[17] )
        {
          PopThermalUpdatePassiveTimeTracking(i + 40, *(_BYTE *)(i + 16));
          PopTraceThermalRequestPassiveHistogram(i);
          PopThermalUpdateTelemetryClientCount(0);
        }
        PopDiagTraceThermalRequest(i, &POP_ETW_EVENT_THERMAL_REQUEST_REMOVE);
      }
    }
    *(_QWORD *)(PopGetDope(a1[6]) + 64) = 0LL;
    v3 = *a1;
    v4 = (_QWORD *)a1[1];
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v4 != a1 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *a1 = 0LL;
    a1[6] = 0LL;
  }
  PopReleaseRwLock((ULONG_PTR)(a1 + 4));
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
}
