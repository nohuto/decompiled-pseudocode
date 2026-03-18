/*
 * XREFs of IopIsAddressRangeValid @ 0x140167028
 * Callers:
 *     IopAddTriageDumpDataBlock @ 0x140166F74 (IopAddTriageDumpDataBlock.c)
 *     IoFillTriageDumpBuffer @ 0x1401F0410 (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x1401F0BC0 (IoGetLoadedDriverInfo.c)
 *     IopWriteDriverList @ 0x1401F2DB0 (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x1401F6ED8 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1401F6FE4 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDevice @ 0x1401F717C (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401F7284 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1401F7374 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x1401F74F8 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x1401F75F8 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1401F7694 (IopAddBugcheckTriageWorkQueue.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402271CC (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400A58A0 (MiIsAddressValid.c)
 */

char __fastcall IopIsAddressRangeValid(__int64 a1, __int64 a2)
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
