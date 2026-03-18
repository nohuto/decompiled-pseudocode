/*
 * XREFs of NtQueryDefaultLocale @ 0x14053D764
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionLocaleId @ 0x14053F4DC (MmGetSessionLocaleId.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  BOOLEAN v2; // r10
  NTSTATUS v3; // r9d
  char PreviousMode; // r8
  DWORD SessionLocaleId; // eax

  v2 = UserProfile;
  v3 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    *(_QWORD *)&UserProfile = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)DefaultLocaleId < 0x7FFFFFFF0000LL )
      *(_QWORD *)&UserProfile = DefaultLocaleId;
    *(_DWORD *)UserProfile = *(_DWORD *)UserProfile;
  }
  if ( v2 )
    SessionLocaleId = MmGetSessionLocaleId(UserProfile, DefaultLocaleId, PreviousMode, 0LL);
  else
    SessionLocaleId = PsDefaultSystemLocaleId;
  *DefaultLocaleId = SessionLocaleId;
  return v3;
}
