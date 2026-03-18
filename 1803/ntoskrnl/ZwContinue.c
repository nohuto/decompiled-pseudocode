/*
 * XREFs of ZwContinue @ 0x1401A7D20
 * Callers:
 *     RtlRestoreContext @ 0x1401B2E30 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x1401B30F0 (RcFrameConsolidation.c)
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
