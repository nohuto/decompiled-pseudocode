/*
 * XREFs of IopInitDumpCapsuleSupport @ 0x140186178
 * Callers:
 *     IoConfigureCrashDump @ 0x14017E260 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14063CE44 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopIsBitlockerOn @ 0x1401861DC (IopIsBitlockerOn.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 IopInitDumpCapsuleSupport()
{
  PVOID PoolWithTag; // rax

  if ( CapsuleTriageDumpBlockInitialized || (unsigned __int8)IopIsBitlockerOn() )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x41800uLL, 0x706D4443u);
  CapsuleTriageDumpBlock = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x41800uLL);
    CapsuleTriageDumpBlockInitialized = 1;
    return 0LL;
  }
  return 3221225626LL;
}
