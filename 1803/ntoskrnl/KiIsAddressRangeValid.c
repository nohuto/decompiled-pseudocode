/*
 * XREFs of KiIsAddressRangeValid @ 0x140185978
 * Callers:
 *     IopAddTriageDumpDataBlock @ 0x1401858C4 (IopAddTriageDumpDataBlock.c)
 *     IoFillTriageDumpBuffer @ 0x140233034 (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x14023380C (IoGetLoadedDriverInfo.c)
 *     IopWriteDriverList @ 0x140235B9C (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x140239A68 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x140239AD0 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140239B78 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x140239D14 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x140239DD0 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x140239ED8 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x140239FC8 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14023A124 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14023A224 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14023A2C0 (IopAddBugcheckTriageWorkQueue.c)
 *     KeAddTriageDumpDataBlock @ 0x1402428F0 (KeAddTriageDumpDataBlock.c)
 *     KiValidateTriageDumpDataArray @ 0x140244788 (KiValidateTriageDumpDataArray.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402713B4 (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MiIsAddressValid @ 0x140122C40 (MiIsAddressValid.c)
 */

char __fastcall KiIsAddressRangeValid(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( !v3 )
    return 1;
  while ( v2 >= 0x10000 && MiIsAddressValid(v2) )
  {
    v2 += 4096LL;
    if ( !--v3 )
      return 1;
  }
  return 0;
}
