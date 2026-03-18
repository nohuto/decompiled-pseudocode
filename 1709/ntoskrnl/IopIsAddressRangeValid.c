/*
 * XREFs of IopIsAddressRangeValid @ 0x14015ADD0
 * Callers:
 *     IopAddTriageDumpDataBlock @ 0x14015AD1C (IopAddTriageDumpDataBlock.c)
 *     IoFillTriageDumpBuffer @ 0x1401F5B40 (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x1401F6484 (IoGetLoadedDriverInfo.c)
 *     IopWriteDriverList @ 0x1401F8724 (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x1401FCD2C (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1401FCE38 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDevice @ 0x1401FCFD0 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401FD0DC (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1401FD1CC (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x1401FD328 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x1401FD428 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1401FD4C4 (IopAddBugcheckTriageWorkQueue.c)
 *     PopInternalSaveStackToDumpFile @ 0x140239EA0 (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
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
