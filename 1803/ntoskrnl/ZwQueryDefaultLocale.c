/*
 * XREFs of ZwQueryDefaultLocale @ 0x1401A7760
 * Callers:
 *     NtInitializeNlsFiles @ 0x14056CA6C (NtInitializeNlsFiles.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(UserProfile);
}
