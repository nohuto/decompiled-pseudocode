/*
 * XREFs of SyncLoadDDB @ 0x1C009C4AC
 * Callers:
 *     AMLILoadDDB @ 0x1C009BE08 (AMLILoadDDB.c)
 * Callees:
 *     RestartContext @ 0x1C000252C (RestartContext.c)
 *     FreeContext @ 0x1C0002E08 (FreeContext.c)
 *     GetThreadCurrentContext @ 0x1C0003CE4 (GetThreadCurrentContext.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall SyncLoadDDB(char *Entry)
{
  char v2; // bp
  unsigned int restarted; // ebx
  __int64 ThreadCurrentContext; // rbx
  KIRQL v5; // r10
  NTSTATUS v6; // eax
  const void *v7; // rbx
  unsigned int v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  if ( (int)EmClientQueryRuleState(&GUID_EM_RULE_AMLI_ALLOW_INVALID_RECLAIM_MEMORY_MAP_ON_LOAD, &v12) >= 0 && v12 == 2 )
  {
    v2 = 1;
    _InterlockedIncrement(&gAllowInvalidReclaimMemoryMap);
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    ThreadCurrentContext = GetThreadCurrentContext();
    KeReleaseSpinLock(&SpinLock, v5);
    if ( ThreadCurrentContext )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
      PrintDebugMessage(182, 0LL, 0LL, 0LL, 0LL);
      *((_QWORD *)Entry + 11) = 0LL;
      restarted = -1072431098;
      FreeContext(Entry);
    }
    else
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      *((_DWORD *)Entry + 16) |= 0x200u;
      *((_QWORD *)Entry + 21) = EvalMethodComplete;
      *((_QWORD *)Entry + 23) = &v9;
      restarted = RestartContext((__int64)Entry, 0);
      while ( restarted == 32772 )
      {
        v6 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v7 = (const void *)v6;
        if ( v6 )
        {
          LogError(-1072431098);
          AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
          PrintDebugMessage(183, v7, 0LL, 0LL, 0LL);
          restarted = -1072431098;
        }
        else
        {
          restarted = v9;
          if ( v9 == 32771 )
            restarted = RestartContext(v10, 0);
        }
      }
    }
    if ( v2 )
      _InterlockedDecrement(&gAllowInvalidReclaimMemoryMap);
  }
  else
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
    PrintDebugMessage(184, 0LL, 0LL, 0LL, 0LL);
    *((_QWORD *)Entry + 11) = 0LL;
    restarted = -1072431098;
    FreeContext(Entry);
  }
  return restarted;
}
