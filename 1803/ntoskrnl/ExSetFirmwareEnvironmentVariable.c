/*
 * XREFs of ExSetFirmwareEnvironmentVariable @ 0x1407BEE40
 * Callers:
 *     PopCheckpointSystemSleepUnsafe @ 0x1404874A4 (PopCheckpointSystemSleepUnsafe.c)
 *     PopClearSystemSleepCheckpoint @ 0x1405EF798 (PopClearSystemSleepCheckpoint.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407C4F40 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407C17BC (ExpSetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x1407C2670 (ExpUnicodeStringToNonpagedWStr.c)
 */

__int64 __fastcall ExSetFirmwareEnvironmentVariable(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  WCHAR *v6; // rdi
  unsigned int v7; // ebx

  if ( dword_1403A1C50 != 2 )
    return 3221225474LL;
  v6 = (WCHAR *)ExpUnicodeStringToNonpagedWStr();
  if ( !v6 )
    return 3221225626LL;
  v7 = ExpSetFirmwareEnvironmentVariable(v6, a5, 0);
  ExFreePoolWithTag(v6, 0);
  return v7;
}
