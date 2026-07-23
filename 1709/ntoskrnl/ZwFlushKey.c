/*
 * XREFs of ZwFlushKey @ 0x14017F4E0
 * Callers:
 *     VfClearVerifierSettings @ 0x140276548 (VfClearVerifierSettings.c)
 *     ExpRecordShutdownTime @ 0x140283B80 (ExpRecordShutdownTime.c)
 *     PopFlushVolumes @ 0x140436890 (PopFlushVolumes.c)
 *     CmpInterlockedFunction @ 0x1405C2DE8 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x140731750 (SepAuditFailed.c)
 *     BcdFlushStore @ 0x140778A44 (BcdFlushStore.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
