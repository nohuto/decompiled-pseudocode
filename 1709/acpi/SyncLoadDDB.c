/*
 * XREFs of SyncLoadDDB @ 0x1C00AEE84
 * Callers:
 *     AMLILoadDDB @ 0x1C00AED78 (AMLILoadDDB.c)
 * Callees:
 *     GetThreadCurrentContext @ 0x1C00151E4 (GetThreadCurrentContext.c)
 *     RestartContext @ 0x1C0018450 (RestartContext.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     FreeContext @ 0x1C005FFB8 (FreeContext.c)
 */

__int64 __fastcall SyncLoadDDB(char *Entry)
{
  char v2; // bp
  __int64 ThreadCurrentContext; // rbx
  KIRQL v4; // r10
  unsigned int restarted; // ebx
  NTSTATUS v7; // eax
  const void *v8; // rbx
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
  if ( KeGetCurrentIrql() >= 2u )
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
    PrintDebugMessage(184, 0LL, 0LL, 0LL, 0LL);
    *((_QWORD *)Entry + 11) = 0LL;
    restarted = -1072431098;
    FreeContext(Entry);
  }
  else
  {
    byte_1C0079660 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    ThreadCurrentContext = GetThreadCurrentContext();
    KeReleaseSpinLock(&SpinLock, v4);
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
        v7 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v8 = (const void *)v7;
        if ( v7 )
        {
          LogError(-1072431098);
          AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
          PrintDebugMessage(183, v8, 0LL, 0LL, 0LL);
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
  return restarted;
}
