/*
 * XREFs of ZwFlushKey @ 0x1401A9100
 * Callers:
 *     VfClearVerifierSettings @ 0x1402A95D4 (VfClearVerifierSettings.c)
 *     ExpRecordShutdownTime @ 0x1402B7940 (ExpRecordShutdownTime.c)
 *     PopFlushVolumes @ 0x140470660 (PopFlushVolumes.c)
 *     BcdFlushStore @ 0x1405EF220 (BcdFlushStore.c)
 *     CmpInterlockedFunction @ 0x1406308B8 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x140795050 (SepAuditFailed.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
