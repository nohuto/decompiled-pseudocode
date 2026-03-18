/*
 * XREFs of ExSetFirmwareEnvironmentVariable @ 0x1407189E0
 * Callers:
 *     PopCheckpointSystemSleepUnsafe @ 0x14041A768 (PopCheckpointSystemSleepUnsafe.c)
 *     PopClearSystemSleepCheckpoint @ 0x1406D5660 (PopClearSystemSleepCheckpoint.c)
 *     NtSetSystemEnvironmentValueEx @ 0x14071E604 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14071AFF4 (ExpSetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x14071BE1C (ExpUnicodeStringToNonpagedWStr.c)
 */

__int64 __fastcall ExSetFirmwareEnvironmentVariable(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  WCHAR *v6; // rdi
  unsigned int v7; // ebx

  if ( dword_140344B30 != 2 )
    return 3221225474LL;
  v6 = (WCHAR *)ExpUnicodeStringToNonpagedWStr();
  if ( !v6 )
    return 3221225626LL;
  v7 = ExpSetFirmwareEnvironmentVariable(v6, a5, 0);
  ExFreePoolWithTag(v6, 0);
  return v7;
}
