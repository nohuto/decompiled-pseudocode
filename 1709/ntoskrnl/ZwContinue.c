/*
 * XREFs of ZwContinue @ 0x14017E120
 * Callers:
 *     RtlRestoreContext @ 0x1401891D0 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x140189490 (RcFrameConsolidation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwContinue(PCONTEXT Context, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Context);
}
