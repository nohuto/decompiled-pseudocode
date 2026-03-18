/*
 * XREFs of ExGetFirmwareEnvironmentVariable @ 0x14057FF60
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x14057FEC8 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpIsIumEncryptionKeyAvailable @ 0x1407BB250 (ExpIsIumEncryptionKeyAvailable.c)
 *     PopCheckShutdownMarker @ 0x1408A8FA8 (PopCheckShutdownMarker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1407C0090 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x1407C2670 (ExpUnicodeStringToNonpagedWStr.c)
 */

__int64 __fastcall ExGetFirmwareEnvironmentVariable(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  WCHAR *v6; // rdi
  unsigned int FirmwareEnvironmentVariable; // ebx

  if ( dword_1403A1C50 != 2 )
    return 3221225474LL;
  v6 = (WCHAR *)ExpUnicodeStringToNonpagedWStr();
  if ( !v6 )
    return 3221225626LL;
  FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable(v6, a5, 0);
  ExFreePoolWithTag(v6, 0);
  return FirmwareEnvironmentVariable;
}
