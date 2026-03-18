/*
 * XREFs of BiReleasePrivilege @ 0x1406069F8
 * Callers:
 *     BiUnloadHiveByName @ 0x1405EE3C0 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140606838 (BiLoadHive.c)
 *     BiAddBootEntry @ 0x1407E2CA0 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x1407E42EC (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x1407E4364 (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x1407E446C (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x1407E5290 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x1407E52F8 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1407E53CC (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x1407E5550 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x1407E55C0 (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x1407E579C (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x1407E6630 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1401A7660 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x140606ACC (BiAdjustPrivilege.c)
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
