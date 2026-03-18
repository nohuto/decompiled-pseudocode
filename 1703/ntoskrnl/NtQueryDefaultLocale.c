/*
 * XREFs of NtQueryDefaultLocale @ 0x1404432C0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionLocaleId @ 0x1404F89CC (MmGetSessionLocaleId.c)
 */

NTSTATUS __stdcall NtQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  __int64 v4; // rcx
  DWORD SessionLocaleId; // eax

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)DefaultLocaleId < 0x7FFFFFFF0000LL )
      v4 = (__int64)DefaultLocaleId;
    *(_DWORD *)v4 = *(_DWORD *)v4;
  }
  if ( UserProfile )
    SessionLocaleId = MmGetSessionLocaleId();
  else
    SessionLocaleId = PsDefaultSystemLocaleId;
  *DefaultLocaleId = SessionLocaleId;
  return 0;
}
