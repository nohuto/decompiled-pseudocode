/*
 * XREFs of ZwContinue @ 0x14017E7A0
 * Callers:
 *     RtlRestoreContext @ 0x1401896D0 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x140189990 (RcFrameConsolidation.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwContinue(PCONTEXT Context, BOOLEAN TestAlert)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Context, TestAlert, v2);
}
