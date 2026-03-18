/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x14014F7C0
 * Callers:
 *     IoConfigureCrashDump @ 0x14014F6E4 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1405D46BC (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 IopRemoveDumpCapsuleSupport()
{
  if ( CapsuleTriageDumpBlockInitialized == 1 )
  {
    if ( CapsuleTriageDumpBlock )
    {
      ExFreePoolWithTag(CapsuleTriageDumpBlock, 0);
      CapsuleTriageDumpBlock = 0LL;
    }
    CapsuleTriageDumpBlockInitialized = 0;
  }
  return 0LL;
}
