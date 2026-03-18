/*
 * XREFs of MmSnapTriageDumpInformation @ 0x14021B6A8
 * Callers:
 *     IoWriteCrashDump @ 0x1401F6B7C (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401F8550 (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14011D9FC (HvlQueryVsmConnection.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiAddTriageDumpPtes @ 0x14021AD50 (MiAddTriageDumpPtes.c)
 */

__int64 __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int16 *v5; // rbx
  __int64 v6; // rdi

  memset(&MiTriageDumpData, 0, 0x38uLL);
  MiTriageDumpData = qword_14038B040;
  dword_140369BE8 = dword_140388C18;
  dword_140369BEC = dword_140388C14;
  dword_140369BF0 = dword_140388C1C;
  dword_140369BF4 = dword_140388C20;
  dword_140369BF8 = dword_140388C0C;
  qword_140369C00 = KeFeatureBits;
  dword_140369C08 = MEMORY[0xFFFFF78000000240];
  dword_140369C0C = MiFlags;
  HvlQueryVsmConnection(qword_140369C10);
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
