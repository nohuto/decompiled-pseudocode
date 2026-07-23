/*
 * XREFs of ZwContinue @ 0x1401A7D20
 * Callers:
 *     RtlRestoreContext @ 0x1401B2E30 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x1401B30F0 (RcFrameConsolidation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwContinue(PCONTEXT Context, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Context);
}
