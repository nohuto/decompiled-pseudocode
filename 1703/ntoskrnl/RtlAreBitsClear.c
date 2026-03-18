/*
 * XREFs of RtlAreBitsClear @ 0x14006DCF0
 * Callers:
 *     HvGetHiveLogFileStatus @ 0x1404B6514 (HvGetHiveLogFileStatus.c)
 *     MiCommitPageTablesForVad @ 0x14051D620 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x14051DC80 (MiReturnPageTablePageCommitment.c)
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 *     HvpDropPagedBins @ 0x1405BCFDC (HvpDropPagedBins.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreBitsClear(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  char v3; // r9
  unsigned int v4; // r10d
  unsigned int *Buffer; // rcx
  unsigned int *v6; // r8
  unsigned int *v7; // r11
  unsigned int v8; // r9d
  BOOLEAN v9; // cl
  bool i; // zf

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
  v6 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v7 = &Buffer[(unsigned __int64)v4 >> 5];
  if ( v6 == v7 )
  {
    v8 = 0xFFFFFFFF >> (32 - v3) << StartingIndex;
    return (v8 & *v6) == 0;
  }
  else
  {
    v9 = 0;
    for ( i = ((-1 << StartingIndex) & *v6) == 0; i; i = *v6 == 0 )
    {
      if ( ++v6 == v7 )
      {
        v8 = 0xFFFFFFFF >> ~(_BYTE)v4;
        return (v8 & *v6) == 0;
      }
    }
  }
  return v9;
}
