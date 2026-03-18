/*
 * XREFs of BiReleasePrivilege @ 0x14058D134
 * Callers:
 *     BiUnloadHiveByName @ 0x14057BA0C (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x14058CF74 (BiLoadHive.c)
 *     BiAddBootEntry @ 0x140735E8C (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x140737354 (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x14073739C (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x14073747C (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x1407381C8 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x140738214 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1407382CC (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x140738388 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x1407383E0 (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x140738574 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x1407393DC (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14017E0E0 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x14058D208 (BiAdjustPrivilege.c)
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
