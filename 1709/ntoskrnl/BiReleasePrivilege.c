/*
 * XREFs of BiReleasePrivilege @ 0x1405B16E8
 * Callers:
 *     BiLoadHive @ 0x1405B1528 (BiLoadHive.c)
 *     BiUnloadHiveByName @ 0x140779940 (BiUnloadHiveByName.c)
 *     BiAddBootEntry @ 0x14077A2D0 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x14077B8DC (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x14077B954 (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x14077BA34 (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x14077C840 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x14077C88C (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x14077C944 (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x14077CAAC (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x14077CB04 (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x14077CCC8 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x14077DC34 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14017DA60 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x1405B17BC (BiAdjustPrivilege.c)
 */

NTSTATUS __fastcall BiReleasePrivilege(unsigned int *a1)
{
  NTSTATUS result; // eax
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)a1 + 4) )
    result = BiAdjustPrivilege(*a1, 0LL, &ThreadInformation);
  if ( !*((_BYTE *)a1 + 5) )
  {
    ThreadInformation = 0LL;
    return ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  return result;
}
