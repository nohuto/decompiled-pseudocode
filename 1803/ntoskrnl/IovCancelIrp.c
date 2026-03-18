/*
 * XREFs of IovCancelIrp @ 0x140811D70
 * Callers:
 *     IoCancelIrp @ 0x1400B6B20 (IoCancelIrp.c)
 * Callees:
 *     IovpLogStackTrace @ 0x140812778 (IovpLogStackTrace.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14082B39C (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14082B51C (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdBeforeCancelIrp @ 0x14082B944 (ViWdBeforeCancelIrp.c)
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
