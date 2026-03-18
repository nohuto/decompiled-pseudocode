/*
 * XREFs of IovCancelIrp @ 0x1407630DC
 * Callers:
 *     IoCancelIrp @ 0x140018D10 (IoCancelIrp.c)
 * Callees:
 *     IovpLogStackTrace @ 0x140763A4C (IovpLogStackTrace.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14077C09C (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14077C21C (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdBeforeCancelIrp @ 0x14077C5D0 (ViWdBeforeCancelIrp.c)
 */

__int64 __fastcall IovCancelIrp(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx

  IovpLogStackTrace(a1);
  result = VfIrpDatabaseEntryFindAndLock(a1);
  v3 = result;
  if ( result )
  {
    if ( *(_QWORD *)(result + 248) )
      ViWdBeforeCancelIrp();
    return VfIrpDatabaseEntryReleaseLock(v3);
  }
  return result;
}
