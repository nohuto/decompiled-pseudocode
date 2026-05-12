/*
 * XREFs of StorPortStallExecutionVrfy @ 0x1C006B770
 * Callers:
 *     <none>
 * Callees:
 *     StorPortStallExecution @ 0x1C001B4D0 (StorPortStallExecution.c)
 */

void __fastcall StorPortStallExecutionVrfy(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned int)BugCheckParameter2 > 0x186A0 )
    KeBugCheckEx(0xF1u, 0x2001uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
  StorPortStallExecution(BugCheckParameter2);
}
