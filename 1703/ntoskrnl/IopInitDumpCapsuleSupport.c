/*
 * XREFs of IopInitDumpCapsuleSupport @ 0x140159548
 * Callers:
 *     IoConfigureCrashDump @ 0x140159F78 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1405BA5F8 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopIsBitlockerOn @ 0x1401595AC (IopIsBitlockerOn.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
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
