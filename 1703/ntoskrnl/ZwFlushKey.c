/*
 * XREFs of ZwFlushKey @ 0x14017FB40
 * Callers:
 *     ExpRecordShutdownTime @ 0x140259E30 (ExpRecordShutdownTime.c)
 *     PopFlushVolumes @ 0x14040B580 (PopFlushVolumes.c)
 *     BcdFlushStore @ 0x140578E8C (BcdFlushStore.c)
 *     CmpInterlockedFunction @ 0x1405A66C0 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x1406F9D10 (SepAuditFailed.c)
 *     VfUtilClearOneBootSettings @ 0x1407650A8 (VfUtilClearOneBootSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
