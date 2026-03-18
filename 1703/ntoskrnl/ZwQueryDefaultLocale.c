/*
 * XREFs of ZwQueryDefaultLocale @ 0x14017E1E0
 * Callers:
 *     NtInitializeNlsFiles @ 0x14049A2B4 (NtInitializeNlsFiles.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(UserProfile, DefaultLocaleId, v2);
}
