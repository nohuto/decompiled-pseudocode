/*
 * XREFs of MmSnapTriageDumpInformation @ 0x1402136C4
 * Callers:
 *     IoWriteCrashDump @ 0x1401F1224 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401F2BDC (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14002F528 (HvlQueryVsmConnection.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiAddTriageDumpPtes @ 0x140212FAC (MiAddTriageDumpPtes.c)
 */

__int64 __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int16 *v5; // rbx
  __int64 v6; // rdi

  memset(&MiTriageDumpData, 0, 0x38uLL);
  MiTriageDumpData = qword_140381100;
  dword_14034F168 = dword_14036CA20;
  dword_14034F16C = dword_14036CA1C;
  dword_14034F170 = dword_14036CA24;
  dword_14034F174 = dword_14036CA28;
  dword_14034F178 = dword_14036CA14;
  qword_14034F180 = KeFeatureBits;
  dword_14034F188 = MEMORY[0xFFFFF78000000240];
  dword_14034F18C = MiFlags;
  HvlQueryVsmConnection(&qword_14034F190);
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
