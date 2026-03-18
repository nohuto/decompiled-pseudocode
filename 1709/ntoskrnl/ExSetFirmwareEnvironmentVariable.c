/*
 * XREFs of ExSetFirmwareEnvironmentVariable @ 0x1407581E0
 * Callers:
 *     PopCheckpointSystemSleepUnsafe @ 0x14043A58C (PopCheckpointSystemSleepUnsafe.c)
 *     PopClearSystemSleepCheckpoint @ 0x14070B184 (PopClearSystemSleepCheckpoint.c)
 *     NtSetSystemEnvironmentValueEx @ 0x14075DF18 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14075A890 (ExpSetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x14075B6B4 (ExpUnicodeStringToNonpagedWStr.c)
 */

__int64 __fastcall ExSetFirmwareEnvironmentVariable(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  WCHAR *v6; // rdi
  unsigned int v7; // ebx

  if ( dword_14035E690 != 2 )
    return 3221225474LL;
  v6 = (WCHAR *)ExpUnicodeStringToNonpagedWStr();
  if ( !v6 )
    return 3221225626LL;
  v7 = ExpSetFirmwareEnvironmentVariable(v6, a5, 0);
  ExFreePoolWithTag(v6, 0);
  return v7;
}
