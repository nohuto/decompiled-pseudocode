/*
 * XREFs of MmSnapTriageDumpInformation @ 0x140257910
 * Callers:
 *     IoWriteCrashDump @ 0x140233E8C (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1402359C0 (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140084C68 (HvlQueryVsmConnection.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiAddTriageDumpPtes @ 0x140257290 (MiAddTriageDumpPtes.c)
 */

__int64 __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int16 *v5; // rbx
  __int64 v6; // rdi

  memset(&MiTriageDumpData, 0, 0x38uLL);
  MiTriageDumpData = qword_1403CEF00;
  dword_1403ACC68 = dword_1403CBEB4;
  dword_1403ACC6C = dword_1403CBEB0;
  dword_1403ACC70 = dword_1403CBEB8;
  dword_1403ACC74 = dword_1403CBEBC;
  dword_1403ACC78 = dword_1403CBEA8;
  qword_1403ACC80 = KeFeatureBits;
  dword_1403ACC88 = MEMORY[0xFFFFF78000000240];
  dword_1403ACC8C = MiFlags;
  HvlQueryVsmConnection(qword_1403ACC90);
  v4 = 4LL;
  do
  {
    MiAddTriageDumpPtes(*a2++);
    --v4;
  }
  while ( v4 );
  v5 = (unsigned __int16 *)&IopRunTimeContextOffsets;
  v6 = 15LL;
  do
  {
    MiAddTriageDumpPtes(*(_QWORD *)(*v5++ + a1));
    --v6;
  }
  while ( v6 );
  return IoAddTriageDumpDataBlock((int)&MiTriageDumpData, 56);
}
