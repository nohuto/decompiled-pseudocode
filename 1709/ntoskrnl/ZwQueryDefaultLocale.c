/*
 * XREFs of ZwQueryDefaultLocale @ 0x14017DB60
 * Callers:
 *     NtInitializeNlsFiles @ 0x14045DFB4 (NtInitializeNlsFiles.c)
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
