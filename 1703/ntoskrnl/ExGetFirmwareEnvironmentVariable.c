/*
 * XREFs of ExGetFirmwareEnvironmentVariable @ 0x1405D62A0
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x140585BC8 (NtQuerySystemEnvironmentValueEx.c)
 *     PopCheckShutdownMarker @ 0x140824044 (PopCheckShutdownMarker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1407199A0 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x14071BE1C (ExpUnicodeStringToNonpagedWStr.c)
 */

__int64 __fastcall ExGetFirmwareEnvironmentVariable(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  WCHAR *v6; // rdi
  unsigned int FirmwareEnvironmentVariable; // ebx

  if ( dword_140344B30 != 2 )
    return 3221225474LL;
  v6 = (WCHAR *)ExpUnicodeStringToNonpagedWStr();
  if ( !v6 )
    return 3221225626LL;
  FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable(v6, a5, 0);
  ExFreePoolWithTag(v6, 0);
  return FirmwareEnvironmentVariable;
}
