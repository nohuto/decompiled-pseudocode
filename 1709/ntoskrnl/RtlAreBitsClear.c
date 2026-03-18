/*
 * XREFs of RtlAreBitsClear @ 0x1400AFA40
 * Callers:
 *     MiCommitPageTablesForVad @ 0x140499490 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x140499780 (MiReturnPageTablePageCommitment.c)
 *     HvGetHiveLogFileStatus @ 0x1404E5FF0 (HvGetHiveLogFileStatus.c)
 *     CmpLoadHiveThread @ 0x1405BE770 (CmpLoadHiveThread.c)
 *     HvpDropPagedBins @ 0x1405BEF08 (HvpDropPagedBins.c)
 *     CmpMountPreloadedHives @ 0x1405C2F10 (CmpMountPreloadedHives.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreBitsClear(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  char v3; // r9
  unsigned int v4; // r10d
  BOOLEAN result; // al
  unsigned int *Buffer; // rcx
  unsigned int *v7; // r8
  unsigned int *v8; // r11
  unsigned int v9; // r9d

  v3 = Length;
  v4 = Length + StartingIndex - 1;
  if ( v4 >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length <= 1 )
  {
    if ( Length == 1 )
      return !_bittest((const signed __int32 *)BitMapHeader->Buffer, StartingIndex);
    return 0;
  }
  Buffer = BitMapHeader->Buffer;
  v7 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v8 = &Buffer[(unsigned __int64)v4 >> 5];
  if ( v7 == v8 )
  {
    v9 = 0xFFFFFFFF >> (32 - v3) << StartingIndex;
    return (*v7 & v9) == 0;
  }
  if ( ((-1 << StartingIndex) & *v7) != 0 )
    return 0;
  if ( ++v7 == v8 )
  {
LABEL_12:
    v9 = 0xFFFFFFFF >> ~(_BYTE)v4;
    return (*v7 & v9) == 0;
  }
  result = 0;
  while ( !*v7 )
  {
    if ( ++v7 == v8 )
      goto LABEL_12;
  }
  return result;
}
