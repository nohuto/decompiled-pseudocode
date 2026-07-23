/*
 * XREFs of ZwContinue @ 0x14017E7A0
 * Callers:
 *     RtlRestoreContext @ 0x1401896D0 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x140189990 (RcFrameConsolidation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwContinue(PCONTEXT Context, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Context);
}
