/*
 * XREFs of IopAddBugcheckPnpWatchdogTriageData @ 0x140239AD0
 * Callers:
 *     IopUpdateMinidumpContext @ 0x1402354E0 (IopUpdateMinidumpContext.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x140185978 (KiIsAddressRangeValid.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x140239D14 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x140239DD0 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x140239ED8 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x14023A124 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14023A2C0 (IopAddBugcheckTriageWorkQueue.c)
 */

__int64 __fastcall IopAddBugcheckPnpWatchdogTriageData(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v3 = 0;
  IopAddBugcheckTriageThread(a2);
  if ( KiIsAddressRangeValid((__int64)a1, 80LL) )
  {
    IoAddTriageDumpDataBlock((int)a1, 80);
    IopAddBugcheckTriageCompletionQueue(a1[5]);
    IopAddBugcheckTriageWorkQueue(a1[6]);
    v4 = a1[2];
    if ( v4 )
      IopAddBugcheckTriageThread(v4);
    v5 = a1[3];
    if ( v5 )
      IopAddBugcheckTriageThread(v5);
    v6 = a1[4];
    if ( v6 )
      IopAddBugcheckTriageThread(v6);
    if ( a1[8] )
      IopAddBugcheckTriageDevice();
    v7 = a1[7];
    if ( v7 )
      IopAddBugcheckTriageDeviceNode(v7);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
