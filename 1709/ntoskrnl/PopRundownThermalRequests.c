/*
 * XREFs of PopRundownThermalRequests @ 0x140450F38
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1404F1610 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopDiagTraceThermalRequest @ 0x1404518D8 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x140451B7C (PopDiagTraceCoolingExtension.c)
 */

void PopRundownThermalRequests()
{
  __int64 i; // rbx
  __int64 *j; // rdi

  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      PopAcquireRwLockExclusive(i + 32);
      PopDiagTraceCoolingExtension(i, &POP_ETW_EVENT_COOLING_EXTENSION_RUNDOWN);
      for ( j = *(__int64 **)(i + 16); j != (__int64 *)(i + 16); j = (__int64 *)*j )
      {
        if ( *((_BYTE *)j + 18) )
          PopDiagTraceThermalRequest(j, &POP_ETW_EVENT_THERMAL_REQUEST_RUNDOWN);
      }
      PopReleaseRwLock(i + 32);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
}
